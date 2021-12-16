// This program is used to calculate BMI of 20 students.

#include <iostream>
using namespace std;

int main()
{
	double studWeight[20];
	double studHeight[20];
	double studBMI[20];
	int i;
	for (i = 0; i < 20; i++)
	{
		//enter input
		cout << " Enter Students Weight in Kg : \t";
		cin >> studWeight[i];
		cout << "Enter Students Height in meters : \t";
		cin >> studHeight[i];
		cout << endl;
	}
		//calculate BMI
	for (i=0; i < 20; i++)
	{
		studBMI[i] = studWeight[i] / (studHeight[i] * studHeight[i]);
	}

	for (i = 0; i < 20; i++)
	{
		cout << i << studBMI[i];
	}
	
}