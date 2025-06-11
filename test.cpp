#include <iostream>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    int count = 0;

    for (int d = 1; d <= 9; ++d) {
        long long num = d;
        while (num <= n) {
            count++;
            if (num == k) {
                cout << count;
                return 0;
            }
            num = num * 10 + d;
        }
    }

    return 0;
}
