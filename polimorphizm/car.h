#pragma once
#include "transport.h"
class car :
    public transport
{

public:
    car();
    car(string aName, int aspeed, double aVolume, int aEngine, bool aHindcarriage);
    void setEngine(int aengine);
    int getEngine() const;
    void sethindcarriage(bool info);
    bool gethindcarriage() const;
    void readFromConsole() override;
    void writeToStream(ostream&) override;
private:
    int engine;
    bool hindcarriage;
    void readCarFromConsole();
    void dummy() {}; 
};

