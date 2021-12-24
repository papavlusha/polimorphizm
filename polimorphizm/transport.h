#pragma once
#include <string>
#include <iostream>
using namespace std;
class transport
{
	public:
		transport(string aName,int aspeed , double aVolume);
		transport(const transport& other);
		void operator = (const transport& other);
		transport();
		void setName(string aName);
		string  getName() const;
		void setVolume(double aVolume);
		double getVolume() const;
		void setSpeed(int aSpeed);
		int getSpeed() const;
		virtual void readFromConsole();
		virtual void writeToStream(ostream&);
private:
		string name;
		int speed;
		double volume;
		void clone(const transport& other);
		virtual void dummy() = 0;
		friend ostream& operator << (ostream& os, const transport& b);
	};








