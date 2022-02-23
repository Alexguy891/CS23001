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
        String str;

        // TEST
        String result = str.substr(0,2);

        // VERIFY
        assert(str == "");
        assert(result == "");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str('a');

        // TEST
        String result = str.substr(0,1);

        // VERIFY
        assert(str == 'a');
        assert(result == 'a');
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str('a');

        // TEST
        String result = str.substr(-1,1);

        // VERIFY
        assert(str == 'a');
        assert(result == "");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str('a');

        // TEST
        String result = str.substr(0,0);

        // VERIFY
        assert(str == 'a');
        assert(result == 'a');
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("abcdef");

        // TEST
        String result = str.substr(1,3);

        // VERIFY
        assert(str == "abcdef");
        assert(result == "bcd");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("abcdef");

        // TEST
        String result = str.substr(-1,3);

        // VERIFY
        assert(str == "abcdef");
        assert(result == "");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("abcdef");

        // TEST
        String result = str.substr(7,3);

        // VERIFY
        assert(str == "abcdef");
        assert(result == "");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("abcdef");

        // TEST
        String result = str.substr(2,0);

        // VERIFY
        assert(str == "abcdef");
        assert(result == "");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("a b c d e f");

        // TEST
        String result = str.substr(2,4);

        // VERIFY
        assert(str == "a b c d e f");
        assert(result == "b c");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("a b c d e f");

        // TEST
        String result = str.substr(-1,4);

        // VERIFY
        assert(str == "a b c d e f");
        assert(result == "");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("a b c d e f");

        // TEST
        String result = str.substr(12,4);

        // VERIFY
        assert(str == "a b c d e f");
        assert(result == "");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("a b c d e f");

        // TEST
        String result = str.substr(0,0);

        // VERIFY
        assert(str == "a b c d e f");
        assert(result == 'a');
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("adwdawdiqwidiqdqidiqduiqwiudeuiquifhuiuiq  qiufuihdfiquawc waudibwqdhiuqiudhwqwdqw d wqdqwd adwdawdiqwidiqdqidiqduiqwiudeuiquifhuiuiq  qiufuihdfiquawc waudibwqdhiuqiudhwqwdqw d wqdqwd adwdawdiqwidiqdqidiqduiqwiudeuiquifhuiuiq  qiufuihdfiquawc waudibwqdhiu");

        // TEST
        String result = str.substr(0,3);

        // VERIFY
        assert(str == "adwdawdiqwidiqdqidiqduiqwiudeuiquifhuiuiq  qiufuihdfiquawc waudibwqdhiuqiudhwqwdqw d wqdqwd adwdawdiqwidiqdqidiqduiqwiudeuiquifhuiuiq  qiufuihdfiquawc waudibwqdhiuqiudhwqwdqw d wqdqwd adwdawdiqwidiqdqidiqduiqwiudeuiquifhuiuiq  qiufuihdfiquawc waudibwqdhiu");
        assert(result == "adwd");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("adwdawdiqwidiqdqidiqduiqwiudeuiquifhuiuiq  qiufuihdfiquawc waudibwqdhiuqiudhwqwdqw d wqdqwd adwdawdiqwidiqdqidiqduiqwiudeuiquifhuiuiq  qiufuihdfiquawc waudibwqdhiuqiudhwqwdqw d wqdqwd adwdawdiqwidiqdqidiqduiqwiudeuiquifhuiuiq  qiufuihdfiquawc waudibwqdhiu");

        // TEST
        String result = str.substr(-1,3);

        // VERIFY
        assert(str == "adwdawdiqwidiqdqidiqduiqwiudeuiquifhuiuiq  qiufuihdfiquawc waudibwqdhiuqiudhwqwdqw d wqdqwd adwdawdiqwidiqdqidiqduiqwiudeuiquifhuiuiq  qiufuihdfiquawc waudibwqdhiuqiudhwqwdqw d wqdqwd adwdawdiqwidiqdqidiqduiqwiudeuiquifhuiuiq  qiufuihdfiquawc waudibwqdhiu");
        assert(result == "");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("adwdawdiqwidiqdqidiqduiqwiudeuiquifhuiuiq  qiufuihdfiquawc waudibwqdhiuqiudhwqwdqw d wqdqwd adwdawdiqwidiqdqidiqduiqwiudeuiquifhuiuiq  qiufuihdfiquawc waudibwqdhiuqiudhwqwdqw d wqdqwd adwdawdiqwidiqdqidiqduiqwiudeuiquifhuiuiq  qiufuihdfiquawc waudibwqdhiu");

        // TEST
        String result = str.substr(256,3);

        // VERIFY
        assert(str == "adwdawdiqwidiqdqidiqduiqwiudeuiquifhuiuiq  qiufuihdfiquawc waudibwqdhiuqiudhwqwdqw d wqdqwd adwdawdiqwidiqdqidiqduiqwiudeuiquifhuiuiq  qiufuihdfiquawc waudibwqdhiuqiudhwqwdqw d wqdqwd adwdawdiqwidiqdqidiqduiqwiudeuiquifhuiuiq  qiufuihdfiquawc waudibwqdhiu");
        assert(result == "");
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("adwdawdiqwidiqdqidiqduiqwiudeuiquifhuiuiq  qiufuihdfiquawc waudibwqdhiuqiudhwqwdqw d wqdqwd adwdawdiqwidiqdqidiqduiqwiudeuiquifhuiuiq  qiufuihdfiquawc waudibwqdhiuqiudhwqwdqw d wqdqwd adwdawdiqwidiqdqidiqduiqwiudeuiquifhuiuiq  qiufuihdfiquawc waudibwqdhiu");

        // TEST
        String result = str.substr(222,0);

        // VERIFY
        assert(str == "adwdawdiqwidiqdqidiqduiqwiudeuiquifhuiuiq  qiufuihdfiquawc waudibwqdhiuqiudhwqwdqw d wqdqwd adwdawdiqwidiqdqidiqduiqwiudeuiquifhuiuiq  qiufuihdfiquawc waudibwqdhiuqiudhwqwdqw d wqdqwd adwdawdiqwidiqdqidiqduiqwiudeuiquifhuiuiq  qiufuihdfiquawc waudibwqdhiu");
        assert(result == "");
    }
    std::cout << "Done testing substr()." << std::endl;
    return 0;
}