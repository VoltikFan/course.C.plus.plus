#include <iostream>

using namespace std;

int main()
{
    int A, B, C, T;
    cin >> A >> B >> C >> T;

    int totalCost;
    if (T <= A) {
        totalCost = T * B;
    } else {
        totalCost = A * B + (T - A) * C;
    }

    cout << totalCost;
}