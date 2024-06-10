#include <iostream>
using namespace std;

bool is_perfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

void find_perfect_numbers(int start, int end) {
    bool found = false;
    for (int num = start; num <= end; ++num) {
        if (is_perfect(num)) {
            if (!found) {
                std::cout << "perfect numbers in the entered interval: ";
                found = true;
            }
            cout << num << " ";
        }
    }
    if (!found) {
        cout << "there are no perfect numbers in the entered diapasone";
    }
    cout << endl;
}

int main() {
    int start, end;
    cout << "enter start of diapasone ";
    cin >> start;
    cout << "enter end of diapasone ";
    cin >> end;

    find_perfect_numbers(start, end);

    return 0;
}
