#include <iostream>
#include<vector>
using namespace std;

// Virtual Function;
class Animal
{
public:
    virtual void speak()
    {
        cout << "Hu Hu" << endl;
    }
};

// Create a another class;
class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Break" << endl;
    }
};

class Cat : public Animal
{
public:
    void speak()
    {
        cout << "Meow" << endl;
    }
};
int main()
{
    // Animal *p;
    // p = new Dog();

    // p->speak(); // Call speak() (dynamic binding due to virtual function)

    // delete p; // Free allocated memory to prevent memory leaks

    Animal *p;
    vector<Animal*> animals;
    animals.push_back(new Dog());
    animals.push_back(new Cat());
    animals.push_back(new Animal());
    animals.push_back(new Dog());
    animals.push_back(new Cat());

    // All in one line cal
    for (int i = 0; i < animals.size(); i++)
    {
        p = animals[i];
        p->speak();
    }

    return 0;
}