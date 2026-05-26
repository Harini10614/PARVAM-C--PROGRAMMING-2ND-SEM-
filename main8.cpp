#include<iostream>
#include<string>
// 1. Pass-by-value vs Pass-by-reference
void incrementByValue(int x);     // Local copy is modified
void incrementByReference(int &a); // Original variable is modified
int main(){
    
 // 1. Pass-by-value vs Reference
    int num = 10;
    
    incrementByValue(num);
    std::cout << "After incrementByValue: " << num << " (No change)" << std::endl;

    incrementByReference(num);
    std::cout << "After incrementByReference: " << num << " (Value changed)" << std::endl;

    return 0;
}
void incrementByValue(int x) {
    x++; // Only changes the local copy
}

void incrementByReference(int &a) {
    a++; // Changes the actual variable in main
}