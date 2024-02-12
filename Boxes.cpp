#include <iostream>

using namespace std;

int main()
{
    int mandarines, vmboxes, antwort;
    cin>>mandarines>>vmboxes;

    if (vmboxes % 13 == 0){
        vmboxes = vmboxes - 1;
    }
    if (vmboxes == 0){
        cout<<"-1";
        return 0;
    }

    antwort = mandarines / vmboxes;

    if (mandarines % vmboxes != 0){
        antwort = antwort + 1;
    }

    if (antwort % 13 == 0){
        antwort = antwort + 1;
    }

    cout<<antwort;
}