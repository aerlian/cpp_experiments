//
// Created by aerlian on 12/19/21.
//

#ifndef UNTITLED_MOVE_EXAMPLE_H
#define UNTITLED_MOVE_EXAMPLE_H
#include <iostream>

using namespace std;

struct Dog {
    const string name;
    Dog(const string name);
};

Dog createDog();

void executeMove();
void takeDog(const Dog d);


#endif //UNTITLED_MOVE_EXAMPLE_H
