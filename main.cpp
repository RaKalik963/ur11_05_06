#include <iostream>
using namespace std;

void cube(int num) {
    int result = num * num * num;
    cout << result << endl;
}

int main() 
{
    int num;
    cout << "enter number ";
    cin >> num;

    cube(num);

    system("pause");
    return 0;
}
