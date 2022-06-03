#include <iostream>
using namespace std;

class QuackBehavior
{
public:
    virtual void quack() = 0;
};

class Quack : public QuackBehavior
{
public:
    void quack()
    {
        cout << "Quack Quack" << endl;
    }
};

class Squeak : public QuackBehavior
{
public:
    void quack()
    {
        cout << "Squeak Squeak" << endl;
    }
};

class Silent : public QuackBehavior
{
public:
    void quack()
    {
        cout << "I can't speak" << endl;
    }
};