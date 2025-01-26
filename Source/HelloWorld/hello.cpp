#include <HelloWorld/hello.hpp>
#include <iostream>

std::string hello() noexcept { return "Hello"; }

std::string world() noexcept { return "World!"; }

std::string helloWorld() noexcept { return hello() + " " + world() + "\n"; }

void print(const std::string &&s) noexcept { std::cout << s; }
