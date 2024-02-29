#include <iostream>

using namespace std;

int main()
{
    long long c, h, o;
    cin>>c>>h>>o;

    cout << min(c / 2, min(h / 6, o));
}