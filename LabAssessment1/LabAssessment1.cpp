// LabAssessment1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Header.h"
#include  <iostream>

using namespace std;

class Person {

};

int main()
{
	int num1 = 3;
	int *ptr{ NULL };
	int *pNum{ NULL };
	ptr = &num1;
	pNum = new int;  //This is required as *pNum points to NULL. NULL cannot be written to in most systems.
	*pNum = 5;

	cout << "main()" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "*pNum = " << *pNum << endl;

	cout << endl << "Passing num1 by value" << endl;
	PassByValue(num1);
	cout << "main()" << endl;
	cout << "num1 = " << num1 << endl;

	cout << endl << "Passing *pNum by reference" << endl;
	cout << "Value at *pNum = " << *pNum << endl;
	PassByRef(*pNum);
	cout << "main()" << endl;
	cout << "Value at *pNum = " << *pNum << endl;

	cout << endl << "Passing *pNum by value." << endl;
	PassByValue(*pNum);
	cout << "main()" << endl;
	cout << "Value at *pNum = " << *pNum << endl;

	double *pDbl{ NULL };
	pDbl = new double;
	*pDbl = 3.1415F;

	cout << "The value of double variable is : " << *pDbl << endl;

	delete pDbl;

	/*Unhandled exception thrown : read access violation.
		pDbl was 0x8123.*/
	//cout << "Value at pointer after deallocation : " << *pDbl << endl;


	return 0;
}