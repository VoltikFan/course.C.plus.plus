#include <iostream>

using namespace std;

int main()
{
    int i = 1000;

    while (i <= 9999)
    {
        int a = i / 1000;
        int d = i % 10;
        int b = i % 1000 / 100;
        int c = i % 1000 % 100 / 10;
        if (a == d && b == c){
            cout << i << " "
        }
        i ++;
    }
    return 0;
}