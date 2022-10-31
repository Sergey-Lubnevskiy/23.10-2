#include <iostream>
#include "Base.h"
#include "Vehicle.h"

using namespace std;
using namespace Military;
using namespace Transport;

int main()
{
	Base obj(598, 43, 2500, 1759);
	obj.Print();
	Vehicle* obj2 = nullptr;
	obj2 = new Truck(26, 225, 52, 185);
	cout << endl;
	obj2->Print();
	obj2->leave(obj);
	cout << endl;
	obj.Print();
	cout << endl;
	obj2->Print();
	obj2->arrive(obj);
	cout << endl;
	obj.Print();
	cout << endl;
	obj2->Print();
}