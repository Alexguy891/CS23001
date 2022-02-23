//  String class test program
//
//  Tests: String equality operator
//

#include "string.hpp"
#include <cassert>
#include <iostream>
 
//===========================================================================
int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs;
        String rhs;

        // TEST
        assert(lhs == rhs);

        // VERIFY
        assert(lhs == "");
        assert(rhs == "");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs('a');
        String rhs('a');

        // TEST
        assert(lhs == rhs);

        // VERIFY
        assert(lhs == 'a');
        assert(rhs == 'a');
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("abcde");
        String rhs("abcde");

        // TEST
        assert(lhs == rhs);

        // VERIFY
        assert(lhs == "abcde");
        assert(rhs == "abcde");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("A B C");
        String rhs("A B C");

        // TEST
        assert(lhs == rhs);

        // VERIFY
        assert(lhs == "A B C");
        assert(rhs == "A B C");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("A B C");
        String rhs("A B C");

        // TEST
        assert(lhs == rhs);

        // VERIFY
        assert(lhs == "A B C");
        assert(rhs == "A B C");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
        String rhs("AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");

        // TEST
        assert(lhs == rhs);

        // VERIFY
        assert(lhs == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
        assert(rhs == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
        String rhs("AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");

        // TEST
        assert(lhs == rhs);

        // VERIFY
        assert(lhs == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
        assert(rhs == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("");

        // TEST
        assert(lhs == "");

        // VERIFY
        assert(lhs == "");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs('a');

        // TEST
        assert(lhs == 'a');

        // VERIFY
        assert(lhs == "a");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs('a');

        // TEST
        assert(lhs == "a");

        // VERIFY
        assert(lhs == "a");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("");

        // TEST
        assert(lhs == "");

        // VERIFY
        assert(lhs == "");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("a");

        // TEST
        assert(lhs == 'a');

        // VERIFY
        assert(lhs == "a");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("a");

        // TEST
        assert(lhs == "a");

        // VERIFY
        assert(lhs == "a");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("test code");

        // TEST
        assert(lhs == "test code");

        // VERIFY
        assert(lhs == "test code");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");

        // TEST
        assert(lhs == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");

        // VERIFY
        assert(lhs == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("test code");

        // TEST
        assert(lhs == "test code");

        // VERIFY
        assert(lhs == "test code");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");

        // TEST
        assert(lhs == "t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");

        // VERIFY
        assert(lhs == "t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String rhs("");

        // TEST
        assert("" == rhs);

        // VERIFY
        assert(rhs == "");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String rhs('a');

        // TEST
        assert('a' == rhs);

        // VERIFY
        assert(rhs == "a");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String rhs('a');

        // TEST
        assert("a" == rhs);

        // VERIFY
        assert(rhs == "a");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String rhs("");

        // TEST
        assert("" == rhs);

        // VERIFY
        assert(rhs == "");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String rhs("a");

        // TEST
        assert('a' == rhs);

        // VERIFY
        assert(rhs == "a");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String rhs("a");

        // TEST
        assert("a" == rhs);

        // VERIFY
        assert(rhs == "a");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String rhs("test code");

        // TEST
        assert("test code" == rhs);

        // VERIFY
        assert(rhs == "test code");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String rhs("AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");

        // TEST
        assert("AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC" == rhs);

        // VERIFY
        assert(rhs == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String rhs("test code");

        // TEST
        assert("test code" == rhs);

        // VERIFY
        assert(rhs == "test code");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String rhs("t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");

        // TEST
        assert("t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t" == rhs);

        // VERIFY
        assert(rhs == "t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");
    }
    //Less than equals
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs;
        String rhs;

        // TEST
        assert(lhs <= rhs);

        // VERIFY
        assert(lhs == "");
        assert(rhs == "");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs('a');
        String rhs('a');

        // TEST
        assert(lhs <= rhs);

        // VERIFY
        assert(lhs == 'a');
        assert(rhs == 'a');
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("abcde");
        String rhs("abcde");

        // TEST
        assert(lhs <= rhs);

        // VERIFY
        assert(lhs == "abcde");
        assert(rhs == "abcde");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("A B C");
        String rhs("A B C");

        // TEST
        assert(lhs <= rhs);

        // VERIFY
        assert(lhs == "A B C");
        assert(rhs == "A B C");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("A B C");
        String rhs("A B C");

        // TEST
        assert(lhs <= rhs);

        // VERIFY
        assert(lhs == "A B C");
        assert(rhs == "A B C");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
        String rhs("AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");

        // TEST
        assert(lhs <= rhs);

        // VERIFY
        assert(lhs == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
        assert(rhs == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
        String rhs("AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");

        // TEST
        assert(lhs <= rhs);

        // VERIFY
        assert(lhs == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
        assert(rhs == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("");

        // TEST
        assert(lhs <= "");

        // VERIFY
        assert(lhs == "");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs('a');

        // TEST
        assert(lhs <= 'a');

        // VERIFY
        assert(lhs == "a");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs('a');

        // TEST
        assert(lhs <= "a");

        // VERIFY
        assert(lhs == "a");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("");

        // TEST
        assert(lhs <= "");

        // VERIFY
        assert(lhs == "");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("a");

        // TEST
        assert(lhs <= 'a');

        // VERIFY
        assert(lhs == "a");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("a");

        // TEST
        assert(lhs <= "a");

        // VERIFY
        assert(lhs == "a");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("test code");

        // TEST
        assert(lhs <= "test code");

        // VERIFY
        assert(lhs == "test code");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");

        // TEST
        assert(lhs <= "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");

        // VERIFY
        assert(lhs == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("test code");

        // TEST
        assert(lhs <= "test code");

        // VERIFY
        assert(lhs == "test code");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");

        // TEST
        assert(lhs <= "t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");

        // VERIFY
        assert(lhs == "t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String rhs("");

        // TEST
        assert("" <= rhs);

        // VERIFY
        assert(rhs == "");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String rhs('a');

        // TEST
        assert('a' <= rhs);

        // VERIFY
        assert(rhs == "a");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String rhs('a');

        // TEST
        assert("a" <= rhs);

        // VERIFY
        assert(rhs == "a");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String rhs("");

        // TEST
        assert("" <= rhs);

        // VERIFY
        assert(rhs == "");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String rhs("a");

        // TEST
        assert('a' <= rhs);

        // VERIFY
        assert(rhs == "a");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String rhs("a");

        // TEST
        assert("a" <= rhs);

        // VERIFY
        assert(rhs == "a");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String rhs("test code");

        // TEST
        assert("test code" <= rhs);

        // VERIFY
        assert(rhs == "test code");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String rhs("AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");

        // TEST
        assert("AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC" <= rhs);

        // VERIFY
        assert(rhs == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String rhs("test code");

        // TEST
        assert("test code" <= rhs);

        // VERIFY
        assert(rhs == "test code");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String rhs("t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");

        // TEST
        assert("t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t" == rhs);

        // VERIFY
        assert(rhs <= "t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");
    }
    //Greater than equals
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs;
        String rhs;

        // TEST
        assert(lhs >= rhs);

        // VERIFY
        assert(lhs == "");
        assert(rhs == "");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs('a');
        String rhs('a');

        // TEST
        assert(lhs >= rhs);

        // VERIFY
        assert(lhs == 'a');
        assert(rhs == 'a');
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("abcde");
        String rhs("abcde");

        // TEST
        assert(lhs >= rhs);

        // VERIFY
        assert(lhs == "abcde");
        assert(rhs == "abcde");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("A B C");
        String rhs("A B C");

        // TEST
        assert(lhs >= rhs);

        // VERIFY
        assert(lhs == "A B C");
        assert(rhs == "A B C");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("A B C");
        String rhs("A B C");

        // TEST
        assert(lhs >= rhs);

        // VERIFY
        assert(lhs == "A B C");
        assert(rhs == "A B C");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
        String rhs("AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");

        // TEST
        assert(lhs >= rhs);

        // VERIFY
        assert(lhs == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
        assert(rhs == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
        String rhs("AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");

        // TEST
        assert(lhs >= rhs);

        // VERIFY
        assert(lhs == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
        assert(rhs == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("");

        // TEST
        assert(lhs >= "");

        // VERIFY
        assert(lhs == "");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs('a');

        // TEST
        assert(lhs >= 'a');

        // VERIFY
        assert(lhs == "a");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs('a');

        // TEST
        assert(lhs >= "a");

        // VERIFY
        assert(lhs == "a");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("");

        // TEST
        assert(lhs >= "");

        // VERIFY
        assert(lhs == "");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("a");

        // TEST
        assert(lhs >= 'a');

        // VERIFY
        assert(lhs == "a");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("a");

        // TEST
        assert(lhs >= "a");

        // VERIFY
        assert(lhs == "a");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("test code");

        // TEST
        assert(lhs >= "test code");

        // VERIFY
        assert(lhs == "test code");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");

        // TEST
        assert(lhs >= "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");

        // VERIFY
        assert(lhs == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("test code");

        // TEST
        assert(lhs >= "test code");

        // VERIFY
        assert(lhs == "test code");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");

        // TEST
        assert(lhs >= "t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");

        // VERIFY
        assert(lhs == "t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String rhs("");

        // TEST
        assert("" >= rhs);

        // VERIFY
        assert(rhs == "");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String rhs('a');

        // TEST
        assert('a' >= rhs);

        // VERIFY
        assert(rhs == "a");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String rhs('a');

        // TEST
        assert("a" >= rhs);

        // VERIFY
        assert(rhs == "a");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String rhs("");

        // TEST
        assert("" >= rhs);

        // VERIFY
        assert(rhs == "");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String rhs("a");

        // TEST
        assert('a' >= rhs);

        // VERIFY
        assert(rhs == "a");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String rhs("a");

        // TEST
        assert("a" >= rhs);

        // VERIFY
        assert(rhs == "a");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String rhs("test code");

        // TEST
        assert("test code" >= rhs);

        // VERIFY
        assert(rhs == "test code");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String rhs("AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");

        // TEST
        assert("AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC" >= rhs);

        // VERIFY
        assert(rhs == "AADHCADHCHADHCHAHHCHAHCHDHDAHCHDCHACHDACHDAHCHADHCADHCHDAHCDAHCDHAHDCHDAHCHHHADHCAHDCHADHCHAHCHASDCCDAJHJCHJASHJDHJFDGFGJASJHFHJADHJFHJDHJFGJHASHFJGHJSDASFHJGHJFDHJDASHJGFAJHGSDJHAHJSDHJHBCDCDCBDCACSAJCSHCAWHCHDHAHCDHAHCHADHCHDAHCHADHCHACHDAHCHAHCDHACHAHC");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String rhs("test code");

        // TEST
        assert("test code" >= rhs);

        // VERIFY
        assert(rhs == "test code");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String rhs("t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");

        // TEST
        assert("t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t" == rhs);

        // VERIFY
        assert(rhs >= "t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String rhs;

        // TEST
        assert(!(rhs == "test"));

        // VERIFY
        assert(rhs == "");
    }
    std::cout << "Done testing == operator." << std::endl;
    return 0;
}

