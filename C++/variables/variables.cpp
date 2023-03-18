#include <iostream>

int main() {
    int file_size = 100;
    int counter = 4; //variables may be declared on the same line, however it is bad practice.
    double sales = 9.99;
    int swapper = file_size;
    file_size = counter;
    counter = swapper;
    std::cout << file_size; 
    std::cout << counter;
    std::cout << swapper;
    return 0;
}
