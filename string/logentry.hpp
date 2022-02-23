#ifndef CS_LOGENTRY_H_
#define CS_LOGENTRY_H_

////////////////////////////////////////////////////////////
//
// File:        logentry.hpp 
//       
// Version:     1.0
// Date:        
// Author:   
//
// Description: Class definition for a log entry.
//
//
//

////////////////////////////////////////////////////////////
#include <iostream>
#include <vector>

#include "string.hpp" 

////////////////////////////////////////////////////////////
class Date { 
public:
        Date() {};
        Date(String);
private:
    String day, month, year;
};

////////////////////////////////////////////////////////////
class Time {
  public:
        Time() {};
        Time(String);
  private:
    String hour, minute, second;
};


////////////////////////////////////////////////////////////
class LogEntry {
public:
            LogEntry() {};
            LogEntry(String);
    friend  std::ostream& operator<< (std::ostream&, const LogEntry&);
    friend  String        outputHost (const LogEntry&);
    friend  int           outputBytes(const LogEntry&);

private:
    String  content;
    String  host;
    Date    date;
    Time    time;
    String  request;
    String  status;
    int     number_of_bytes;
};


////////////////////////////////////////////////////////////
//
// Free functions
//

std::vector<LogEntry>   parse       (std::istream&);
void                    by_host     (std::ostream&, const std::vector<LogEntry> &);
void                    output_all  (std::ostream&, const std::vector<LogEntry> &);
int                     byte_count  (const std::vector<LogEntry>&);

#endif
 
