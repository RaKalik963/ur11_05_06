#include <iostream>
using namespace std;

void sum_in_range(int num1, int num2) {
    int sum = 0;
    for (int i = num1; i <= num2; ++i) {
        sum += i;
    }
    cout << sum << endl;
}

int main() {
    int num1, num2;
    cout << "enter first num ";
    cin >> num1;
    cout << "enter secoun num ";
    cin >> num2;
    sumInRange(num1, num2);
    system("pause");
    return 0;
}
