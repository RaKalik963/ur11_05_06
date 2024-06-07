#include <iostream>
using namespace std;

void sumInRange(int num1, int num2) {
    int sum = 0;
    for (int i = num1; i <= num2; ++i) {
        sum += i;
    }
    cout << sum << endl;
}

int main() {

    sumInRange(num1, num2);
    system("pause");
    return 0;
}
