//
// Created by Stephen Rodgers on 12/19/21.
//

#ifndef UNTITLED_OPERATOR_OVER_LOADING_H
#define UNTITLED_OPERATOR_OVER_LOADING_H

struct MyPoint {
    int x;
    int y;
    const MyPoint operator+(const MyPoint& other) const;
};

void OperatorOverloading();

#endif //UNTITLED_OPERATOR_OVER_LOADING_H
