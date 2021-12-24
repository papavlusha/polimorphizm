#pragma once
#include "transport.h"
constexpr auto START_LINE = __LINE__;
enum class Type {
    Feeder_ship =1,
    General_cargo_vessels,
    Container_ships,
    Tankers,
    Dry_bulk_carriers,
    Multi_purpose_vessels,
    Reefer_ships,
    Roll_on_roll_off_vessels
};
constexpr auto Type_COUNT = __LINE__ - START_LINE - 3;
const string Type_NAMES[] = { "Feeder shi", "General cargo vessels",
"Container ships", "Tankers", "Dry bulk carriers","Multi purpose vessels",
" Reefer ships"," Roll-on/roll-off vessels."};
const string MENU_STRING = "Choose ship type (1-Feeder ship,2- General cargo vessels, 3-Container ships, 4-Tankers, 5-Dry bulk carriers, 6-Multi purpose vessels, 7-Reefer ships,  8-Roll-on/roll-off vessels. ";
class ship :
    public transport
{
    public:
        ship();
        ship(string aName, int aspeed, double aVolume, Type aType);
        void setType(Type aType);
        Type getType() const;
        void readFromConsole() override;
        void writeToStream(ostream&) override;
    private:
        Type type;
        void readShipFromConsole();
        void dummy() {};  
    };

