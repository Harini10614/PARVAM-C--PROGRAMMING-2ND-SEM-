#include <iostream>
#include <string>

int main() {
    int age;
    std::string name;

    // Ask user for their name
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // Ask user for their age
    std::cout << "Enter your age: ";
    std::cin >> age;

    // Output the inputs
    std::cout << "\nHello " << name << "! You are " << age << " years old." << std::endl;

    return 0;
}