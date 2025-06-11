#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int d = k % 10; 
    int len = 0;
    int temp = k;

    while (temp > 0) {
        len++;
        temp /= 10;
    }

    int result = (d - 1) * 10 + len;

    cout << result;
    return 0;
}
