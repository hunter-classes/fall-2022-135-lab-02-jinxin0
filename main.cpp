/**
 * Author: Jinxin Lin
 * Course: CSCI-135
 * Instructor: Professor Zamansky
 * Assignment: Task B. Print all integers from the requested interval. Lab 2. Loops, Arrays, and Number Sequences.
 * 
 * asks the user to input interger L and U, then print the numbers from L <= x < U
 */

#include "funcs.h"

int main()
{
    print_interval(-5, 10);
    print_interval(0, 10);
    print_interval(-10, 10);
    print_interval(-10, 0);
    print_interval(-10, 10);
    return 0;
}