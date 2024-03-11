#include <iostream>

using namespace std;

int main()
{
    int n, antwort;
    cin >> n;

    antwort = n / 3;

    if (n % 3 == 0) {
        cout << antwort * 2;
    }
    else {
        cout << antwort * 2 + 1;
    }

    return 0;
}