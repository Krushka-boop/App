#include <iostream>
#include "windows.h"
#include "lib.h"
using namespace std;


int main()
{
	double a = 6;
	double b = 2;
	double c = 9;

	cout << PloshCircle(a) << endl;
	cout << PloshKvadrat(c) << endl;
	cout << PloshTrangle(a, b) << endl;
	cout << "Hello, i'm a Hel\n";
	cout << "This is a not a Fray\n";
	cout << PerimetrCircle(b) << endl;
	cout << PerimetrKvadrat(a) << endl;
	cout << PerimetrTrangle(b, c, a) << endl;

}