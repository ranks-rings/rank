#include <iostream>

// Function to calculate the volume of a rectangular pyramid
double calculateRectangularPyramidVolume(double length, double width, double height) {
    return (1.0 / 3.0) * length * width * height;
}

int main() {
    double length, width, height;

    // Get the dimensions from the user
    std::cout << "Enter the length of the rectangular pyramid base: ";
    std::cin >> length;

    std::cout << "Enter the width of the rectangular pyramid base: ";
    std::cin >> width;

    std::cout << "Enter the height of the rectangular pyramid: ";
    std::cin >> height;

    // Calculate and display the volume of the rectangular pyramid
    double pyramidVolume = calculateRectangularPyramidVolume(length, width, height);

    std::cout << "Volume of the rectangular pyramid: " << pyramidVolume << std::endl;

    return 0;
}
