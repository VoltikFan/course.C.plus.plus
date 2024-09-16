#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int nsd = gcd(a, b);
    int nsk = lcm(a, b);

    cout << nsd << " " << nsk;
}