#include <bits/stdc++.h>

using namespace std;

int main() 
{
    long long a, b, c;
    cin >> a >> b >> c;

    long long total = a + b + c;

    if (total % 3 != 0) {
        cout << -1;
        return 0;
    }

    long long target = total / 3;

    if (a == target && b == target && c == target) {
        cout << 0;
        return 0;
    }

    long long a1 = max(0ll, a - target);
    long long b1 = max(0ll, b - target);
    long long c1 = max(0ll, c - target);
    long long a2 = max(0ll, target - a);
    long long b2 = max(0ll, target - b);
    long long c2 = max(0ll, target - c);

    long long moves = max(a1, a2) + max(b1, b2) + max(c1, c2);

    cout << moves / 2;

    return 0;
}
