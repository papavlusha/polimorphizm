#include "transport.h"
transport::transport(string aName, int aspeed, double aVolume)
{
	setName(aName);
	setSpeed(aspeed);
	setVolume(aVolume);
}

void transport::setName(string aName)
{
	name = aName;
}

string transport::getName() const
{
	return name;
}

void transport::setVolume(double aVolume)
{
	if (aVolume < 0) {
		throw std::exception("invalid volume");
	}
	volume = aVolume;
}

double transport::getVolume() const
{
	return volume;
}

void transport::setSpeed(int aSpeed)
{
	if (aSpeed < 0) {
		throw std::exception("invalid speed");
	}
	speed = aSpeed;
}

int transport::getSpeed() const
{
	return speed;
}



transport::transport(const transport& other)
{
	clone(other);
}

void transport::operator=(const transport& other)
{
	clone(other);
}

transport::transport()
{
	readFromConsole();
}

void transport::readFromConsole()
{
	int t;
	string s;
	double k;
	cout << "Enter name of transport pls: ";
	getline(cin, s);
	setName(s);
	
	cout << "Enter max speed(km/h): ";
	while (true) {
		cin >> t;
		try {
			setSpeed(t);
			break;
		}
		catch (...) {
			cout << "Input error , try again!\n";
		}
	}
	cout << "Enter max cargo volume(m^3): ";
	while (true) {
		cin >> k;
		try {
			setVolume(k);
			break;
		}
		catch (...) {
			cout << "Input error , try again!\n";
		}
	}
}

void transport::writeToStream(ostream& os)
{
	os <<  " Name: " << name <<
		", Max speed: " << speed<< " - k/h, " << " max cargo volume " << volume <<"- m^3, "<< "\n";
}

void transport::clone(const transport& other)
{
	name = other.name;
	speed = other.speed;
	volume = other.volume;
}

ostream& operator<<(ostream& os, const transport& b)
{
	os << " Name: " << b.name <<
		", Max speed: " << b.speed << " - k/h, " << " max cargo volume " << b.volume << " - m^3 " << "\n";
	return os;
}
