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
        assert(x.pop() == 1);

    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char>  x;

        // TEST
        x.push('a');

        // VERIFY
        assert(!x.empty());
        assert(x.pop() == 'a');

    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;

        // TEST
        x.push("ABCD");

        // VERIFY
        assert(!x.empty());
        assert(x.pop() == "ABCD");

    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<double>  x;

        // TEST
        x.push(2.5);

        // VERIFY
        assert(!x.empty());
        assert(x.pop() == 2.5);

    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<bool>  x;

        // TEST
        x.push(true);

        // VERIFY
        assert(!x.empty());
        assert(x.pop() == true);

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
        assert(x.pop() == ptr);
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
        assert(x.pop() == ptr);
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
        assert(x.pop() == ptr);
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
        assert(x.pop() == ptr);
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
        assert(x.pop() == ptr);
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
        assert(x.pop() == 3);
        assert(x.pop() == 2);
        assert(x.pop() == 1);

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
        assert(x.pop() == 'c');
        assert(x.pop() == 'b');
        assert(x.pop() == 'a');

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
        assert(x.pop() == "Third");
        assert(x.pop() == "Second");
        assert(x.pop() == "First");

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
        assert(x.pop() == "Third");
        assert(x.pop() == "Second");
        assert(x.pop() == "First");

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
        assert(x.pop() == 3.0);
        assert(x.pop() == 2.0);
        assert(x.pop() == 1.0);

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
        assert(x.pop() == true);
        assert(x.pop() == false);
        assert(x.pop() == false);

    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;

        // TEST
        x.push(1);
        x.push(2);
        x.pop();

        // VERIFY
        assert(!x.empty());
        assert(x.pop() == 1);

    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char>  x;

        // TEST
        x.push('1');
        x.push('2');
        x.pop();

        // VERIFY
        assert(!x.empty());
        assert(x.pop() == '1');

    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;

        // TEST
        x.push("123");
        x.push("456");
        x.pop();

        // VERIFY
        assert(!x.empty());
        assert(x.pop() == "123");

    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<double>  x;

        // TEST
        x.push(3.2);
        x.push(1.5);
        x.pop();

        // VERIFY
        assert(!x.empty());
        assert(x.pop() == 3.2);

    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<bool>  x;

        // TEST
        x.push(true);
        x.push(false);
        x.pop();

        // VERIFY
        assert(!x.empty());
        assert(x.pop() == true);

    }
    std::cout << "Done testing push and pop methods." << std::endl;
    return 0;
}
