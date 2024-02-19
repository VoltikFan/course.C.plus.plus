#include <iostream>

using namespace std;

int main()
{
    long long a, b, w, l, y;
    cin>>a>>b>>w>>l>>y;

    y = w / 2 + max(a , b) / 2 - l;
    if (l > (w / 2 + max(a, b) / 2)) {
        y = l - (w / 2 + max(a, b) / 2);
    }
    if (y % 1 != 0) {
        y = y + 1;
    }

    cout << y;
}