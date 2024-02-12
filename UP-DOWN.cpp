#include <iostream>

using namespace std;

int main()
{
    short a, b, c;
    cin>>a>>b>>c;

    if (c > b && b > a){
        cout<<"Up";
        return 0;
    }
    if (c < b && a > b){
        cout<<"Down";
        return 0;
    }

    cout<<"Not understand";

    return 0;
}
// Дано три числа A, B та C.
// Якщо вони розміщені у порядку зростання, то вивести ― Up.
// Якщо вони розміщені у порядку спадання, то вивести ― Down.
// Інакше вивести Not understand.
// Вхідні дані:
// У першому рядку три числа A, B та C (-1000 ≤ A, B ≤ 1000). Всі дані – цілі числа.

// Вихідні дані:
// Вивести на екран шукану відповідь.