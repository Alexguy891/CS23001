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

        // TEST
        x.push(1);

        // VERIFY
        assert(!x.empty());
        assert(x.top() == 1);

    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char>  x;

        // TEST
        x.push('a');

        // VERIFY
        assert(!x.empty());
        assert(x.top() == 'a');

    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;

        // TEST
        x.push("ABCD");

        // VERIFY
        assert(!x.empty());
        assert(x.top() == "ABCD");

    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<double>  x;

        // TEST
        x.push(2.5);

        // VERIFY
        assert(!x.empty());
        assert(x.top() == 2.5);

    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<bool>  x;

        // TEST
        x.push(true);

        // VERIFY
        assert(!x.empty());
        assert(x.top() == true);

    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int*>  x;
        int *ptr = new int;
        *ptr = 1;
        // TEST
        x.push(ptr);

        // VERIFY
        assert(!x.empty());
        assert(x.top() == ptr);
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char*>  x;
        char *ptr = new char;
        *ptr = 'a';
        // TEST
        x.push(ptr);

        // VERIFY
        assert(!x.empty());
        assert(x.top() == ptr);
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String*>  x;
        String *ptr = new String;
        *ptr = "testing";
        // TEST
        x.push(ptr);

        // VERIFY
        assert(!x.empty());
        assert(x.top() == ptr);
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<double*>  x;
        double *ptr = new double;
        *ptr = 1.5;
        // TEST
        x.push(ptr);

        // VERIFY
        assert(!x.empty());
        assert(x.top() == ptr);
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<bool*>  x;
        bool *ptr = new bool;
        *ptr = false;
        // TEST
        x.push(ptr);

        // VERIFY
        assert(!x.empty());
        assert(x.top() == ptr);
    }
    // ADD ADDITIONAL TESTS AS NECESSARY
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;

        // TEST
        x.push(1);
        x.push(2);
        x.push(3);

        // VERIFY
        assert(!x.empty());
        assert(x.top() == 3);

    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char>  x;

        // TEST
        x.push('a');
        x.push('b');
        x.push('c');

        // VERIFY
        assert(!x.empty());
        assert(x.top() == 'c');


    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;

        // TEST
        x.push("First");
        x.push("Second");
        x.push("Third");

        // VERIFY
        assert(!x.empty());
        assert(x.top() == "Third");


    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;

        // TEST
        x.push("First");
        x.push("Second");
        x.push("Third");

        // VERIFY
        assert(!x.empty());
        assert(x.top() == "Third");

    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<double>  x;

        // TEST
        x.push(1.0);
        x.push(2.0);
        x.push(3.0);

        // VERIFY
        assert(!x.empty());
        assert(x.top() == 3.0);

    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<bool>  x;

        // TEST
        x.push(false);
        x.push(false);
        x.push(true);

        // VERIFY
        assert(!x.empty());
        assert(x.top() == true);


    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;

        // TEST
        x.push(1);
        x.push(2);
       

        // VERIFY
        assert(!x.empty());
        assert(x.top() == 2);

    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char>  x;

        // TEST
        x.push('1');
        x.push('2');
       

        // VERIFY
        assert(!x.empty());
        assert(x.top() == '2');

    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;

        // TEST
        x.push("123");
        x.push("456");
       

        // VERIFY
        assert(!x.empty());
        assert(x.top() == "456");

    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<double>  x;

        // TEST
        x.push(3.2);
        x.push(1.5);
       

        // VERIFY
        assert(!x.empty());
        assert(x.top() == 1.5);

    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<bool>  x;

        // TEST
        x.push(true);
        x.push(false);
       

        // VERIFY
        assert(!x.empty());
        assert(x.top() == false);

    }
    std::cout << "Done testing top method." << std::endl;
    return 0;
}
