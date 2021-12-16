LAB11
// This program is used to calculate BMI
// safia 4:34 17/12/2021
#include <iostream>

void readData(double studWeight[], double studHeight[]);
void calBMI(double studWeight[], double studHeight[], double studBMI[]);
void display(double studBMI[]);

int main()
{
	double studWeight[20];
	double studHeight[20];
	double studBMI[20];

	//function call for input
	readData(studWeight, studHeight);
	//calculate BMI
	calBMI(studWeight, studHeight, studBMI);
	//display BMI
	display(studBMI);
}
void readData(double studWeight[], double studHeight[])
{
	for (int i = 0; i < 20; i++)
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
	for (int i = 0; i < 20; i++)
	{
		studBMI[i] = studWeight[i] / (studHeight[i] * studHeight[i]);
	}
}
void display(double studBMI[])
{
	for (int i = 0; i < 20; i++)
	{
		std::cout << i << "    " << studBMI[i] << "\n";
	}
}

