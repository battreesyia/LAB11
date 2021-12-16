LAB11
// This program is used to calculate BMI
#include <iostream>

void readData(double studWeight[], double studHeight[]);
void calBMI(double studWeight[], double studHeight[], double studBMI[]);
void display(double studBMI[]);

int main()
{
	double studWeight[3];
	double studHeight[3];
	double studBMI[3];

	//function call for input
	readData(studWeight, studHeight);
	//calculate BMI
	calBMI(studWeight, studHeight, studBMI);
	//display BMI
	display(studBMI);
}
void readData(double studWeight[], double studHeight[])
{
	for (int i = 0; i < 3; i++)
	{
		std::cout << " Enter students weight in kg : ";
		std::cin >> studWeight[i];
		std::cout << "Enter students height in meters : ";
		std::cin >> studHeight[i];
		std::cout << "\n";
	}
}
void calBMI(double studWeight[], double studHeight[], double studBMI[])
{
	for (int i = 0; i < 3; i++)
	{
		studBMI[i] = studWeight[i] / (studHeight[i] * studHeight[i]);
	}
}
void display(double studBMI[])
{
	for (int i = 0; i < 3; i++)
	{
		std::cout << i << "    " << studBMI[i] << "\n";
	}
}

