//  String class test program
//
//  Tests: String ctr, String(char)
//

#include "string.hpp"
#include <cassert>
#include <iostream>

int main() {
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str('a');

        // TEST
        int result = str.length();

        // VERIFY
        assert(str == 'a');
        assert(result == 1);
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("abc");

        // TEST
        int result = str.length();

        // VERIFY
        assert(str == "abc");
        assert(result == 3);
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("abcdefgheheeqiidiqiqidiq qidwiqwidqlqdq wd q dq dw iqd q");

        // TEST
        int result = str.length();

        // VERIFY
        assert(str == "abcdefgheheeqiidiqiqidiq qidwiqwidqlqdq wd q dq dw iqd q");
        assert(result == 56);
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");

        // TEST
        int result = str.length();

        // VERIFY
        assert(str == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
        assert(result == 255);
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str;

        // TEST
        int result = str.capacity();

        // VERIFY
        assert(result == 0);
    }
    std::cout << "Done testing length() and capacity()." << std::endl;
    return 0;
}