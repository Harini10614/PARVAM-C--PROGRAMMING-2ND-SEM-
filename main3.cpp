#include <iostream>
#include <string>

class Family {
public:
    std::string name;
    std::string relation;
    int age;

    void introduce() {
        std::cout << name << " is my " << relation
                  << " and is " << age << " years old.\n";
    }
};

int main() {

    Family member1;
    member1.name = "Shiva";
    member1.relation = "Father";
    member1.age = 50;

    Family member2;
    member2.name = "Kala";
    member2.relation = "Mother";
    member2.age = 45;

    Family member3;
    member3.name = "Mani";
    member3.relation = "Brother";
    member3.age = 20;

    member1.introduce();
    member2.introduce();
    member3.introduce();

    return 0;
}