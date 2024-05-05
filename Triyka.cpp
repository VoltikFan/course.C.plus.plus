#include <iostream>

using namespace std;

int main()
{
    int x, y, z, m;
    cin >> x >> y >> z >> m;
    cout << min((15 - m % 15) % 15 + x, min((10 - m % 10) % 10 + y, (5 - m % 5) % 5 + z));

    return 0;
} 