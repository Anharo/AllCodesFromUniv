#include <iostream>
// Base class with virtual function
class Animal {
public:
     virtual void makeSound() {
        std::cout << "Animal sound" << std::endl;
    }
};

// Derived class overriding virtual function
class Dog : public Animal {
public:
    void makeSound() {
        std::cout << "Woof!" << std::endl;
    }
};

int main() {
    Animal* animalPtr = new Dog(); // Polymorphic behavior

    animalPtr->makeSound(); // Output: Woof!

    delete animalPtr;

    return 0;
}
