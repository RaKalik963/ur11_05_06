#include <iostream>
using namespace std;

void cube_num(int num) {
    cout << "cube of " << num << " = " << num * num * num << endl;
}

int main() 
{
    int num;
    cout << "enter num ";
    cin >> num;

    cube_num(num);
    system("pause");
    return 0;
}
