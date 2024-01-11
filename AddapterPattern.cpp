#include <iostream>
/*
// Adaptee: Existing class with incompatible interface
//Example 1 : 
class OldSystem {
public:
    void performOldAction() {
        std::cout << "Old System is performing old action." << std::endl;
    }
};

// Target Interface: Expected interface by the client
class NewSystem {
public:
    virtual void performNewAction() = 0;
};

// Adapter: Adapts OldSystem to work with NewSystem
class Adapter : public NewSystem {
private:
    OldSystem oldSystem;

public:
    void performNewAction() override {
        // Map the call to the OldSystem's method
        std::cout << "new";
        oldSystem.performOldAction();
    }
};

int main() {
    // Client code using the NewSystem interface
    NewSystem* system = new Adapter();
    system->performNewAction();

    delete system;

    return 0;
}
*/
//Example 2 :
//best example with code provided here 
//https://youtube.com/watch?v=eR22JuwTa54