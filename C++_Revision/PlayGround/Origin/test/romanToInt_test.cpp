#include "../inc/romanToInt.h"

#define BOOST_TEST_MODULE Test1
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(TestRomanToInt)

BOOST_AUTO_TEST_CASE(TestSingleRomanNumerals)
{
    Roman R;

    BOOST_CHECK(R.ToInt("I") == 1);
    BOOST_CHECK(R.ToInt("V") == 5);
    BOOST_CHECK(R.ToInt("X") == 10);
    BOOST_CHECK(R.ToInt("L") == 50);
    BOOST_CHECK(R.ToInt("C") == 100);
    BOOST_CHECK(R.ToInt("D") == 500);
    BOOST_CHECK(R.ToInt("M") == 1000);
}

BOOST_AUTO_TEST_CASE(TestMultipleRomanNumerals)
{
    Roman R;

    BOOST_CHECK(R.ToInt("II") == 2);
    BOOST_CHECK(R.ToInt("XII") == 12);
    BOOST_CHECK(R.ToInt("XXVII") == 27);
}

BOOST_AUTO_TEST_CASE(TestSubtractiveNotation)
{
    Roman R;

    BOOST_CHECK(R.ToInt("IV") == 4);
    BOOST_CHECK(R.ToInt("IX") == 9);
    BOOST_CHECK(R.ToInt("XL") == 40);
    BOOST_CHECK(R.ToInt("XC") == 90);
    BOOST_CHECK(R.ToInt("CD") == 400);
    BOOST_CHECK(R.ToInt("CM") == 900);
}

BOOST_AUTO_TEST_CASE(TestAdditionalCases)
{
    Roman R;

    BOOST_CHECK(R.ToInt("III") == 3);
    BOOST_CHECK(R.ToInt("LVIII") == 58);
    BOOST_CHECK(R.ToInt("MCMXCIV") == 1994);
}

BOOST_AUTO_TEST_SUITE_END()
