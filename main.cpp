#include <iostream>
using namespace std;

void power(int num1, int num2) {
    int result = 1;
    for (int i = 0; i < num2; ++i) {
        result *= num1;
    }
    cout << result << endl;
}

int main() {
    int num1, num2;
    cout << "enter the base of the degree ";
    cin >> num1;
    cout << "enter degree ";
    cin >> num2;

    power(num1, num2);
    system("pause");
    return 0;
}
