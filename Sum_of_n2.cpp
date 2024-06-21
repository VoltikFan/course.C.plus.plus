#include <iostream>

using namespace std;

int main() {
    long long N;
    cin >> N;  

    long long next_even = N + (N % 2 == 0 ? 2 : 1);

    cout << next_even;

    return 0;
}