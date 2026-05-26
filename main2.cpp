#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <iomanip>

// Base Class
class Vehicle {
protected:
    std::string brand;
    std::string color;
    int year;

public:
    Vehicle(const std::string& b, const std::string& c, int y)
        : brand(b), color(c), year(y) {}

    virtual ~Vehicle() = default;

    virtual void startEngine() const {
        std::cout << brand << "'s engine is starting...\n";
    }

    virtual void displayInfo() const {
        std::cout << "Brand : " << brand << "\n"
                  << "Color : " << color << "\n"
                  << "Year  : " << year << "\n";
    }
};

// Derived Class
class Car : public Vehicle {
private:
    int speed;
    bool engineRunning;
    double fuelLevel;

public:
    // Constructor
    Car(const std::string& b,
        const std::string& c,
        int y,
        double fuel)
        : Vehicle(b, c, y),
          speed(0),
          engineRunning(false),
          fuelLevel(fuel) {}

    // Encapsulation (Getter)
    double getFuelLevel() const {
        return fuelLevel;
    }

    // Method Overriding (Polymorphism)
    void startEngine() const override {
        std::cout << "🚗 The " << color << " " << brand
                  << " engine is now running!\n";
    }

    void accelerate(int increment) {
        if (fuelLevel <= 0) {
            std::cout << brand << " has no fuel!\n";
            return;
        }

        speed += increment;
        std::cout << brand << " accelerated to "
                  << speed << " km/h\n";
    }

    void brake(int decrement) {
        speed -= decrement;

        if (speed < 0)
            speed = 0;

        std::cout << brand << " slowed down to "
                  << speed << " km/h\n";
    }

    void refuel(double amount) {
        fuelLevel += amount;

        std::cout << brand << " refueled. Current fuel: "
                  << std::fixed << std::setprecision(1)
                  << fuelLevel << " L\n";
    }

    void displayInfo() const override {
        Vehicle::displayInfo();

        std::cout << "Speed : " << speed << " km/h\n"
                  << "Fuel  : " << fuelLevel << " L\n"
                  << "-----------------------------\n";
    }
};

// Garage Class (Composition)
class Garage {
private:
    std::vector<std::shared_ptr<Car>> cars;

public:
    void addCar(const std::shared_ptr<Car>& car) {
        cars.push_back(car);
    }

    void showAllCars() const {
        std::cout << "\n===== GARAGE VEHICLES =====\n";

        for (const auto& car : cars) {
            car->displayInfo();
        }
    }
};

int main() {

    // Smart pointers
    auto car1 = std::make_shared<Car>(
        "Toyota", "Red", 2023, 45.5);

    auto car2 = std::make_shared<Car>(
        "Tesla", "Blue", 2024, 80.0);

    // Polymorphism
    Vehicle* vehicle1 = car1.get();
    Vehicle* vehicle2 = car2.get();

    vehicle1->startEngine();
    vehicle2->startEngine();

    std::cout << "\n";

    car1->accelerate(50);
    car1->brake(20);

    std::cout << "\n";

    car2->accelerate(100);
    car2->refuel(20);

    // Garage Management
    Garage myGarage;

    myGarage.addCar(car1);
    myGarage.addCar(car2);

    myGarage.showAllCars();

    return 0;
}