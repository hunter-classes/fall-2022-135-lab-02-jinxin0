/**
 * Author: Jinxin Lin
 * Course: CSCI-135
 * Instructor: Professor Zamansky
 * Assignment: Task D. Computing Fibonacci Numbers with Loops and Arrays 0, 1, 1, 2, 3, 5, 8, 13… Lab 2. Loops, Arrays, and Number Sequences.
 * 
 * uses an array of ints to compute and print all Fibonacci numbers from F(0) to F(59).
 */

#include <iostream>

int main()
{
    int fib[60] = {0, 1}; // integer overflow as number approach 2 billion
    for (std::size_t i = 2; i < std::size(fib); i++)
        fib[i] = fib[i - 1] + fib[i - 2];
    
    for (auto i : fib)
        std::cout << i << '\n';
    return 0;
}
