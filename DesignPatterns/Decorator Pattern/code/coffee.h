#include <iostream>
#include <string>
using namespace std;

class Coffee
{
public:
    string description;

    string getDescription()
    {
        return description;
    }
    virtual double cost() = 0;
};

class HouseBlend : public Coffee
{
public:
    HouseBlend()
    {
        description = "House Blend Coffee";
    }
    double cost()
    {
        return 1;
    }
};

class Latte : public Coffee
{
public:
    Latte()
    {
        description = "Latte Coffee";
    }
    double cost()
    {
        return 2.3;
    }
};
