#include "decorator.h"

int main()
{
    Coffee *houseBlend = new HouseBlend();
    houseBlend = new Milk(houseBlend);
    houseBlend = new Whip(houseBlend);
    cout << "The cost of the coffee is" << houseBlend->cost() << endl;
    return 0;
}
