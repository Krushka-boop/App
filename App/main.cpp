#include <iostream>
#include "windows.h"
#include "lib.h"
using namespace std;


int main()
{
	double a = 4;
	double b = 8;
	double c = 7;
	cout << PloshCircle(a) << endl;
	cout << PloshKvadrat(c) << endl;
	cout << PloshTrangle(a, b) << endl;
	cout << PerimetrCircle(b) << endl;
	cout << PerimetrKvadrat(a) << endl;
	cout << PerimetrTrangle(b,c,a) << endl;

}