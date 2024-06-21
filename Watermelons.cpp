#include <iostream>

using namespace std;

int main()
{
    int n, x, i = 1, mx = 0, mn = 30000;
    cin >> n;

    while (i <= n) {
        cin >> x;
        i  ++;
    }
    while (i <= n) {
        if (x > mx) {
            mx = x;
        }
        if (x < n) {
            mn = x;
        }
    }
    cout << mn <<" "<< mx;
}