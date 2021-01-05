// Copyright (c) 2021 Ryan Walsh All rights reserved
//
// Created by Ryan Walsh
// Created on January 4 2021
// this program calculates the area of a triangle

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

void calculate_area(float base, float height) {
    // calculates area
    float area_of_triangle;
    // process & output
    area_of_triangle = 0.5*height*base;
    std::cout << std::setprecision(2) << std::fixed <<
    "The area of the triangle is " << area_of_triangle << "cm²" << std::endl;
}

int main() {
// this program calculates the area of a triangle
    std::string given_string;
    float base_from_user;
    float height_from_user;
    std::string base_from_user_string;
    std::string height_from_user_string;

    while (true) {
    // input
        std::cout << "Enter the base of the triangle (cm): ";
        std::cin >> base_from_user_string;
        std::cout << "" << std::endl;
        std::cout << "Enter the height of the triangle (cm): ";
        std::cin >> height_from_user_string;
        std::cout << "" << std::endl;
        try {
            base_from_user = std::stof(base_from_user_string);
            height_from_user = std::stof(height_from_user_string);
            if (base_from_user < 0 || height_from_user < 0) {
                std::cout << base_from_user << " or " << height_from_user <<
                " was not above 0. Please ensure both height and base are "
                "higher than 0." << std::endl;
                std::cout << "" << std::endl;
            } else {
                break;
            }
        }catch (std::invalid_argument) {
            std::cout << base_from_user_string << " or "
                    << height_from_user_string <<
                    " is not a number. Please enter a number" << std::endl;
            std::cout << "" << std::endl;
        }
    }
    // call functions
    calculate_area(base_from_user, height_from_user);
}
