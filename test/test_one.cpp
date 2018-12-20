#define BOOST_TEST_MAIN

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(binary_test)
{
    BOOST_CHECK(true);
    BOOST_CHECK(false);

    BOOST_WARN(true);
    BOOST_WARN(false);

    BOOST_REQUIRE(true);
    BOOST_REQUIRE(false);
}

BOOST_AUTO_TEST_CASE(bitwise_equal_test)
{
    BOOST_CHECK_BITWISE_EQUAL((char)-1, (char)0xFF);
    BOOST_CHECK_BITWISE_EQUAL(2,3);

    BOOST_WARN_BITWISE_EQUAL(1,1);
    BOOST_WARN_BITWISE_EQUAL(3,4);

    BOOST_REQUIRE_BITWISE_EQUAL(8, 8);
    BOOST_REQUIRE_BITWISE_EQUAL(9,10);
}
