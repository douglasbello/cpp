#include <stdio.h>
#include <iostream>
#include "hello2.h"

int main() {
    int x = 5;
    int y = addOne(x);
    std::cout << "x = " << x << ", y = " << y << std::endl;
    return 0;
}
