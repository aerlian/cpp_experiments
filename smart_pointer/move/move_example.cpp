//
// Created by aerlian on 12/19/21.
//

#include "move_example.h"

Dog::Dog(const string name) : name{name} {
    cout << "Dog ctor" << endl;
}

Dog createDog(const string name) {
    return Dog{name};
}

void executeMove() {
    auto dog = createDog("rufus");

}
