#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    long long n;
    cin >> a >> b >> n;
    int left = 0, right = n + 1;
    int middle, pills;

    while (right - left > 1) {
        middle = (left + right) / 2;
        pills = middle * b + 1 + (middle - 1) / a;

        if (pills > n) {
            right = middle;
        } else {
            left = middle;
        }
    }
    
    cout << left;

    return 0;
}