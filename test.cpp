#include <iostream>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    long long time = 0;
    long long pos = n; 

    while (pos > 1) {
        time++; 
        pos--;  

        if (time % m == 0) { 
            pos = (pos + 1) / 2;
        }
    }

    cout << time;
    return 0;
}