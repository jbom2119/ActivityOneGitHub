// Program: Activity One
// Description: A simple Class program
// Name: Justin Busse
// Date: 1/19/2026

#include <iostream>
#include <string>
using namespace std;

// create a class for dog
class Dog
{
public:
	// getter functions (provides access to the private variables)
	string getName()
	{
		return name;
	}
	string getBreed()
	{
		return breed;
	}
	int getAge()
	{
		return age;
	}

	// setter functions (modifies the private variables)
	void setName(string text)
	{
		name = text;
	}
	void setBreed(string text)
	{
		breed = text;
	}
	void setAge(int number)
	{
		age = number;
	}

	// function to display dog information
	void display()
	{
		cout << "Dog's Name: " << name << endl;
		cout << "Dog's Breed: " << breed << endl;
		cout << "Dog's Age: " << age << " years old" << endl;
	}

	// create a function for dog barking
	void bark()
	{
		cout << name << " says Woof! Woof!" << endl;
	}

private:
// declare variables for dog
    string name = "dog";
    string breed = "dog breed";
	int age = 10;
};

int main()
{
    // create an object for dog class
    Dog dog1;

	// create temporary variables for user input
	string tString;
	int tInt;

    // grab user input for dog variables
	cout << "Enter your dog's name: ";
	getline(cin, tString);
	dog1.setName(tString);
	cout << "Enter your dog's breed: ";
	getline(cin, tString);
	dog1.setBreed(tString);
	cout << "Enter your dog's age: ";
	cin >> tInt;
	dog1.setAge(tInt);
	cout << endl;

	// call function to display user input
	dog1.display();

	// call function to display dog sound
	dog1.bark();

	return 0;
}
