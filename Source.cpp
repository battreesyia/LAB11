LAB11

// This program is used to calculate BMI

#include <iostream>

int main()
{
	double studWeight[3];
	double studHeight[3];
	double studBMI[3];

	//enter input
	for (int i = 0; i < 3; i++)
	{
		std::cout << " Enter students weight in kg : ";
		std::cin >> studWeight[i];
		std::cout << "Enter students height in meters : ";
		std::cin >> studHeight[i];
		std::cout << "\n\n";
	}

	//calculate BMI
	for (int i = 0; i < 3; i++)
	{
		studBMI[i] = studWeight[i] / (studHeight[i] * studHeight[i]);
		std::cout << i << "    " << studBMI[i] << "\n";
	}
}
