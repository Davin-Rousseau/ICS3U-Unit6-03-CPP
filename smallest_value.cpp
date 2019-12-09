// Copyright (c) 2019
//
// Created by: Davin Rousseau
// Created on: December 2019
// This program finds the smallest number in the list of numbers given

#include <time.h>
#include <iostream>
#include <array>


template<size_t N>
int MinimumValue(std::array<int, N> listOfNumbers) {
    // this functions returns the smallest value of a random array

    int smallestValue = listOfNumbers[0];

    for (int counter : listOfNumbers) {
        if (counter < smallestValue) {
            smallestValue = counter;
        }
    }
    return smallestValue;
}


main() {
    // this uses an array and prints the smallest value

    std::array<int, 10> randomNumbers;
    int randomNumber = 0;
    int smallestValue = 0;

    srand(time(NULL));
        std::cout << "The values are: ";
        for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
            randomNumber = (rand() % 10) + 1;
            randomNumbers[loop_counter] = randomNumber;
            std::cout << randomNumber << ", ";
        }
        std::cout << " " << std::endl;

        smallestValue = MinimumValue(randomNumbers);

        std::cout << "The smallest value is: " << smallestValue << std::endl;
}
