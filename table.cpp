#include <iostream>

using namespace std;

int main() 
{
    int N, M, K;
    cin >> N >> M >> K;

    int strips_per_roll = K / N;

    if (strips_per_roll == 0) {
        cout << -1;
        return 0;
    }

    int rolls_needed = (M + strips_per_roll - 1) / strips_per_roll;
    
    cout << rolls_needed;
    
    return 0;
}
