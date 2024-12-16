#include <iostream>
#include "windows.h"
#include "lib.h"
using namespace std;


int main()
{
	double a = 5;
	double b = 4;
	double c = 7;
	cout << PloshCircle(c) << endl;
	cout << PloshKvadrat(a) << endl;
	cout << PloshTrangle(a, c) << endl;
	cout << PerimetrCircle(b) << endl;
	cout << PerimetrKvadrat(b) << endl;
	cout << PerimetrTrangle(b,c,a) << endl;
}