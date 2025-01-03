#include <iostream>

using namespace std;

int main()
{
    int n, m, ant;
    cin >> n >> m;
    
    if (n == 1 && m <= 2) {
        cout << 8 * n * m;
        return 0;
    }
    if (n <= 2 && m == 1) {
        cout << 8 * n * m;
        return 0;
    }

    if (n == 1 && m > 2) {
        cout << 8 * n * m + ((m - 1) * 2);
        return 0;
    }
    if (n > 2 && m == 1) {
        cout << 8 * n * m + ((n - 1) * 2);
        return 0;
    }

    if (n >= 2 && m >= 2) {
        // int mx = max(n, m);
        if (n == 2 && m == 2) {
            cout << 44;
            return 0;
        }
        int for_4 = (n * m) / 4;
        
        cout << (8 * n * m + ((m - 1) * 2) * n + ((n - 1) * 2) * m) + for_4 * 4 << endl;
        // cout << for_4 * 4 << endl;
        // cout << (8 * n * m + ((m - 1) * 2) * n + ((n - 1) * 2) * m);
    }

    // cout << ant;
}