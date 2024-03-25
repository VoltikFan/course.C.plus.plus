#include <iostream>

using namespace std;

int main()
{
    int m;
    cin >> m;
    long long spinner_3 = 0;

    while (m % 4 != 0 && m >= 3) {
        m -= 3;
        spinner_3 ++;
    }
    long long spinner_4 = m / 4;

    if (m % 4 == 0) {
        cout << spinner_3 << " " << spinner_4 << endl;
    } else {
        cout << "0 0" << endl;
    }

    return 0;
}