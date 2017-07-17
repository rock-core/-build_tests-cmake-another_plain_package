rock_library(another_plain_package
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_executable(another_plain_package_bin Main.cpp
    DEPS another_plain_package)

