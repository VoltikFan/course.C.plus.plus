#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int b = 0;

    for (int i = 2; i < n; i ++) {
        if (n % i == 0) {
            b ++;
        }
    }

    if (b == 0) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}