//
// Created by aerlian on 12/19/21.
//
#include <iostream>
#include "operator_over_loading.h"
using namespace std;

const MyPoint MyPoint::operator+(const MyPoint &other) const {
    return {.x = x + other.x, .y = y + other.y};
}

void OperatorOverloading() {
    const MyPoint a = {.x = 10, .y = 10};
    const MyPoint b = {.x = 100, .y = 200};
    const auto result = a + b;
    cout << result.x << ", " << result.y << endl;
}
