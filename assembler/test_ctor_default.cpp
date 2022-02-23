//  Stack class test program
//
//  Tests: XXX
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

        // TEST
        stack<int>  x;

        // VERIFY
        assert(x.empty());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<char>  x;

        // VERIFY
        assert(x.empty());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String>  x;

        // VERIFY
        assert(x.empty());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<float>  x;

        // VERIFY
        assert(x.empty());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<double>  x;

        // VERIFY
        assert(x.empty());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<bool>  x;

        // VERIFY
        assert(x.empty());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int*>  x;

        // VERIFY
        assert(x.empty());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<char*>  x;

        // VERIFY
        assert(x.empty());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<bool*>  x;

        // VERIFY
        assert(x.empty());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<double*>  x;

        // VERIFY
        assert(x.empty());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<float*>  x;

        // VERIFY
        assert(x.empty());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String*>  x;

        // VERIFY
        assert(x.empty());
    }
    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing XXX." << std::endl;
    return 0;
}

