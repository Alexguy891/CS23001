//  String class test program
//
//  Tests: String += operator, String concat
//

#include "string.hpp"
#include <cassert>
#include <iostream>

int main() 
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs;
        String rhs;

        // TEST
        lhs += rhs;

        // VERIFY
        assert(lhs == "");
        assert(rhs == "");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs;
        String rhs('a');

        // TEST
        lhs += rhs;

        // VERIFY
        assert(lhs == 'a');
        assert(rhs == 'a');
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs;
        String rhs("abc");

        // TEST
        lhs += rhs;

        // VERIFY
        assert(lhs == "abc");
        assert(rhs == "abc");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs;
        String rhs("a b c ");

        // TEST
        lhs += rhs;

        // VERIFY
        assert(lhs == "a b c ");
        assert(rhs == "a b c ");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs;
        String rhs("a b c ");

        // TEST
        lhs += rhs;

        // VERIFY
        assert(lhs == "a b c ");
        assert(rhs == "a b c ");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs;
        String rhs("AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");

        // TEST
        lhs += rhs;

        // VERIFY
        assert(lhs == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
        assert(rhs == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs('a');
        String rhs;

        // TEST
        lhs += rhs;

        // VERIFY
        assert(lhs == 'a');
        assert(rhs == "");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs('a');
        String rhs('b');

        // TEST
        lhs += rhs;

        // VERIFY
        assert(lhs == "ab");
        assert(rhs == 'b');
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs('a');
        String rhs("bcd");

        // TEST
        lhs += rhs;

        // VERIFY
        assert(lhs == "abcd");
        assert(rhs == "bcd");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs('a');
        String rhs("b c d ");

        // TEST
        lhs += rhs;

        // VERIFY
        assert(lhs == "ab c d ");
        assert(rhs == "b c d ");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs('a');
        String rhs("AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");

        // TEST
        lhs += rhs;

        // VERIFY
        assert(lhs == "aAADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
        assert(rhs == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("abc");
        String rhs;

        // TEST
        lhs += rhs;

        // VERIFY
        assert(lhs == "abc");
        assert(rhs == "");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("abc");
        String rhs('d');

        // TEST
        lhs += rhs;

        // VERIFY
        assert(lhs == "abcd");
        assert(rhs == 'd');
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("abc");
        String rhs("defg");

        // TEST
        lhs += rhs;

        // VERIFY
        assert(lhs == "abcdefg");
        assert(rhs == "defg");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("abc");
        String rhs("d e f g ");

        // TEST
        lhs += rhs;

        // VERIFY
        assert(lhs == "abcd e f g ");
        assert(rhs == "d e f g ");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("abc");
        String rhs("AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");

        // TEST
        lhs += rhs;

        // VERIFY
        assert(lhs == "abcAADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
        assert(rhs == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("a b c");
        String rhs;

        // TEST
        lhs += rhs;

        // VERIFY
        assert(lhs == "a b c");
        assert(rhs == "");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("a b c ");
        String rhs('d');

        // TEST
        lhs += rhs;

        // VERIFY
        assert(lhs == "a b c d");
        assert(rhs == 'd');
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("a b c ");
        String rhs("def");

        // TEST
        lhs += rhs;

        // VERIFY
        assert(lhs == "a b c def");
        assert(rhs == "def");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("a b c ");
        String rhs("d e f");

        // TEST
        lhs += rhs;

        // VERIFY
        assert(lhs == "a b c d e f");
        assert(rhs == "d e f");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("a b c ");
        String rhs("AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");

        // TEST
        lhs += rhs;

        // VERIFY
        assert(lhs == "a b c AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
        assert(rhs == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
        String rhs;

        // TEST
        lhs += rhs;

        // VERIFY
        assert(lhs == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
        assert(rhs == "");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
        String rhs('a');

        // TEST
        lhs += rhs;

        // VERIFY
        assert(lhs == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHCa");
        assert(rhs == 'a');
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
        String rhs("abc");

        // TEST
        lhs += rhs;

        // VERIFY
        assert(lhs == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHCabc");
        assert(rhs == "abc");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
        String rhs("a b c");

        // TEST
        lhs += rhs;

        // VERIFY
        assert(lhs == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHCa b c");
        assert(rhs == "a b c");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
        String rhs("AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");

        // TEST
        lhs += rhs;

        // VERIFY
        assert(lhs == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHCAADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
        assert(rhs == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
    }
    //Normal add operator
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs;
        String rhs;

        // TEST
        String result(lhs + rhs);

        // VERIFY
        assert(lhs == "");
        assert(rhs == "");
        assert(result == "");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs;
        String rhs('a');

        // TEST
        String result(lhs + rhs);

        // VERIFY
        assert(lhs == "");
        assert(rhs == 'a');
        assert(result == "a");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs;
        String rhs("abc");

        // TEST
        String result(lhs + rhs);

        // VERIFY
        assert(lhs == "");
        assert(rhs == "abc");
        assert(result == "abc");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs;
        String rhs("a b c ");

        // TEST
        String result(lhs + rhs);

        // VERIFY
        assert(lhs == "");
        assert(rhs == "a b c ");
        assert(result == "a b c ");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs;
        String rhs("a b c ");

        // TEST
        String result(lhs + rhs);

        // VERIFY
        assert(lhs == "");
        assert(rhs == "a b c ");
        assert(result == "a b c ");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs;
        String rhs("AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");

        // TEST
        String result(lhs + rhs);

        // VERIFY
        assert(lhs == "");
        assert(rhs == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
        assert(result == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs('a');
        String rhs;

        // TEST
        String result(lhs + rhs);

        // VERIFY
        assert(lhs == 'a');
        assert(rhs == "");
        assert(result == 'a');
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs('a');
        String rhs('b');

        // TEST
        String result(lhs + rhs);

        // VERIFY
        assert(lhs == 'a');
        assert(rhs == 'b');
        assert(result == "ab");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs('a');
        String rhs("bcd");

        // TEST
        String result(lhs + rhs);

        // VERIFY
        assert(lhs == 'a');
        assert(rhs == "bcd");
        assert(result == "abcd");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs('a');
        String rhs("b c d ");

        // TEST
        String result(lhs + rhs);

        // VERIFY
        assert(lhs == 'a');
        assert(rhs == "b c d ");
        assert(result == "ab c d ");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs('a');
        String rhs("AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");

        // TEST
        String result(lhs + rhs);

        // VERIFY
        assert(lhs == 'a');
        assert(rhs == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
        assert(result == "aAADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("abc");
        String rhs;

        // TEST
        String result(lhs + rhs);

        // VERIFY
        assert(lhs == "abc");
        assert(rhs == "");
        assert(result == "abc");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("abc");
        String rhs('d');

        // TEST
        String result(lhs + rhs);

        // VERIFY
        assert(lhs == "abc");
        assert(rhs == 'd');
        assert(result == "abcd");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("abc");
        String rhs("defg");

        // TEST
        String result(lhs + rhs);

        // VERIFY
        assert(lhs == "abc");
        assert(rhs == "defg");
        assert(result == "abcdefg");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("abc");
        String rhs("d e f g ");

        // TEST
        String result(lhs + rhs);

        // VERIFY
        assert(lhs == "abc");
        assert(rhs == "d e f g ");
        assert(result == "abcd e f g ");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("abc");
        String rhs("AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");

        // TEST
        String result(lhs + rhs);

        // VERIFY
        assert(lhs == "abc");
        assert(rhs == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
        assert(result == "abcAADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("a b c");
        String rhs;

        // TEST
        String result(lhs + rhs);

        // VERIFY
        assert(lhs == "a b c");
        assert(rhs == "");
        assert(result == "a b c");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("a b c ");
        String rhs('d');

        // TEST
        String result(lhs + rhs);

        // VERIFY
        assert(lhs == "a b c ");
        assert(rhs == 'd');
        assert(result == "a b c d");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("a b c ");
        String rhs("def");

        // TEST
        String result(lhs + rhs);

        // VERIFY
        assert(lhs == "a b c ");
        assert(rhs == "def");
        assert(result == "a b c def");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("a b c ");
        String rhs("d e f");

        // TEST
        String result(lhs + rhs);

        // VERIFY
        assert(lhs == "a b c ");
        assert(rhs == "d e f");
        assert(result == "a b c d e f");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("a b c ");
        String rhs("AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");

        // TEST
        String result(lhs + rhs);

        // VERIFY
        assert(lhs == "a b c ");
        assert(rhs == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
        assert(result == "a b c AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
        String rhs;

        // TEST
        String result(lhs + rhs);

        // VERIFY
        assert(lhs == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
        assert(rhs == "");
        assert(result == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
        String rhs('a');

        // TEST
        String result(lhs + rhs);

        // VERIFY
        assert(lhs == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
        assert(rhs == 'a');
        assert(result == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHCa");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
        String rhs("abc");

        // TEST
        String result(lhs + rhs);

        // VERIFY
        assert(lhs == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
        assert(rhs == "abc");
        assert(result == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHCabc");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
        String rhs("a b c");

        // TEST
        String result(lhs + rhs);

        // VERIFY
        assert(lhs == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
        assert(rhs == "a b c");
        assert(result == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHCa b c");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
        String rhs("AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");

        // TEST
        String result(lhs + rhs);

        // VERIFY
        assert(lhs == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
        assert(rhs == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
        assert(result == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHCAADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("");

        // TEST
        assert(str == "");
        str += str;

        // VERIFY
        assert(str == "");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str('a');

        // TEST
        assert(str == 'a');
        str += str;

        // VERIFY
        assert(str == "aa");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("abc");

        // TEST
        assert(str == "abc");
        str += str;

        // VERIFY
        assert(str == "abcabc");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str(" a b c");

        // TEST
        assert(str == " a b c");
        str += str;

        // VERIFY
        assert(str == " a b c a b c");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("adwjdjiq fqwfiuweiuf auihf h19f89231982f 882 1f 1q[f1;';f21;f 1 21f 91893f wf8e9uadfia'dw'adwa;d;a;w;dpa  ;;21;;23e;21;;e ;;1d;12k; dk1;aldlwlaldlwa ;d;a;wla;dl;alwl;d;alld;wl;al;da wkd o01- 1-0jfidsjokasdkwe ad wakdikawia-dw|||||||||||");

        // TEST
        assert(str == "adwjdjiq fqwfiuweiuf auihf h19f89231982f 882 1f 1q[f1;';f21;f 1 21f 91893f wf8e9uadfia'dw'adwa;d;a;w;dpa  ;;21;;23e;21;;e ;;1d;12k; dk1;aldlwlaldlwa ;d;a;wla;dl;alwl;d;alld;wl;al;da wkd o01- 1-0jfidsjokasdkwe ad wakdikawia-dw|||||||||||");
        str += str;

        // VERIFY

        assert(str == "adwjdjiq fqwfiuweiuf auihf h19f89231982f 882 1f 1q[f1;';f21;f 1 21f 91893f wf8e9uadfia'dw'adwa;d;a;w;dpa  ;;21;;23e;21;;e ;;1d;12k; dk1;aldlwlaldlwa ;d;a;wla;dl;alwl;d;alld;wl;al;da wkd o01- 1-0jfidsjokasdkwe ad wakdikawia-dw|||||||||||adwjdjiq fqwfiuweiuf auihf h19f89231982f 882 1f 1q[f1;';f21;f 1 21f 91893f wf8e9uadfia'dw'adwa;d;a;w;dpa  ;;21;;23e;21;;e ;;1d;12k; dk1;aldlwlaldlwa ;d;a;wla;dl;alwl;d;alld;wl;al;da wkd o01- 1-0jfidsjokasdkwe ad wakdikawia-dw|||||||||||");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("adwjdjawjdjjawjdjwjqufqifiq fqwfiuweiuf auihf h19f89231982f 882 1f 1q[f1;';f21;f 1 21f 91893f wf8e9uadfia'dw'adwa;d;a;w;dpa  ;;21;;23e;21;;e ;;1d;12k; dk1;aldlwlaldlwa ;d;a;wla;dl;alwl;d;alld;wl;al;da wkd o01- 1-0jfidsjokasdkwe ad wakdikawia-dw-wa-d-1-2 -");

        // TEST
        assert(str == "adwjdjawjdjjawjdjwjqufqifiq fqwfiuweiuf auihf h19f89231982f 882 1f 1q[f1;';f21;f 1 21f 91893f wf8e9uadfia'dw'adwa;d;a;w;dpa  ;;21;;23e;21;;e ;;1d;12k; dk1;aldlwlaldlwa ;d;a;wla;dl;alwl;d;alld;wl;al;da wkd o01- 1-0jfidsjokasdkwe ad wakdikawia-dw-wa-d-1-2 -");
        str += str;

        // VERIFY
        assert(str == "adwjdjawjdjjawjdjwjqufqifiq fqwfiuweiuf auihf h19f89231982f 882 1f 1q[f1;';f21;f 1 21f 91893f wf8e9uadfia'dw'adwa;d;a;w;dpa  ;;21;;23e;21;;e ;;1d;12k; dk1;aldlwlaldlwa ;d;a;wla;dl;alwl;d;alld;wl;al;da wkd o01- 1-0jfidsjokasdkwe ad wakdikawia-dw-wa-d-1-2 -adwjdjawjdjjawjdjwjqufqifiq fqwfiuweiuf auihf h19f89231982f 882 1f 1q[f1;';f21;f 1 21f 91893f wf8e9uadfia'dw'adwa;d;a;w;dpa  ;;21;;23e;21;;e ;;1d;12k; dk1;aldlwlaldlwa ;d;a;wla;dl;alwl;d;alld;wl;al;da wkd o01- 1-0jfidsjokasdkwe ad wakdikawia-dw-wa-d-1-2 -");
    }
    std::cout << "Done testing += and +" << std::endl;
    return 0;
}