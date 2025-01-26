#include <HelloWorld/hello.hpp>
#include <catch2/catch_test_macros.hpp>

TEST_CASE("An extremely important test that tests the hello methods",
          "Hello Test") {
    SECTION("Check Output") {
        REQUIRE(hello() == "Hello");
        REQUIRE(world() == "World!");
        REQUIRE(helloWorld() == "Hello World!\n");
    }
}
