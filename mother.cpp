//
// Created by nick on 5/17/22.
//
#include "two.h"
#include "draw.h"
#include <iostream>

int main(int argc, char *argv[]) {
    int x = 42;
    std::cout << x << std::endl;
    const char **test = new const char *[0];

    bool lever = true;
    if (lever) {
        std::cout << main2(1, test) << std::endl;
        //std::cout << draw(1, test) << std::endl;
    } else {
        std::cout << draw(1, test) << std::endl;
    }
    return 0;
}