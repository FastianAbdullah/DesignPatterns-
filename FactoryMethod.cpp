/*when a user is not interested in features just want a specific item and ordered to a factory
now its factory responsibility to give him that thing here we take burgers example where  usercomes
and saying i want this type of burger like flavour but user cant specify the ingrediants here factory
will add ingrediants by themselves&*/
//--------------------------------------------------------------------------------------------------------
/*
* Factory Method is a creational design pattern that provides an interface for creating objects in a superclass,
  but allows subclasses to alter the type of objects that will be created.
*/
/*
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Abstract Product: Burger
class Burger {
public:
    virtual void eat() = 0;
};

// Concrete Products: Cheeseburger
class Cheeseburger : public Burger {
public:
    void eat() override {
       cout << "Here is your delicious Cheeseburger!\nIngredients: Bun, Patty, Cheese, Lettuce, Tomato." << std::endl;
    }
};

// Concrete Products: VeggieBurger
class VeggieBurger : public Burger {
public:
    void eat() override {
       cout << "Here is your tasty VeggieBurger!\nIngredients: Bun, Veggie Patty, Lettuce, Tomato, Onion." << std::endl;
    }
};

// Simple Burger Factory
class SimpleBurgerFactory {
public:
    Burger* createBurger(const string& type)
    {
        if (type == "Cheeseburger") {
            return new Cheeseburger();
        }
        else if (type == "VeggieBurger") {
            return new VeggieBurger();
        }
        else {
            // Handle unknown types or return a default burger
            cout << "Unknown burger type. Returning a default burger." << endl;
            return nullptr;
        }
    }
};

int main() {
    // Client code
    SimpleBurgerFactory burgerFactory;

    // User orders a Cheeseburger
    Burger* Abdullah= burgerFactory.createBurger("Cheeseburger");
    Abdullah->eat();

    // User orders a VeggieBurger
    Burger* Qasim = burgerFactory.createBurger("VeggieBurger");
    Qasim->eat();

    return 0;
}
*/