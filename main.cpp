#include <iostream>
#include <format>

#include "src/oops.hpp"

int main() {
    const std::string prompt = "Enter a number between -100 and 100\tenter \"default\" for 100";
    const std::string errorMessage = "Thats not between -100 and 100";
    const std::string userValue = oops(-100, 100 ,prompt, errorMessage);

    std::cout << std::format("The value the user choose is {}\n", userValue);
}
