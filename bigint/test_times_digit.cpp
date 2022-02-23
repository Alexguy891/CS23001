// bigint Test Program
//
// Tests:  times_10, uses ==
//
// NEED TO IMPLEMENT
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.timesDigit(1);

        // Verify
        assert(bi == 3);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.timesDigit(0);

        // Verify
        assert(bi == 0);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.timesDigit(1);

        // Verify
        assert(bi == 3);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(9999);

        // Test 
        bi = bi.timesDigit(9);

        // Verify
        assert(bi == 89991);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("3");

        // Test 
        bi = bi.timesDigit(0);

        // Verify
        assert(bi == "0");
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("100000000000000000");

        // Test 
        bi = bi.timesDigit(9);

        // Verify
        assert(bi == "900000000000000000");
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("80000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");

        // Test 
        bi = bi.timesDigit(9);

        // Verify
        assert(bi == "720000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("000001");

        // Test 
        bi = bi.timesDigit(9);

        // Verify
        assert(bi == "000009");
    }
    {   
        //------------------------------------------------------
        // Setup fixture
        bigint bi("0000010");

        // Test 
        bi = bi.timesDigit(9);

        // Verify
        assert(bi == "0000090");
    }
    {   
        //------------------------------------------------------
        // Setup fixture
        bigint bi("000001000009");

        // Test 
        bi = bi.timesDigit(1);

        // Verify
        assert(bi == "000001000009");
    }
    {   
        //------------------------------------------------------
        // Setup fixture
        bigint bi("12321");

        // Test 
        bi = bi.timesDigit(0);

        // Verify
        assert(bi == "0");
    }
    //Add test cases as needed.
    
    std::cout << "Done testing bigint * digit" << std::endl;
    return 0;
}

