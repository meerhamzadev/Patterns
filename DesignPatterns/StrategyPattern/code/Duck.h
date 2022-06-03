#include <iostream>
#include "interface/FlyBehavior.h"
#include "interface/QuackBehavior.h"
using namespace std;

class Duck
{
public:
    FlyBehavior *flyBehavior;
    QuackBehavior *quackBehavior;

    void swim()
    {
        cout << "Duck is swimming" << endl;
    }
    virtual void appearance() = 0;
};

// Derived classes
class mallardDuck : public Duck
{
public:
    void appearance()
    {
        cout << "I'm a Mallard duck" << endl;
    }
};

class redFaceDuck : public Duck
{
public:
    void appearance()
    {
        cout << "I'm a Red Face duck" << endl;
    }
};

class rubberDuck : public Duck
{
public:
    void appearance()
    {
        cout << "I'm a Rubber duck" << endl;
    }
};

class decoyDuck : public Duck
{
public:
    void appearance()
    {
        cout << "I'm a Decoy duck" << endl;
    }
};
