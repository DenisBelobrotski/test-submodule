//
// Created by user on 2019-04-17.
//

#include <iostream>
#include <libtestparser/libtestparser.h>

void sayHello()
{
    std::cout << "Hello from test.cpp!" << std::endl;
}

void sayDogName(std::string name)
{
    std::cout << "Dog name: " << name << std::endl;
}

int getDogAge()
{
    return 4;
}