#include <iostream>

using namespace std;

int main()
{
    int a, b, n, c, antwort;
    cin >> a >> b >> c;

    antwort = (c - (a + b)) / b + 1;

    cout << antwort;
}