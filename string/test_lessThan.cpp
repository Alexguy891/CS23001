//  String class test program
//
//  Tests: String operator <
//

#include "string.hpp"
#include <cassert>
#include <iostream>

int main() {
     {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs;
        String rhs('a');

        // TEST
        assert(lhs < rhs);

        // VERIFY
        assert(lhs == "");
        assert(rhs == 'a');
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs;
        String rhs("abc");

        // TEST
        assert(lhs < rhs);

        // VERIFY
        assert(lhs == "");
        assert(rhs == "abc");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs;
        String rhs("a b c");

        // TEST
        assert(lhs < rhs);

        // VERIFY
        assert(lhs == "");
        assert(rhs == "a b c");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs;
        String rhs("t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");

        // TEST
        assert(lhs < rhs);

        // VERIFY
        assert(lhs == "");
        assert(rhs == "t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs('a');
        String rhs;

        // TEST
        assert(lhs > rhs);

        // VERIFY
        assert(lhs == 'a');
        assert(rhs == "");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs('a');
        String rhs("abc");

        // TEST
        assert(lhs < rhs);

        // VERIFY
        assert(lhs == 'a');
        assert(rhs == "abc");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs('a');
        String rhs("a b c");

        // TEST
        assert(lhs < rhs);

        // VERIFY
        assert(lhs == 'a');
        assert(rhs == "a b c");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs('a');
        String rhs("t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");

        // TEST
        assert(lhs < rhs);

        // VERIFY
        assert(lhs == 'a');
        assert(rhs == "t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("abc");
        String rhs;

        // TEST
        assert(lhs > rhs);

        // VERIFY
        assert(lhs == "abc");
        assert(rhs == "");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("abc");
        String rhs('a');

        // TEST
        assert(lhs > rhs);

        // VERIFY
        assert(lhs == "abc");
        assert(rhs == 'a');
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("abc");
        String rhs("abcd");

        // TEST
        assert(lhs < rhs);

        // VERIFY
        assert(lhs == "abc");
        assert(rhs == "abcd");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("abcd");
        String rhs("abc");

        // TEST
        assert(lhs > rhs);

        // VERIFY
        assert(lhs == "abcd");
        assert(rhs == "abc");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("abc");
        String rhs("a b c");

        // TEST
        assert(lhs > rhs);

        // VERIFY
        assert(lhs == "abc");
        assert(rhs == "a b c");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("abc");
        String rhs("a b");

        // TEST
        assert(lhs > rhs);

        // VERIFY
        assert(lhs == "abc");
        assert(rhs == "a b");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("abc");
        String rhs("t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");

        // TEST
        assert(lhs < rhs);

        // VERIFY
        assert(lhs == "abc");
        assert(rhs == "t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("a b c");
        String rhs;

        // TEST
        assert(lhs > rhs);

        // VERIFY
        assert(lhs == "a b c");
        assert(rhs == "");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("a b c");
        String rhs('a');

        // TEST
        assert(lhs > rhs);

        // VERIFY
        assert(lhs == "a b c");
        assert(rhs == 'a');
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("a b c");
        String rhs("a b");

        // TEST
        assert(lhs > rhs);

        // VERIFY
        assert(lhs == "a b c");
        assert(rhs == "a b");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("a b c");
        String rhs("a b c d");

        // TEST
        assert(lhs < rhs);

        // VERIFY
        assert(lhs == "a b c");
        assert(rhs == "a b c d");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("a b c");
        String rhs("t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");

        // TEST
        assert(lhs < rhs);

        // VERIFY
        assert(lhs == "a b c");
        assert(rhs == "t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");
        String rhs;

        // TEST
        assert(lhs > rhs);

        // VERIFY
        assert(lhs == "t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");
        assert(rhs == "");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");
        String rhs('a');

        // TEST
        assert(lhs > rhs);

        // VERIFY
        assert(lhs == "t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");
        assert(rhs == 'a');
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");
        String rhs("abc");

        // TEST
        assert(lhs > rhs);

        // VERIFY
        assert(lhs == "t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");
        assert(rhs == "abc");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");
        String rhs("a b c");

        // TEST
        assert(lhs > rhs);

        // VERIFY
        assert(lhs == "t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");
        assert(rhs == "a b c");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");
        String rhs("ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ");

        // TEST
        assert(lhs > rhs);

        // VERIFY
        assert(lhs == "t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");
        assert(rhs == "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String rhs("t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");
        String lhs("ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ");

        // TEST
        assert(lhs < rhs);

        // VERIFY
        assert(rhs == "t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");
        assert(lhs == "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ");
    }
    //Less than Equals
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs;
        String rhs('a');

        // TEST
        assert(lhs <= rhs);

        // VERIFY
        assert(lhs == "");
        assert(rhs == 'a');
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs;
        String rhs("abc");

        // TEST
        assert(lhs <= rhs);

        // VERIFY
        assert(lhs == "");
        assert(rhs == "abc");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs;
        String rhs("a b c");

        // TEST
        assert(lhs <= rhs);

        // VERIFY
        assert(lhs == "");
        assert(rhs == "a b c");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs;
        String rhs("t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");

        // TEST
        assert(lhs <= rhs);

        // VERIFY
        assert(lhs == "");
        assert(rhs == "t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs('a');
        String rhs;

        // TEST
        assert(lhs >= rhs);

        // VERIFY
        assert(lhs == 'a');
        assert(rhs == "");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs('a');
        String rhs("abc");

        // TEST
        assert(lhs <= rhs);

        // VERIFY
        assert(lhs == 'a');
        assert(rhs == "abc");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs('a');
        String rhs("a b c");

        // TEST
        assert(lhs <= rhs);

        // VERIFY
        assert(lhs == 'a');
        assert(rhs == "a b c");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs('a');
        String rhs("t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");

        // TEST
        assert(lhs <= rhs);

        // VERIFY
        assert(lhs == 'a');
        assert(rhs == "t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("abc");
        String rhs;

        // TEST
        assert(lhs >= rhs);

        // VERIFY
        assert(lhs == "abc");
        assert(rhs == "");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("abc");
        String rhs('a');

        // TEST
        assert(lhs >= rhs);

        // VERIFY
        assert(lhs == "abc");
        assert(rhs == 'a');
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("abc");
        String rhs("abcd");

        // TEST
        assert(lhs <= rhs);

        // VERIFY
        assert(lhs == "abc");
        assert(rhs == "abcd");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("abcd");
        String rhs("abc");

        // TEST
        assert(lhs >= rhs);

        // VERIFY
        assert(lhs == "abcd");
        assert(rhs == "abc");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("abc");
        String rhs("a b c");

        // TEST
        assert(lhs >= rhs);

        // VERIFY
        assert(lhs == "abc");
        assert(rhs == "a b c");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("abc");
        String rhs("a b");

        // TEST
        assert(lhs >= rhs);

        // VERIFY
        assert(lhs == "abc");
        assert(rhs == "a b");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("abc");
        String rhs("t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");

        // TEST
        assert(lhs <= rhs);

        // VERIFY
        assert(lhs == "abc");
        assert(rhs == "t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("a b c");
        String rhs;

        // TEST
        assert(lhs >= rhs);

        // VERIFY
        assert(lhs == "a b c");
        assert(rhs == "");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("a b c");
        String rhs('a');

        // TEST
        assert(lhs >= rhs);

        // VERIFY
        assert(lhs == "a b c");
        assert(rhs == 'a');
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("a b c");
        String rhs("a b");

        // TEST
        assert(lhs >= rhs);

        // VERIFY
        assert(lhs == "a b c");
        assert(rhs == "a b");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("a b c");
        String rhs("a b c d");

        // TEST
        assert(lhs <= rhs);

        // VERIFY
        assert(lhs == "a b c");
        assert(rhs == "a b c d");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("a b c");
        String rhs("t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");

        // TEST
        assert(lhs <= rhs);

        // VERIFY
        assert(lhs == "a b c");
        assert(rhs == "t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");
        String rhs;

        // TEST
        assert(lhs >= rhs);

        // VERIFY
        assert(lhs == "t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");
        assert(rhs == "");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");
        String rhs('a');

        // TEST
        assert(lhs >= rhs);

        // VERIFY
        assert(lhs == "t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");
        assert(rhs == 'a');
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");
        String rhs("abc");

        // TEST
        assert(lhs >= rhs);

        // VERIFY
        assert(lhs == "t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");
        assert(rhs == "abc");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");
        String rhs("a b c");

        // TEST
        assert(lhs >= rhs);

        // VERIFY
        assert(lhs == "t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");
        assert(rhs == "a b c");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String lhs("t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");
        String rhs("ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ");

        // TEST
        assert(lhs >= rhs);

        // VERIFY
        assert(lhs == "t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");
        assert(rhs == "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String rhs("t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");
        String lhs("ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ");

        // TEST
        assert(lhs <= rhs);

        // VERIFY
        assert(rhs == "t a t t t t t a t t t tt a t t at at at a ta ta t at a ta t at a tejtjetjjet at aejt aejt atjat ajt ajet ejta tjae tja tje tja et jstjrjjtjsjtjrsjtjsrjtjs rtjsrjtjsjtrjsrjtjatgoeaoawdfefzafafaejfajjfejajfjejajfjafj raeotroaeoroeaoroae roaeroaeorooaeoroa t");
        assert(lhs == "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ");
    }
    std::cout << "Done testing <,>,<=,>= operator" << std::endl;
    return 0;
}