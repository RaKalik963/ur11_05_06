#include <iostream>
using namespace std;

void num_checking(int num)
{
	if (num > 0)
	{
		cout << "your num is positive" << endl;

	}
	else if (num == 0)
	{
		cout << "your num is not positive and negative" << endl;
	}
	else
	{
		cout << "your num is negative" << endl;
	}
}
int main()
{
	int num;
	cout << "enter number ";
	cin >> num;

	num_checking(num);
    system("pause");
    return 0;
}
