// bigint Test Program
//
// Tests:  int constructor, uses ==
//
// NEED TO IMPLEMENT
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"


//===========================================================================
int main () {
    {
        
        // VERY INCOMPLETE set of tests.
        
        
        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(0);
        bigint result;
        
        // Test
        result = left + right;
        
        // Verify
        assert(left   == 0);
        assert(right  == 0);
        assert(result == 0);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(1);
        bigint right(0);
        bigint result;
        
        // Test
        result = left + right;
        
        // Verify
        assert(left   == 1);
        assert(right  == 0);
        assert(result == 1);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(1);
        bigint right(1);
        bigint result;
        
        // Test
        result = left + right;
        
        // Verify
        assert(left   == 1);
        assert(right  == 1);
        assert(result == 2);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(100);
        bigint right(100);
        bigint result;
        
        // Test
        result = left + right;
        
        // Verify
        assert(left   == 100);
        assert(right  == 100);
        assert(result == 200);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(500);
        bigint right(500);
        bigint result;
        
        // Test
        result = left + right;
        
        // Verify
        assert(left   == 500);
        assert(right  == 500);
        assert(result == 1000);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(500);
        bigint right(1000);
        bigint result;
        
        // Test
        result = left + right;
        
        // Verify
        assert(left   == 500);
        assert(right  == 1000);
        assert(result == 1500);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(100);
        bigint right(10);
        bigint result;
        
        // Test
        result = left + right;
        
        // Verify
        assert(left   == 100);
        assert(right  == 10);
        assert(result == 110);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(910);
        bigint right(90);
        bigint result;
        
        // Test
        result = left + right;
        
        // Verify
        assert(left   == 910);
        assert(right  == 90);
        assert(result == 1000);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(910);
        bigint right(0);
        bigint result;
        
        // Test
        result = left + right;
        
        // Verify
        assert(left   == 910);
        assert(right  == 0);
        assert(result == 910);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(10);
        bigint right(100);
        bigint result;
        
        // Test
        result = left + right;
        
        // Verify
        assert(left   == 10);
        assert(right  == 100);
        assert(result == 110);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(10);
        bigint right(990);
        bigint result;
        
        // Test
        result = left + right;
        
        // Verify
        assert(left   == 10);
        assert(right  == 990);
        assert(result == 1000);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(10);
        bigint right(1000);
        bigint result;
        
        // Test
        result = left + right;
        
        // Verify
        assert(left   == 10);
        assert(right  == 1000);
        assert(result == 1010);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(11);
        bigint right(89);
        bigint result;
        
        // Test
        result = left + right;
        
        // Verify
        assert(left   == 11);
        assert(right  == 89);
        assert(result == 100);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(100);
        bigint result;
        
        // Test
        result = left + right;
        
        // Verify
        assert(left   == 0);
        assert(right  == 100);
        assert(result == 100);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(1000);
        bigint result;
        
        // Test
        result = left + right;
        
        // Verify
        assert(left   == 0);
        assert(right  == 1000);
        assert(result == 1000);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("123");
        bigint right("100");
        bigint result;
        
        // Test
        result = left + right;
        
        // Verify
        assert(left   == "123");
        assert(right  == "100");
        assert(result == "223");
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("503");
        bigint right("503");
        bigint result;
        
        // Test
        result = left + right;
        
        // Verify
        assert(left   == "503");
        assert(right  == "503");
        assert(result == "1006");
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("500");
        bigint right("1000");
        bigint result;
        
        // Test
        result = left + right;
        
        // Verify
        assert(left   == "500");
        assert(right  == "1000");
        assert(result == "1500");
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("100");
        bigint right("10");
        bigint result;
        
        // Test
        result = left + right;
        
        // Verify
        assert(left   == "100");
        assert(right  == "10");
        assert(result == "110");
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("910");
        bigint right("90");
        bigint result;
        
        // Test
        result = left + right;
        
        // Verify
        assert(left   == "910");
        assert(right  == "90");
        assert(result == "1000");
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("910");
        bigint right("0");
        bigint result;
        
        // Test
        result = left + right;
        
        // Verify
        assert(left   == "910");
        assert(right  == "0");
        assert(result == "910");
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("10");
        bigint right("100");
        bigint result;
        
        // Test
        result = left + right;
        
        // Verify
        assert(left   == "10");
        assert(right  == "100");
        assert(result == "110");
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("10");
        bigint right("990");
        bigint result;
        
        // Test
        result = left + right;
        
        // Verify
        assert(left   == "10");
        assert(right  == "990");
        assert(result == "1000");
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("10");
        bigint right("1000");
        bigint result;
        
        // Test
        result = left + right;
        
        // Verify
        assert(left   == "10");
        assert(right  == "1000");
        assert(result == "1010");
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("11");
        bigint right("89");
        bigint result;
        
        // Test
        result = left + right;
        
        // Verify
        assert(left   == "11");
        assert(right  == "89");
        assert(result == "100");
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("0");
        bigint right("100");
        bigint result;
        
        // Test
        result = left + right;
        
        // Verify
        assert(left   == "0");
        assert(right  == "100");
        assert(result == "100");
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("0");
        bigint right("1000");
        bigint result;
        
        // Test
        result = left + right;
        
        // Verify
        assert(left   == "0");
        assert(right  == "1000");
        assert(result == "1000");
    }
    //Add test cases as needed.
    
    
    std::cout << "Done with testing addition." << std::endl;
    return 0;
}

