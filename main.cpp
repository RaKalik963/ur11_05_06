#include <iostream>
using namespace std;

void check_number(int num) {
    bool is_prime = true;

    if (num <= 1) {
        is_prime = false;
    }
    else {
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                is_prime = false;
                break;
            }
        }
    }

    if (is_prime) {
        cout << number << " is prime numbeê" << endl;
    }
    else {
        cout << number << " is not prime number" << endl;
    }
}

int main() {
    int num;
    cout << "enter num ";
    cin >> num;

    check_number(num);
    system("pause");
    return 0;
}
