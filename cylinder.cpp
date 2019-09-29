// Copyright (c) 2019 Amirmahdi Mersad All rights reserved
//
// Created by Amir Mersad
// Created on September 2019
// This program calculates the perimeter of a cylinder

#include <iostream>
#include <cmath>
#include <iomanip>


int main() {
    // This function calculates the perimeter of a cylinder
    float radius;
    float perimeter;

    // Input
    std::cout << "Please enter the radius of the cylinder(mm): " << std::endl;
    std::cin >> radius;

    // Process
    perimeter = radius * M_PI * 2;

    // Output
    std::cout << "The perimeter of the cylinder is : " << std::fixed
        << std::setprecision(2) << std::setfill('0') << perimeter << "mm^2"
        << std::endl;
}
