#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int numbers = a;

    while (numbers <= b) {
        if (numbers % 11 == 0) {
            cout << numbers << " ";
        }
        numbers ++;
    }
    return 0;
    
}