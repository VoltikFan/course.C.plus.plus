#include <iostream>

using namespace std;

int main()
{
    long long number;
    cin >> number;

    if (number % 10 != 0 && number % 5 == 0) {
        cout << number * number;
        return 0;
    } else {
        return 0;
    }
}