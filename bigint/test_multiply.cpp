// bigint Test Program
//
// Tests:  multiply, uses ==
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(0);
        bigint result;
        
        // Test 
        result = left * right;
        
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
        result = left * right;
        
        // Verify
        assert(left   == 1);
        assert(right  == 0);
        assert(result == 0);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(1);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == 0);
        assert(right  == 1);
        assert(result == 0);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(123);
        bigint right(56);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   ==  123);
        assert(right  ==   56);
        assert(result == 6888);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(65);
        bigint right(321);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   ==    65);
        assert(right  ==   321);
        assert(result == 20865);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(9999);
        bigint right(2);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   ==  9999);
        assert(right  ==     2);
        assert(result == 19998);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(2);
        bigint right(999999);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   ==       2);
        assert(right  ==  999999);
        assert(result == 1999998);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(99);
        bigint right(99);
        bigint result;

        // Test
        result = left * right;

        // Verify
        assert(left   ==  99);
        assert(right  ==  99);
        assert(result ==  9801);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("232123291302213");
        bigint right("2");
        bigint result;
        
        // Test
        result = left * right;
        
        // Verify
        assert(left   == "232123291302213");
        assert(right  == "2");
        assert(result == "464246582604426");
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(992);
        bigint right(999);
        bigint result;
        
        // Test
        result = left * right;
        
        // Verify
        assert(left   == 992);
        assert(right  == 999);
        assert(result == 991008);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(45);
        bigint right(3);
        bigint result;
        
        // Test
        result = left * right;
        
        // Verify
        assert(left   == 45);
        assert(right  == 3);
        assert(result == 135);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("0");
        bigint right("10000000000");
        bigint result;
        
        // Test
        result = left * right;
        
        // Verify
        assert(left   == "0");
        assert(right  == "10000000000");
        assert(result == "0");
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(3232);
        bigint right(3232);
        bigint result;
        
        // Test
        result = left * right;
        
        // Verify
        assert(left   == 3232);
        assert(right  == 3232);
        assert(result == 10445824);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(0000001);
        bigint right(1);
        bigint result;
        
        // Test
        result = left * right;
        
        // Verify
        assert(left   == 0000001);
        assert(right  == 1);
        assert(result == 0000001);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(9000);
        bigint right(10);
        bigint result;
        
        // Test
        result = left * right;
        
        // Verify
        assert(left   == 9000);
        assert(right  == 10);
        assert(result == 90000);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(9);
        bigint right(912);
        bigint result;
        
        // Test
        result = left * right;
        
        // Verify
        assert(left   == 9);
        assert(right  == 912);
        assert(result == 8208);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(100000);
        bigint right(1);
        bigint result;
        
        // Test
        result = left * right;
        
        // Verify
        assert(left   == 100000);
        assert(right  == 1);
        assert(result == 100000);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(2312313);
        bigint result;
        
        // Test
        result = left * right;
        
        // Verify
        assert(left   == 0);
        assert(right  == 2312313);
        assert(result == 0);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(992);
        bigint right(01);
        bigint result;
        
        // Test
        result = left * right;
        
        // Verify
        assert(left   == 992);
        assert(right  == 01);
        assert(result == 992);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(0010);
        bigint right(0100);
        bigint result;
        
        // Test
        result = left * right;
        
        // Verify
        assert(left   == 0010);
        assert(right  == 0100);
        assert(result == 01000);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("2222");
        bigint right("888888888888888888888888888888888888");
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == "2222");
        assert(right  == "888888888888888888888888888888888888");
        assert(result == "1975111111111111111111111111111111109136");
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("777777777777777777777777777777777777777777777");
        bigint right("333333");
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == "777777777777777777777777777777777777777777777");
        assert(right  == "333333");
        assert(result == "259258999999999999999999999999999999999999999740741");
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("111111111111111111111111111111111111111111");
        bigint right("999999999999999999999999999999999999999999");
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == "111111111111111111111111111111111111111111");
        assert(right  == "999999999999999999999999999999999999999999");
        assert(result == "111111111111111111111111111111111111111110888888888888888888888888888888888888888889");
    }
{
    //------------------------------------------------------
    // Setup fixture
    bigint left("232123291302213");
    bigint right("2");
    bigint result;
    
    // Test
    result = left * right;
    
    // Verify
    assert(left   == "232123291302213");
    assert(right  == "2");
    assert(result == "464246582604426");
}
{
    //------------------------------------------------------
    // Setup fixture
    bigint left("992");
    bigint right("999");
    bigint result;
    
    // Test
    result = left * right;
    
    // Verify
    assert(left   == "992");
    assert(right  == "999");
    assert(result == "991008");
}
{
    //------------------------------------------------------
    // Setup fixture
    bigint left("45");
    bigint right("3");
    bigint result;
    
    // Test
    result = left * right;
    
    // Verify
    assert(left   == "45");
    assert(right  == "3");
    assert(result == "135");
}
{
    //------------------------------------------------------
    // Setup fixture
    bigint left("0");
    bigint right("100000000000000000000000000000000000");
    bigint result;
    
    // Test
    result = left * right;
    
    // Verify
    assert(left   == "0");
    assert(right  == "100000000000000000000000000000000000");
    assert(result == "0");
}
{
    //------------------------------------------------------
    // Setup fixture
    bigint left("3232");
    bigint right("3232");
    bigint result;
    
    // Test
    result = left * right;
    
    // Verify
    assert(left   == "3232");
    assert(right  == "3232");
    assert(result == "10445824");
}
{
    //------------------------------------------------------
    // Setup fixture
    bigint left("0000001");
    bigint right("1");
    bigint result;
    
    // Test
    result = left * right;
    
    // Verify
    assert(left   == "0000001");
    assert(right  == "1");
    assert(result == "0000001");
}
{
    //------------------------------------------------------
    // Setup fixture
    bigint left("9000");
    bigint right("10");
    bigint result;
    
    // Test
    result = left * right;
    
    // Verify
    assert(left   == "9000");
    assert(right  == "10");
    assert(result == "90000");
}
{
    //------------------------------------------------------
    // Setup fixture
    bigint left("9");
    bigint right("912");
    bigint result;
    
    // Test
    result = left * right;
    
    // Verify
    assert(left   == "9");
    assert(right  == "912");
    assert(result == "8208");
}
{
    //------------------------------------------------------
    // Setup fixture
    bigint left("100000");
    bigint right("1");
    bigint result;
    
    // Test
    result = left * right;
    
    // Verify
    assert(left   == "100000");
    assert(right  == "1");
    assert(result == "100000");
}
{
    //------------------------------------------------------
    // Setup fixture
    bigint left("0");
    bigint right("2030912903901249031904901904");
    bigint result;
    
    // Test
    result = left * right;
    
    // Verify
    assert(left   == "0");
    assert(right  == "2030912903901249031904901904");
    assert(result == "0");
}
{
    //------------------------------------------------------
    // Setup fixture
    bigint left("1000002321323231323132313293919329391932939193291939239193921293919129319932913991391939");
    bigint right("0");
    bigint result;
    
    // Test
    result = left * right;
    
    // Verify
    assert(left   == "1000002321323231323132313293919329391932939193291939239193921293919129319932913991391939");
    assert(right  == "0");
    assert(result == "0");
}
{
    //------------------------------------------------------
    // Setup fixture
    bigint left("1992993193919392929393939393993399393939393939939393939393993939393939219391931939193913912931923919239192391912939123919239129391923912939139291391292391939293193923919239293992931939219293993929999");
    bigint right(1);
    bigint result;
    
    // Test
    result = left * right;
    
    // Verify
    assert(left   == "1992993193919392929393939393993399393939393939939393939393993939393939219391931939193913912931923919239192391912939123919239129391923912939139291391292391939293193923919239293992931939219293993929999");
    assert(right  == 1);
    assert(result == "1992993193919392929393939393993399393939393939939393939393993939393939219391931939193913912931923919239192391912939123919239129391923912939139291391292391939293193923919239293992931939219293993929999");
}

    //Add test cases as needed.

    std::cout << "Done testing multiply" << std::endl;
    return 0;
}