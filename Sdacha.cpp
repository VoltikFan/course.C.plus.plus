#include <iostream>

using namespace std;

int main() 
{
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    int totalPaid = C * 100 + D;

    int totalCost = A * 100 + B;

    int change = totalPaid - totalCost;

    int changeGrivnas = change / 100;
    int changeKopeks = change % 100;
    
    cout << changeGrivnas << " " << changeKopeks;
    
    return 0;
}