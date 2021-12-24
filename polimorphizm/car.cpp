#include "car.h"

car::car() :transport()
{
    readCarFromConsole();
}

car::car(string aName, int aspeed, double aVolume, int aEngine, bool aHindcarriage) :
    transport(aName,  aspeed,  aVolume)
{
    setEngine(aEngine);
    sethindcarriage(aHindcarriage);
}


void car::setEngine(int aEngine)
{
    if (aEngine <= 0)
        throw exception("Invalid engine!");
    engine = aEngine;
}

int car::getEngine() const
{
    return engine;
}
void car::sethindcarriage(bool info)
{
    hindcarriage = info;
}
bool car::gethindcarriage() const
{
    return hindcarriage;
}
void car::readFromConsole()
{
    transport::readFromConsole();
    readFromConsole();
}
void car::writeToStream(ostream& os)
{
    os << *this << " Engine has " << engine << " horse powers, ";
    if (hindcarriage) {
        os << " has a hindcarriage \n";
    }
    else
    {
        os << "hasn't a hindcarriage \n";
    }
}
void car::readCarFromConsole()
{
    int t;
    bool in;
    cout << "Enter amount of hourse powers in engine: ";
    while (true) {
        cin >> t;
        try {
            setEngine(t);
            break;
        }
        catch (...) {
            cout << "Input error , try again!\n";
        }
    }
    cout << "Enter 1 if hindcarriage is avaible, 0 if not: ";
    while (true) {
        cin >> in;
        try {
            sethindcarriage(in);
            break;
        }
        catch (...) {
            cout << "Input error , try again!\n";
        }
    }
}

