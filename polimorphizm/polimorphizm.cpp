#include <iostream>
#include "car.h"
#include "ship.h"
#include "carriage.h"
#include <vector>

using namespace std;

int main() {
	transport* s;
	vector <transport*> all_transport;
	string info;
	int n;
	cout << " enter amount of transport \n";
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		cout << "1 - ship\n";
		cout << "2 - car\n";
		cout << "3 - carriage\n";
		cout << "choose option: ";
		getline(cin, info);
		char op = info[0];
		switch (op)
		{

		case '1':
			s = new ship();
			all_transport.push_back(s);
			break;
		case '2':
			s = new car();
			all_transport.push_back(s);
			break;
		case '3':
			s = new carriage();
			all_transport.push_back(s);
			break;
		default :
			i = i - 1;
			cout << "one more time if you want to add ship enter 1 , if car enter 2 , if carriage enter 3\n";
			system("pause");
		}
		system("Cls");
	}
	for (int i = 0; i < n; i++) {
		all_transport[i]->writeToStream(cout);
	}
}

