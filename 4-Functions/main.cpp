#include <iostream>

/*
* Lesson 4
* Functions and function prototypes
*/

void print(std::string);			//Function prototype for print function
int add(int, int);					//Function prototype for add function

int main(int argc, char** argv) {

	print("This is from the print function!");				//Call the print function and pass it a value

	int a = add(10, 10);									//Assign a the return of the add function
	std::cout << a << std::endl;							//Print the value of a

	return 0;
}

void print(std::string str) {
	std::cout << str << std::endl;
}

int add(int rhs, int lhs) {
	return lhs + rhs;
}