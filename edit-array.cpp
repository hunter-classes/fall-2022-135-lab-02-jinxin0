/**
 * Author: Jinxin Lin
 * Course: CSCI-135
 * Instructor: Professor Zamansky
 * Assignment: Task C. Using arrays to store, update, and retrieve numbers. Lab 2. Loops, Arrays, and Number Sequences.
 * 
 * creates an array of 10 integers, and provides an interface to edit any of its elements.
 */

#include <iostream>

void get_input(const char* msg, auto& out)
{
   std::cout << msg;
   std::cin >> out;
}

int main()
{
    static constexpr std::size_t ARR_SIZE = 10;
    
    int my_data[ARR_SIZE];
    std::fill(std::begin(my_data), std::end(my_data), 1);
    
    std::size_t index = 0;
    int val = 1;
    do
    {
        my_data[index] = val;
        for (auto i: my_data)
            std::cout << i << ' ';
        std::cout << '\n';
        get_input("Input index: ", index);
        get_input("Input value: ", val);
    } while (0 <= index && index < 10);

    std::cout << "Index out of range. Exit.\n";
    
    return 0;
}
