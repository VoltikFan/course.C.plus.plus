#include <iostream>

using namespace std;

int main()
{
    int a, c;

    for (int i=100; i<=999; i++)
   {
      a = i / 100;
      c = i % 10;
     if (a==c) cout<<i<<" ";
  }

    return 0;
}