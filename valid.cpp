/**
 * Author: Jinxin Lin
 * Course: CSCI-135
 * Instructor: Professor Zamansky
 * Assignment: Task A. Input validation. Lab 2. Loops, Arrays, and Number Sequences
 * 
 * keep asks the user to input an integer in the range 0 < n < 100. After a valid value is obtained, print this number n squared.
 */

#include <iostream>

int main()
{
    int num = 0;
    while (!(0 < num) || !(num < 100))
    {
        std::cout << "Please enter an integer: ";
        std::cin >> num;
    }
    std::cout << "Number squared is" << num * num << '\n';
    return 0;
}