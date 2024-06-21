#include <iostream>

using namespace std;

int main() 
{
    int N, sum;
    cin >> N; 

    sum += N / 1000;      
    sum += (N / 100) % 10;  
    sum += (N / 10) % 10;   
    sum += N % 10;         


    cout << sum;

    return 0;
}