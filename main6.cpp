#include<iostream>
#include<string>
//1.Basic Function Declaration(prototype)
void greetUser(std::string name);

int main() {
    //1.Basic Function
    greetUser("Aarana");
    return 0;
}
// ---Function Definitions---
void greetUser(std::string name) {
    std::cout <<"Hello," << name << "!" << std::endl;
}