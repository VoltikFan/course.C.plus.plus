#include <iostream>

using namespace std;

int main() 
{
    int n;
    cin >> n;

    long long even_segments = 0;
    long long total_segments = 0;
    int last_even_index = -1;

    for (int i = 0; i < n; i++) {
        int j;
        cin >> j;
        total_segments += (i + 1);
        if (j % 2 == 0) {
            last_even_index = i;
        }
        if (last_even_index != -1) {
            even_segments += (last_even_index + 1);
        }
    }

    cout << even_segments << endl;

    return 0;
}