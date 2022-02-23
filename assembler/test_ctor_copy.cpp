//  Stack class test program
//
//  Tests: Copy ctor for Stack
//

#include "stack.hpp"
#include "../string/string.hpp"
#include <cassert>
#include <iostream> 

//===========================================================================
int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char> y;

        // TEST
        y.push('a');
        stack<char> x(y);

        // VERIFY
        assert(x.pop() == 'a');
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int> y;

        // TEST
        y.push(1);
        stack<int> x(y);

        // VERIFY
        assert(x.pop() == 1);
        
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String> y;

        // TEST
        y.push("abc");
        stack<String> x(y);
        

        // VERIFY
        assert(x.pop() == "abc");
         
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<double> y;

        // TEST
        y.push(1.2);
        stack<double> x(y);
        

        // VERIFY
        assert(x.pop() == 1.2);
         
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<bool> y;

        // TEST
        y.push(true);
        stack<bool> x(y);
        

        // VERIFY
        assert(x.pop() == true);
         
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int> y;

        // TEST
        y.push(3);
        y.push(2);
        y.push(1);
        stack<int> x(y);
        

        // VERIFY
        assert(x.pop() == 1);
        assert(x.pop() == 2);
        assert(x.pop() == 3);
         
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char> y;

        // TEST
        y.push('a');
        y.push('b');
        y.push('c');
        stack<char> x(y);
        

        // VERIFY
        assert(x.pop() == 'c');
        assert(x.pop() == 'b');
        assert(x.pop() == 'a');
         
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String> y;

        // TEST
        y.push("abc");
        y.push("def");
        y.push("ghi");
        stack<String> x(y);
        

        // VERIFY
        assert(x.pop() == "ghi");
        assert(x.pop() == "def");
        assert(x.pop() == "abc");
         
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<double> y;

        // TEST
        y.push(1.2);
        y.push(2.3);
        y.push(3.4);
        stack<double> x(y);
        

        // VERIFY
        assert(x.pop() == 3.4);
        assert(x.pop() == 2.3);
        assert(x.pop() == 1.2);
         
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<bool> y;

        // TEST
        y.push(true);
        y.push(false);
        y.push(false);

        stack<bool> x(y);
        

        // VERIFY
        assert(x.pop() == false);
        assert(x.pop() == false);
        assert(x.pop() == true);
    }
    
    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing copy ctor." << std::endl;
    return 0;
}

