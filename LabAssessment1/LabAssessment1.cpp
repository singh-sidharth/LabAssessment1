// LabAssessment1.cpp : Defines the entry point for the console application.
//

#include  <iostream>

int PassByValue(int);
void PassByRef(int &);

int main()
{
	int num1 = 3;
	int *pNum{ nullptr }, *ptr2{ nullptr };
	ptr2 = &num1;
	*pNum = 5;
	PassByValue(num1);
	std::cout << "Value of num1 after PassByValue():" << num1<<std::endl;

    return 0;
}

