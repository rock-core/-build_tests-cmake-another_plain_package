#include <boost/test/unit_test.hpp>
#include <another_plain_package/Dummy.hpp>

using namespace another_plain_package;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_welcome_is_called)
{
    another_plain_package::DummyClass dummy;
    dummy.welcome();
}
