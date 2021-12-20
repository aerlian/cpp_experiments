//
// Created by aerlian on 12/19/21.
//

#ifndef UNTITLED_MOVE_EXAMPLE_H
#define UNTITLED_MOVE_EXAMPLE_H
#include <iostream>

using namespace std;

struct Dog {
    string name;
    ~Dog();
    Dog(const string name);
    Dog(const Dog& dog);
    Dog(Dog&& dog);

    Dog& operator=(const Dog& other);
};

void executeMove();
void takeDog(const Dog d);



#endif //UNTITLED_MOVE_EXAMPLE_H
