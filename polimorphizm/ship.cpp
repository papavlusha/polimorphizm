#include "ship.h"


ship::ship():transport()
{
    readShipFromConsole();
}

void ship::setType(Type aType)
{
    type = aType;
}

Type ship::getType() const
{
    return type;
}

string toString(Type f) {
    return Type_NAMES[(int)f - 1];
}

ship::ship(string aName, int aspeed, double aVolume, Type aType) :
    transport(aName, aspeed, aVolume)
{
    setType(aType);
}


void ship::readFromConsole()
{
    transport::readFromConsole();
    readFromConsole();
}
void ship::writeToStream(ostream& os)
{
    os << *this <<" ship type -" << toString(type) << "\n";
}
void ship::readShipFromConsole()
{
    cin.ignore();
    Type inputType;
    int t;
    cout << "Choose ship type (" + MENU_STRING + "): ";
    while (true) {
        cin >> t;
        if (!((t < 1) || (t > Type_COUNT)))
            break;
        cout << "Input error , try again!\n";
    }
    inputType = (Type)t;
    setType(inputType);

}

