#include <iostream>
#include "windows.h"
#include "lib.h"
using namespace std;


int main()
{
	double a = 7;
	double b = 3;
	double c = 9;
	cout << PloshCircle(a) << endl;
	cout << PloshKvadrat(c) << endl;
	cout << PloshTrangle(a, c) << endl;
	cout << PerimetrCircle(b) << endl;
	cout << PerimetrKvadrat(a) << endl;
	cout << PerimetrTrangle(a, b, c) << endl;
}