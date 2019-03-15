#include <iostream>
#include "stack.h"


int main() {
    std::cout << "Starting up..." << std::endl << std::endl << std::endl;

    std::cout << "Running test: STACK" << std::endl << std::endl;

    Stack<int> s;

    s.push(10);
    s.push(11);
    s.push(12);
    s.pop();
    s.pop();
    s.pop();

    return 0;
}