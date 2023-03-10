// Copyright Johanna Liu 2022
//
// Created by Johanna Liu
// Created in Dec 2022
// This program calculates the average

#include <time.h>
#include <array>
#include <iostream>
#include <random>
#include <string>

template <size_t N>
int CalculateSmallestNum(std::array<int, N> listOfNumbers) {
    // This function identifies the largest number
    int min = listOfNumbers[0];

    for (int loopCounter = 0; loopCounter < listOfNumbers.size();
         loopCounter++) {
        if (listOfNumbers[loopCounter] < min) {
            min = listOfNumbers[loopCounter];
        }
    }
    return min;
}

int main() {
    // This function uses an array

    int aRandomNumber;
    std::array<int, 10> randomNumber;
    int smallestInteger;

    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 100);

    for (int counter = 0; counter < 10; counter++) {
        aRandomNumber = idist(rgen);
        randomNumber[counter] = aRandomNumber;
        std::cout << "Random number is " << aRandomNumber;
        std::cout << std::endl;
    }

    // call function
    smallestInteger = CalculateSmallestNum(randomNumber);
    std::cout << "\nThe smallest integer is " << smallestInteger << "."
              << std::endl;

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
