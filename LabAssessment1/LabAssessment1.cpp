// LabAssessment1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include  <iostream>
#include "Header.h"

using namespace std;

int main()
{
	int num1 = 3;
	int *ptr{ NULL }, *pNum{ nullptr };
	ptr = &num1;
	*pNum = 5;
	PassByValue(num1);
	cout << "main()" << endl;
	cout << "num1 = " << num1 << endl;
	PassByRef(*pNum);
	cout << "main()" << endl;
	cout << "Value at *pNum = " << num1 << endl;
	PassByValue(*pNum);
	cout << "main()" << endl;
	cout << "Value at *pNum = " << num1 << endl;
	return 0;
}