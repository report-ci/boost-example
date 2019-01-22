#define BOOST_TEST_MAIN

#include <boost/test/included/unit_test.hpp>

BOOST_AUTO_TEST_CASE(binary_test)
{
    BOOST_CHECK(false);
    BOOST_CHECK(true);

    BOOST_WARN(true);
    BOOST_WARN(false);

    BOOST_REQUIRE(true);
    BOOST_REQUIRE(false);
}

BOOST_AUTO_TEST_CASE(bitwise_equal_test)
{
    BOOST_CHECK_BITWISE_EQUAL((char)-1, (char)0xFF);
    BOOST_CHECK_BITWISE_EQUAL(3,3);

    BOOST_WARN_BITWISE_EQUAL(1,4);
    BOOST_WARN_BITWISE_EQUAL(2,4);

    BOOST_REQUIRE_BITWISE_EQUAL(9, 8);
    BOOST_REQUIRE_BITWISE_EQUAL(10,10);
}
