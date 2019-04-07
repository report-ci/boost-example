#define BOOST_TEST_MAIN

#include <boost/test/included/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(system_suite)


BOOST_AUTO_TEST_CASE(win_test)
{
    BOOST_CHECK(true);
    BOOST_REQUIRE(BOOST_IS_DEFINED(_WIN32));
}

BOOST_AUTO_TEST_CASE(sys_test)
{
    BOOST_WARN_MESSAGE(BOOST_IS_DEFINED(__unix__), "System is not linux");
    BOOST_REQUIRE(!BOOST_IS_DEFINED(_WIN32));
}

BOOST_AUTO_TEST_CASE(gen_test)
{
    BOOST_CHECK_MESSAGE(false, "some test would be here");
}

BOOST_AUTO_TEST_SUITE_END()
