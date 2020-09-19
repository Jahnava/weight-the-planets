//This program prompts the user to enter in a weight of their choice. User can choose a planet and program will tell them how much they'll weight on that planet.

//include directives allow for another file to be inserted into the program
#include<iostream> //iostream allows for programs to use cout because it is not origionally included in C++. it is part of the input–output stream library.
#include<iomanip>	//iomanip is added, so setw is able to be used in the program.

int main() //Marks the beginning of a function. Every C++ program must have a main()
{
	//std places the standard library functions into different namespaces
	using std::cin;
	using std::cout;
	using std::endl;
	using std::fixed;
	using std::setprecision;

	//variables
	const float MERCURY = 0.38; //setting the constant variable called const means that the number assigned will be constant and wont change. this const is classified as a float which is the variable name that stores info.
	const float VENUS = 0.91;
	const float NEPTUNE = 1.10;

	float weight;   //input value from the user
	float newWeight;  //calculated value

	char planet; //users choice of the planet. charachters or char's only hold one value that is placed in single quotes NOT double quotes

	//get input from the user
	cout << "Enter your weight in lbs: ";
	cin >> weight;

	cout << endl << endl;
	cout << "Press M for Mercury " << endl;
	cout << "Press V for Venus " << endl;
	cout << "Press N for Neptune " << endl;
	cout << endl << endl;

	cout << "Your choice: ";
	cin >> planet;

	//output
	cout << fixed << setprecision(1) << endl << endl;
	cout << weight << "lbs on ";

	//determine weight on planets
	if (planet == 'M')
	{
		newWeight = weight * MERCURY;
		cout << "Mercury = " << newWeight << " lbs." << endl;
	}
	else if (planet == 'V')
	{
		newWeight = weight * VENUS;
		cout << "Venus = " << newWeight << " lbs." << endl;
	}
	else if (planet == 'N')
	{
		newWeight = weight * NEPTUNE;
		cout << "Neptune = " << newWeight << "lbs." << endl;
	}

	cout << endl << endl;
	system("pause");
	return 0;
}