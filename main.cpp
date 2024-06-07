#include <iostream>
using namespace std;

void factorial(int num) {
    int result = 1;
    for (int i = 1; i <= num; ++i) {
        result *= i;
    }
    std::cout << result << std::endl;
}

int main() {
    int num;
    cout << "enter a number  ";
    cin >> num;

    factorial(num);

    system("pause");
    return 0;
}
