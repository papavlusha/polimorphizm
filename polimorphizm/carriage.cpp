#include "carriage.h"
#include "car.h"

carriage::carriage() :transport()
{
    readCarriageFromConsole();
}

carriage::carriage(string aName, int aspeed, double aVolume, int aAmount) :
    transport(aName, aspeed, aVolume)
{
    setAmount(aAmount);
}
void carriage::setAmount(int aAmount)
{
    if (aAmount <= 0) {
        throw exception("Invalid engine!");
    }
   amount = aAmount;
}

int carriage::getAmount() const
{
    return amount;
}

void carriage::readFromConsole()
{
    transport::readFromConsole();
    readFromConsole();
}
void carriage::writeToStream(ostream& os)
{
    os << *this << " amount of animals " << amount << "\n";
}
void carriage::readCarriageFromConsole()
{
    int t;
    bool in;
    cout << "Enter amount of animals: ";
    while (true) {
        cin >> t;
        try {
            setAmount(t);
            break;
        }
        catch (...) {
            cout << "Input error , try again!\n";
        }
    }
}

