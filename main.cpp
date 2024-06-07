#include <iostream>
using namespace std;

//Написати функцію для знаходження найбільшого з двох чисел.

void bigger_num(int num1, int num2)
{
	if (num1 > num2)
	{
		cout << "first number is bigger" << endl;

	}
	else if (num1 == num2)
	{
		cout << "your numbers is equal" << endl;

	}
	else
	{
		cout << "second number is bigger" << endl;
	}
}
int main()
{
	int num1, num2;
	cout << "enter first num ";
	cin >> num1;
	cout << "enter secoun num ";
	cin >> num2;

	bigger_num(num1, num2);
    system("pause");
    return 0;
}
