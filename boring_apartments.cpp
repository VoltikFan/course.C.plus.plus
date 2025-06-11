#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int d = k % 10; 
    int a = 0, b = k;
    while (b) {
        a++;
        b /= 10;
    }

    int result = (d - 1) * a; 
    int j = 0;
    for (int i = 1; i <= a; i++) {
        j = j * 10 + d;
        if (j <= k) result++;
    }

    cout << result;
    return 0;
}