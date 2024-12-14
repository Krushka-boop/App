#include <iostream>
#include "windows.h"
#include "lib.h"
using namespace std;


int main()
{
	double a = 5;
	double b = 4;
	double c = 7;
	cout << PloshCircle(a) << endl;
	cout << PloshKvadrat(b) << endl;
	cout << PloshTrangle(a, c) << endl;
	cout << PerimetrCircle(c) << endl;
	cout << PerimetrKvadrat(b) << endl;
	cout << PerimetrTrangle(a, b, c) << endl;
}