#include <iostream>

using namespace std;

int main()
{
    int n, a, b, mn, mx;
    cin >> n >> a >> b;

    mn = max (a - b, 0);
    mx = min (a, n - b);


    cout << mn << endl;
    cout << mx;

    return 0;
}