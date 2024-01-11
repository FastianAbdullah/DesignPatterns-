/*
* Template Method is a behavioral design pattern that defines the skeleton of an algorithm in the 
superclass but lets subclasses override specific steps of the algorithm without changing its structure.
*/
#include <iostream>
/*
class AbstractClass {
public:
    // The template method
    void templateMethod() {
        std::cout << "Step 1" << std::endl;
        stepTwo();  // This step is declared as abstract
        std::cout << "Step 3" << std::endl;
    }

    // Abstract method to be implemented by subclasses
    virtual void stepTwo() = 0;
};

class ConcreteClassA : public AbstractClass {
public:
    // Concrete implementation of Step Two for ConcreteClassA
    void stepTwo() override {
        std::cout << "ConcreteClassA: Implementing Step 2" << std::endl;
    }
};

class ConcreteClassB : public AbstractClass {
public:
    // Concrete implementation of Step Two for ConcreteClassB
    void stepTwo() override {
        std::cout << "ConcreteClassB: Implementing Step 2" << std::endl;
    }
};

int main() {
    // Example with ConcreteClassA
    ConcreteClassA objA;
    objA.templateMethod();

    std::cout << std::endl;

    // Example with ConcreteClassB
    ConcreteClassB objB;
    objB.templateMethod();

    return 0;
}*/
