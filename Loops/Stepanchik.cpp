#include <iostream>

using namespace std;

int main()
{
    long long a, b, nsd, nsk, dob;
    cin >> a >> b;

    dob = a * b;

   while (a!=b)
    if (a>b) a=a-b;
         else b=b-a;

    nsd = a;
    nsk = dob / nsd;
    cout << nsk;

    return 0;
}