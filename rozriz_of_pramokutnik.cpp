#include <bits/stdc++.h>

using namespace std;

int main() 
{
    long long n;
    cin >> n;

    long long ant = 0;

    for (long long a = 1; a <= n; a++) {
        for (long long b = a; b <= n; b++) {
            if (a * b % 2 == 0 && a != b) {
                ant++;
            }
        }
    }

    cout << ant;

    return 0;
}