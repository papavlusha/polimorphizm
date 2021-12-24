#pragma once
#include "transport.h"
class carriage :
    public transport
{
public:
    carriage();
    carriage(string aName, int aspeed, double aVolume, int aAmount);
    void setAmount(int aAmount);
    int getAmount() const;
    void readFromConsole() override;
    void writeToStream(ostream&) override;
private:
    int amount;
    bool hindcarriage;
    void readCarriageFromConsole();
    void dummy() {};  
};

