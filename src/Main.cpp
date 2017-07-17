#include <iostream>
#include <another_plain_package/Dummy.hpp>

int main(int argc, char** argv)
{
    another_plain_package::DummyClass dummyClass;
    dummyClass.welcome();

    return 0;
}
