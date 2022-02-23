// bigint Test Program
//
// Tests:  subscript, uses ==
//
// NEED TO IMPLEMENT
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    
    {
        // Setup
        bigint bi(4);

        // Test 
        int digit = bi[0];

        // Verify
        assert(bi    == 4);  //Wrong.  Will FAIL.  Fix and add test cases.
        assert(digit == 4);
    }
    
    //Add test cases!!
    {
        // Setup
        bigint bi(222202393);

        // Test
        int digit = bi[5];

        // Verify
        assert(bi    == 222202393);
        assert(digit == 2);
    }
    {
        // Setup
        bigint bi("123456789");

        // Test
        int digit = bi[8];

        // Verify
        assert(bi    == "123456789");
        assert(digit == 1);
    }
    {
        // Setup
        bigint bi("0000001");

        // Test
        int digit = bi[3];

        // Verify
        assert(bi    == "0000001");
        assert(digit == 0);
    }
    {
        // Setup
        bigint bi("0111192");

        // Test
        int digit = bi[3];

        // Verify
        assert(bi    == "0111192");
        assert(digit == 1);
    }
    {
        // Setup
        bigint bi("12321000000000000000000000000000003000002");

        // Test
        int digit = bi[6];

        // Verify
        assert(bi    == "12321000000000000000000000000000003000002");
        assert(digit == 3);
    }
    {
        // Setup
        bigint bi("89999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");

        // Test
        int digit = bi[199];

        // Verify
        assert(bi    == "89999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        assert(digit == 8);
    }
}

