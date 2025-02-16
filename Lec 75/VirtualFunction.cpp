#include <iostream>
using namespace std;

// Virtual Function;
class Animal
{
public:
    virtual void speak()
    {
        cout << "Hu Hu";
    }
};

// Create a another class;
class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Break";
    }
};
int main()
{
    Animal *p;
    p = new Dog();

    p->speak(); // Call speak() (dynamic binding due to virtual function)

    delete p; // Free allocated memory to prevent memory leaks
    return 0;
}