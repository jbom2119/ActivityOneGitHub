// Program: Activity One
// Description: A simple Class program
// Name: Justin Busse
// Date: 1/19/2026

#include <iostream>
using namespace std;

// create a class for dog
class Dog
{
public:
	// constructor to initialize dog variables
	name = "";
	breed = "";
	age = 0;

	// function to display dog information
	void display()
	{
		cout << "Dog's Name: " << name << endl;
		cout << "Dog's Breed: " << breed << endl;
		cout << "Dog's Age: " << age << " years old" << endl;
	}

private:
// declare variables for dog
    string name;
    string breed;
	int age;
};

int main()
{
    // create an object for dog class
    Dog dog1;

    // grab user input for dog variables
	cout << "Enter the dog's name: ";
	cin >> dog1.name;
	cout << "Enter the dog's breed: ";
	cin >> dog1.breed;
	cout << "Enter the dog's age: ";
	cin >> dog1.age;

	// display dog information
	display();

	return 0;
}
