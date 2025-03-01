
//BMI program. Oladamola Ola-Buraimo. 03/11/24. This code will take user input, calculate the BMI and weight status
#include <iostream>

int main() {
    double weight, height, bmi;

    std::cout << "Enter weight in pounds: ";
    std::cin >> weight;

    std::cout << "Enter height in inches: ";
    std::cin >> height;

    bmi = weight * 703 / (height * height);

    std::cout << "BMI: " << bmi << std::endl;

    if (bmi >= 18.5 && bmi <= 25) {
        std::cout << "Optimal weight" << std::endl;
    }
    else if (bmi < 18.5) {
        std::cout << "Underweight" << std::endl;
    }
    else {
        std::cout << "Overweight" << std::endl;
    }

    return 0;
}
