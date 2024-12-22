#include <iostream>

using namespace std;

int main()
{
    int number;
    cin >> number;

    int ant = number;

    for (int i = 2; number < 10; i ++) {
        ant = number / i;
        if (number >= 1) {
            ant ++;
        }
    }
    cout << ant;
    return 0;
}
