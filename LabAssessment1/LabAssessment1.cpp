// LabAssessment1.cpp : Defines the entry point for the console application.
//

#include  <iostream>

using namespace std;

void PassByValue(int);
void PassByRef(int &);

int main()
{
	int num1 = 5;
	int *ptr{ NULL }, *pNum{ NULL };
	ptr = &num1;
	*pNum = 3;
	PassByValue(num1);
	cout << "main()" << endl;
	cout << "Value of num1 = " << num1 << endl;

    return 0;
}

