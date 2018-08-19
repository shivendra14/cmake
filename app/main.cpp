#include <iostream>
#include "hello.hpp"

int main(int argc, char const *argv[])
{
    Hello::SayHello();
    std::cout << "Hello World!" <<std::endl;
    return 0;
}
