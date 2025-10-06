#include <string>
#include <iostream>

std::string oops(int lowerBound, int upperBound, std::string prompt, std::string errorMessage) {
    int userValue{};
    std::string userInput {};
    std::cout << prompt << std::endl;
    std::cin >> userInput;
    if (userInput == "default") {
        userValue = 100;
    }
    else {
        userValue = std::stoi(userInput);
    }
    while (userValue < lowerBound || userValue > upperBound) {
        std::cout  << errorMessage << std::endl;

        std::cout << prompt << std::endl;
        std::cin >> userInput;

        if (userInput == "default") {
            userValue = 100;
        }
        else {
            userValue = std::stoi(userInput);
        }
    }

    return std::to_string(userValue);


}
