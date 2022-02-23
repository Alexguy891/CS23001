//  Stack class test program
//
//  Tests: push and pop methods for Stack
//

#include "stack.hpp"
#include <cassert>
#include <iostream>
 
//===========================================================================
int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;
        stack<int> y;

        // TEST
        y.push(2);
        x.swap(y);
        

        // VERIFY
        assert(x.pop() == 2);
        assert(y.empty());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char>  x;
        stack<char> y;

        // TEST
        y.push('a');
        x.swap(y);
        

        // VERIFY
        assert(x.pop() == 'a');
        assert(y.empty());

    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;
        stack<String> y;

        // TEST
        y.push("abc");
        x.swap(y);
        

        // VERIFY
        assert(x.pop() == "abc");
        assert(y.empty());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;
        stack<String> y;

        // TEST
        y.push("abc");
        x.swap(y);
        

        // VERIFY
        assert(x.pop() == "abc");
        assert(y.empty());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<double>  x;
        stack<double> y;

        // TEST
        y.push(1.2);
        x.swap(y);
        

        // VERIFY
        assert(x.pop() == 1.2);
        assert(y.empty());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<bool>  x;
        stack<bool> y;

        // TEST
        y.push(true);
        x.swap(y);
        

        // VERIFY
        assert(x.pop() == true);
        assert(y.empty());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;
        stack<int> y;

        // TEST
        y.push(3);
        y.push(2);
        y.push(1);
        x.swap(y);
        

        // VERIFY
        assert(x.pop() == 1);
        assert(x.pop() == 2);
        assert(x.pop() == 3);
        assert(y.empty());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char>  x;
        stack<char> y;

        // TEST
        y.push('a');
        y.push('b');
        y.push('c');
        x.swap(y);
        

        // VERIFY
        assert(x.pop() == 'c');
        assert(x.pop() == 'b');
        assert(x.pop() == 'a');
        assert(y.empty());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;
        stack<String> y;

        // TEST
        y.push("abc");
        y.push("def");
        y.push("ghi");
        x.swap(y);
        

        // VERIFY
        assert(x.pop() == "ghi");
        assert(x.pop() == "def");
        assert(x.pop() == "abc");
        assert(y.empty());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<double>  x;
        stack<double> y;

        // TEST
        y.push(1.2);
        y.push(2.3);
        y.push(3.4);
        x.swap(y);
        

        // VERIFY
        assert(x.pop() == 3.4);
        assert(x.pop() == 2.3);
        assert(x.pop() == 1.2);
        assert(y.empty());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<bool>  x;
        stack<bool> y;

        // TEST
        y.push(true);
        y.push(false);
        y.push(false);
        x.swap(y);
        

        // VERIFY
        assert(x.pop() == false);
        assert(x.pop() == false);
        assert(x.pop() == true);
        assert(y.empty());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<bool>  x;
        stack<bool> y;

        // TEST
        y.push(true);
        y.push(true);
        y.push(false);

        x.push(false);
        x.push(false);
        x.push(true);

        x.swap(y);
        

        // VERIFY
        assert(y.pop() == true);
        assert(y.pop() == false);
        assert(y.pop() == false);

        assert(x.pop() == false);
        assert(x.pop() == true);
        assert(x.pop() == true);
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<double>  x;
        stack<double> y;

        // TEST
        y.push(1.2);
        y.push(2.3);
        y.push(3.4);

        x.push(10.1);
        x.push(10.2);
        x.push(10.3);

        x.swap(y);
        

        // VERIFY
        assert(y.pop() == 10.3);
        assert(y.pop() == 10.2);
        assert(y.pop() == 10.1);

        assert(x.pop() == 3.4);
        assert(x.pop() == 2.3);
        assert(x.pop() == 1.2);
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;
        stack<String> y;

        // TEST
        y.push("first");
        y.push("second");
        y.push("third");

        x.push("unos");
        x.push("dos");
        x.push("quatro");

        x.swap(y);
        

        // VERIFY
        assert(y.pop() == "quatro");
        assert(y.pop() == "dos");
        assert(y.pop() == "unos");

        assert(x.pop() == "third");
        assert(x.pop() == "second");
        assert(x.pop() == "first");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char>  x;
        stack<char> y;

        // TEST
        y.push('a');
        y.push('b');
        y.push('c');

        x.push('1');
        x.push('2');
        x.push('3');

        x.swap(y);
        

        // VERIFY
        assert(y.pop() == '3');
        assert(y.pop() == '2');
        assert(y.pop() == '1');

        assert(x.pop() == 'c');
        assert(x.pop() == 'b');
        assert(x.pop() == 'a');
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;
        stack<int> y;

        // TEST
        y.push(1);
        y.push(2);
        y.push(3);

        x.push(4);
        x.push(5);
        x.push(6);

        x.swap(y);
        

        // VERIFY
        assert(y.pop() == 6);
        assert(y.pop() == 5);
        assert(y.pop() == 4);

        assert(x.pop() == 3);
        assert(x.pop() == 2);
        assert(x.pop() == 1);
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;
        stack<int> y;

        // TEST
        x.push(2);
        x.swap(y);
        

        // VERIFY
        assert(y.pop() == 2);
        assert(x.empty());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char>  x;
        stack<char> y;

        // TEST
        x.push('a');
        x.swap(y);
        

        // VERIFY
        assert(y.pop() == 'a');
        assert(x.empty());

    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;
        stack<String> y;

        // TEST
        x.push("abc");
        x.swap(y);
        

        // VERIFY
        assert(y.pop() == "abc");
        assert(x.empty());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;
        stack<String> y;

        // TEST
        x.push("abc");
        x.swap(y);
        

        // VERIFY
        assert(y.pop() == "abc");
        assert(x.empty());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<double>  x;
        stack<double> y;

        // TEST
        x.push(1.2);
        x.swap(y);
        

        // VERIFY
        assert(y.pop() == 1.2);
        assert(x.empty());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<bool>  x;
        stack<bool> y;

        // TEST
        x.push(true);
        x.swap(y);
        

        // VERIFY
        assert(y.pop() == true);
        assert(x.empty());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;
        stack<int> y;

        // TEST
        x.push(3);
        x.push(2);
        x.push(1);
        x.swap(y);
        

        // VERIFY
        assert(y.pop() == 1);
        assert(y.pop() == 2);
        assert(y.pop() == 3);
        assert(x.empty());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char>  x;
        stack<char> y;

        // TEST
        x.push('a');
        x.push('b');
        x.push('c');
        x.swap(y);
        

        // VERIFY
        assert(y.pop() == 'c');
        assert(y.pop() == 'b');
        assert(y.pop() == 'a');
        assert(x.empty());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;
        stack<String> y;

        // TEST
        x.push("abc");
        x.push("def");
        x.push("ghi");
        x.swap(y);
        

        // VERIFY
        assert(y.pop() == "ghi");
        assert(y.pop() == "def");
        assert(y.pop() == "abc");
        assert(x.empty());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<double>  x;
        stack<double> y;

        // TEST
        x.push(1.2);
        x.push(2.3);
        x.push(3.4);
        x.swap(y);
        

        // VERIFY
        assert(y.pop() == 3.4);
        assert(y.pop() == 2.3);
        assert(y.pop() == 1.2);
        assert(x.empty());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<bool>  x;
        stack<bool> y;

        // TEST
        x.push(true);
        x.push(false);
        x.push(false);
        x.swap(y);
        

        // VERIFY
        assert(y.pop() == false);
        assert(y.pop() == false);
        assert(y.pop() == true);
        assert(x.empty());
    }
    ///////////////////////
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;
        stack<int> y;

        // TEST
        y.push(2);
        x.swap(y);
        

        // VERIFY
        assert(x.pop() == 2);
        assert(y.empty());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char> x;
        stack<char> y;

        // TEST
        y.push('a');
        x = y;

        // VERIFY
        assert(x.pop() == 'a');
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;
        stack<String> y;

        // TEST
        y.push("abc");
        x = y;

        // VERIFY
        assert(x.pop() == "abc");
        
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;
        stack<String> y;

        // TEST
        y.push("abc");
        x = y;
        

        // VERIFY
        assert(x.pop() == "abc");
         
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<double>  x;
        stack<double> y;

        // TEST
        y.push(1.2);
        x = y;
        

        // VERIFY
        assert(x.pop() == 1.2);
         
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<bool>  x;
        stack<bool> y;

        // TEST
        y.push(true);
        x = y;
        

        // VERIFY
        assert(x.pop() == true);
         
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;
        stack<int> y;

        // TEST
        y.push(3);
        y.push(2);
        y.push(1);
        x = y;
        

        // VERIFY
        assert(x.pop() == 1);
        assert(x.pop() == 2);
        assert(x.pop() == 3);
         
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char>  x;
        stack<char> y;

        // TEST
        y.push('a');
        y.push('b');
        y.push('c');
        x = y;
        

        // VERIFY
        assert(x.pop() == 'c');
        assert(x.pop() == 'b');
        assert(x.pop() == 'a');
         
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;
        stack<String> y;

        // TEST
        y.push("abc");
        y.push("def");
        y.push("ghi");
        x = y;
        

        // VERIFY
        assert(x.pop() == "ghi");
        assert(x.pop() == "def");
        assert(x.pop() == "abc");
         
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<double>  x;
        stack<double> y;

        // TEST
        y.push(1.2);
        y.push(2.3);
        y.push(3.4);
        x = y;
        

        // VERIFY
        assert(x.pop() == 3.4);
        assert(x.pop() == 2.3);
        assert(x.pop() == 1.2);
         
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<bool>  x;
        stack<bool> y;

        // TEST
        y.push(true);
        y.push(false);
        y.push(false);

        x = y;
        

        // VERIFY
        assert(x.pop() == false);
        assert(x.pop() == false);
        assert(x.pop() == true);
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<bool>  x;
        stack<bool> y;

        // TEST
        y.push(true);
        y.push(true);
        y.push(false);

        x.push(false);
        x.push(false);
        x.push(true);

        x = y;
        

        // VERIFY
        assert(x.pop() == false);
        assert(x.pop() == true);
        assert(x.pop() == true);
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<double>  x;
        stack<double> y;

        // TEST
        y.push(1.2);
        y.push(2.3);
        y.push(3.4);

        x.push(10.1);
        x.push(10.2);
        x.push(10.3);

        x = y;
        

        // VERIFY
        assert(x.pop() == 3.4);
        assert(x.pop() == 2.3);
        assert(x.pop() == 1.2);
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;
        stack<String> y;

        // TEST
        y.push("first");
        y.push("second");
        y.push("third");

        x.push("unos");
        x.push("dos");
        x.push("quatro");

        x = y;
        

        // VERIFY
        assert(x.pop() == "third");
        assert(x.pop() == "second");
        assert(x.pop() == "first");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char>  x;
        stack<char> y;

        // TEST
        y.push('a');
        y.push('b');
        y.push('c');

        x.push('1');
        x.push('2');
        x.push('3');

        x = y;
        

        // VERIFY
        assert(x.pop() == 'c');
        assert(x.pop() == 'b');
        assert(x.pop() == 'a');
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;
        stack<int> y;

        // TEST
        y.push(1);
        y.push(2);
        y.push(3);

        x.push(4);
        x.push(5);
        x.push(6);

        x = y;
        

        // VERIFY
        assert(x.pop() == 3);
        assert(x.pop() == 2);
        assert(x.pop() == 1);
    }
    std::cout << "Done testing assignment." << std::endl;
    return 0;
}
