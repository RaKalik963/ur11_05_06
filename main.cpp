#include <iostream>
using namespace std;

void rectangle(int N, int K)
{
    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < K; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

int main() {
    int N, K;
    cout << "Enter height: ";
    cin >> N;
    cout << "Enter width: ";
    cin >> K;

    rectangle(N, K);
    system("pause");
    return 0;
}
