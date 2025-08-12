// RandomNumberGeneratorExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <numeric>
#include <random>
#include <vector>

static void RandomNumberGenerator_Approach_A(int a, int b, int loopCount)
{
    std::random_device rd;  // a seed source for the random number engine
 
    static auto gen = std::mt19937(rd());     // mersenne_twister_engine seeded with rd()
    
    //Distributes numbers from within the range of the min number value to max number value (a , b)
    auto distrib = std::uniform_int_distribution<int>(a, b);

    static std::vector<int> random_Number_Vector;

    for (int n = 0; n != loopCount; ++n) {
        random_Number_Vector.push_back(distrib(gen));
    }

    std::cout << "Uniform Int Distribution Method Approach A:\n[ ";
    for (auto& items : random_Number_Vector) {
        std::cout << items << " ";
    }
    std::cout << "]";
}

std::vector<int> RandomNumberGenerator_Approach_B(int a, int b, int loopCount) {
    
    std::vector<int> newRandomNumberVector;

    static auto gen = std::mt19937(std::random_device()());

    auto distrib = std::uniform_int_distribution<>(a, b);

    for (int n = 0; n != loopCount; ++n) {
        newRandomNumberVector.push_back(distrib(gen));
    }
    return newRandomNumberVector;
}


int main()
{
    //Approach A
    RandomNumberGenerator_Approach_A(0,100,25);
   
    std::cout << "\n" << std::endl;

    //Approach B
    std::vector<int> num = RandomNumberGenerator_Approach_B(0, 100, 5);

    std::cout << "Uniform Int Distribution Method Approach B (vector):\n[ ";
    for (auto& items : num) {
        std::cout << items << " ";
    }
    std::cout << "]";
    std::cout << std::endl;

    std::cin.get();
}

