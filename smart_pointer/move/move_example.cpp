//
// Created by aerlian on 12/19/21.
//

#include "move_example.h"

Dog::Dog(const string name) : name{name} {
    cout << "Dog ctor" << endl;
}

//lvalue copy ctor
Dog::Dog(const Dog &dog) : name{dog.name} {
    cout << "Dog copy constructor" << endl;
}

// rvalue ref copy ctor
Dog::Dog(Dog&& dog) : name{move(dog.name)} {
    cout << "Dog rvalue ref copy ctor" << endl;
}

Dog::~Dog() {
    cout << "~Dog" << endl;
}

void takeDog(Dog d) {
    cout << "takeDog: " << d.name << endl;
}

//template <class T>
//swap(T& a, T& b) {
//T tmp(std::move(a));
//a = std::move(b);
//b = std::move(tmp);
//}

void executeMove() {
//    const auto d = Dog::createDog("bozo");
//    takeDog(d); // lvalue ref copy ctor
//    OR

//    takeDog(Dog("zeus")); //RVO fastest
    takeDog(move(Dog("zeus"))); //move semantics - rvalue ref copy ctor
}
