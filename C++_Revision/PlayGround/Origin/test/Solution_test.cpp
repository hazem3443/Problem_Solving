#include "../include/Solution.h"

#define BOOST_TEST_MODULE Test1
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(TestRomanToInt)

BOOST_AUTO_TEST_CASE(TestSingleRomanNumerals)
{
    Solution A;

    BOOST_CHECK(A.romanToInt("I") == 1);
    BOOST_CHECK(A.romanToInt("V") == 5);
    BOOST_CHECK(A.romanToInt("X") == 10);
    BOOST_CHECK(A.romanToInt("L") == 50);
    BOOST_CHECK(A.romanToInt("C") == 100);
    BOOST_CHECK(A.romanToInt("D") == 500);
    BOOST_CHECK(A.romanToInt("M") == 1000);
}

BOOST_AUTO_TEST_CASE(TestMultipleRomanNumerals)
{
    Solution A;

    BOOST_CHECK(A.romanToInt("II") == 2);
    BOOST_CHECK(A.romanToInt("XII") == 12);
    BOOST_CHECK(A.romanToInt("XXVII") == 27);
}

BOOST_AUTO_TEST_CASE(TestSubtractiveNotation)
{
    Solution A;

    BOOST_CHECK(A.romanToInt("IV") == 4);
    BOOST_CHECK(A.romanToInt("IX") == 9);
    BOOST_CHECK(A.romanToInt("XL") == 40);
    BOOST_CHECK(A.romanToInt("XC") == 90);
    BOOST_CHECK(A.romanToInt("CD") == 400);
    BOOST_CHECK(A.romanToInt("CM") == 900);
}

BOOST_AUTO_TEST_CASE(TestAdditionalCases)
{
    Solution A;

    BOOST_CHECK(A.romanToInt("III") == 3);
    BOOST_CHECK(A.romanToInt("LVIII") == 58);
    BOOST_CHECK(A.romanToInt("MCMXCIV") == 1994);
}

BOOST_AUTO_TEST_SUITE_END()
