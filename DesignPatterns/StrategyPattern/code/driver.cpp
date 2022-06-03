#include "Duck.h"

int main()
{
    Duck *duck = new mallardDuck();
    duck->appearance();
    duck->swim();
    duck->flyBehavior = new flyWithWings();
    duck->flyBehavior->fly();
    duck->quackBehavior = new Quack();
    duck->quackBehavior->quack();
    delete duck;
    cout << endl;

    duck = new redFaceDuck();
    duck->appearance();
    duck->swim();
    duck->flyBehavior = new flyWithWings();
    duck->flyBehavior->fly();
    duck->quackBehavior = new Quack();
    duck->quackBehavior->quack();
    delete duck;
    cout << endl;

    duck = new rubberDuck();
    duck->appearance();
    duck->swim();
    duck->flyBehavior = new noFly();
    duck->flyBehavior->fly();
    duck->quackBehavior = new Squeak();
    duck->quackBehavior->quack();
    delete duck;
    cout << endl;

    duck = new decoyDuck();
    duck->appearance();
    duck->swim();
    duck->flyBehavior = new noFly();
    duck->flyBehavior->fly();
    duck->quackBehavior = new Silent();
    duck->quackBehavior->quack();
    delete duck;
    cout << endl;
    return 0;
}