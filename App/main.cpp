#include <iostream>
#include "windows.h"
#include "lib.h"
using namespace std;


int main()
{
	double a = 6;
	double b = 2;
	double c = 9;

	cout << PerimetrKvadrat(a) << endl;
	cout << PerimetrTrangle(b, c, a) << endl;

	cout << PloshCircle(a) << endl;
	cout << PloshKvadrat(c) << endl;
	cout << PloshTrangle(a, b) << endl;
	cout << PerimetrCircle(b) << endl;
}