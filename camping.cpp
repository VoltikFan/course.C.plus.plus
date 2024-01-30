#include <iostream>

using namespace std;

int main()
{
    int k, w, a1, a2, a3, b1, b2, b3;
    cin>>k>>w>>a1>>b1>>a2>>b2>>a3>>b3;

    if ((b1 + b2 <= w || b1 + b3 <= w || b2 + b3 <= w || b1 + b2 + b3 <= w) 
    && (a1 + a2 <= k || a1 + a3 <= k || a2 + a3 <= k || a1 + a2 + a3 <= k)){
        cout<<"YES";
    }  
    else{
        cout<<"NO";
    }
}
