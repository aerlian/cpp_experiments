//
// Created by aerlian on 12/19/21.
//
// https://developers.redhat.com/blog/2019/04/12/understanding-when-not-to-stdmove-in-c
// https://artificial-mind.net/blog/2021/10/23/return-moves
// https://en.cppreference.com/w/cpp/language/copy_elision

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

Dog& Dog::operator=(const Dog& other) {
    this->name = move(other.name);
    return *this;
}

void takeDog(Dog d) {
    cout << "takeDog: " << d.name << endl;
}

template <class T>
void Swap(T& a, T& b) {
    T tmp(a);
    a = b;
    b = tmp;
}

template <class T>
void moveSwap(T& a, T& b) {
    T tmp(std::move(a));
    a = std::move(b);
    b = std::move(tmp);
}

void executeMove() {
//    const auto d = Dog::createDog("bozo");
//    takeDog(d); // lvalue ref copy ctor
//    OR

//    takeDog(Dog("zeus")); //RVO fastest
//    takeDog(move(Dog("zeus"))); //move semantics - rvalue ref copy ctor
    Dog a("bonzo");
    Dog b("fuzzy");
    cout << "pre swap: " << a.name << endl;
    Swap(a, b);
    cout << "post swap: " << a.name << endl;
}
