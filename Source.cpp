#include<iostream>
using namespace std;
int main() {
	double op1, op2;
	short  aop;
	cout << "Welcome to \" SIMPLE CALCULATOR\"\n";
	cout << "Please,Enter the operand 1 and operand 2 \n";
	cin >> op1 >> op2;
	cout << "Please, choose th operation:\n";
	cout << "1-( + )\t" << "2-( - )\n";
	cout << "3-( * )\t" << "4-( /)\n";
	cin >> aop;
	switch (aop)
	{
	case 1:
		cout << "the result is : " << op1 + op2 << '\n';
		break;
	case 2:
		cout << "the result is : " << op1 - op2 << '\n';
		break;
	case 3:
		cout << "the result is : " << op1 * op2 << '\n';
		break;
	case 4:
		cout << "the result is : " << op1 / op2 << '\n';
		break;
	default:
		break;
	}
	cout << "let us see you again!!\n";
	return 0;
}