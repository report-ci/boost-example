#define BOOST_TEST_MAIN

#include <boost/test/included/unit_test.hpp>

BOOST_AUTO_TEST_CASE(message_test)
{
    BOOST_WARN_MESSAGE   (true,  "message X");
    BOOST_CHECK_MESSAGE  (true, "message Y");
    BOOST_REQUIRE_MESSAGE(true,  "message Z");

    BOOST_WARN_MESSAGE   (true, "message !X");
    BOOST_CHECK_MESSAGE  (true,  "message !Y");
    BOOST_REQUIRE_MESSAGE(true, "message !Z");
}

BOOST_AUTO_TEST_CASE(foobar)
{
    BOOST_CHECK(true);
}