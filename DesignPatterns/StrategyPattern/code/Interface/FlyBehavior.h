#include <iostream>
using namespace std;

class FlyBehavior
{
public:
    virtual void fly() = 0;
};

class flyWithWings : public FlyBehavior
{
public:
    void fly()
    {
        cout << "I'm flying with wings" << endl;
    }
};

class noFly : public FlyBehavior
{
public:
    void fly()
    {
        cout << "I cannot fly :(" << endl;
    }
};