#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text;
    int j = 0;
    getline(cin, text);


    for (int i = 0; i < text.size(); i++) {
        if (text[i] == '0' || text[i] == '1' || text[i] == '2' || text[i] == '3' || text[i] == '4' || text[i] == '5' || text[i] == '6' || text[i] == '7' || text[i] == '8' || text[i] == '9') {
            j++;
            text.erase(i, 1);
            i--;
        }
    }
    cout << j << endl;
    cout << text << endl;
    

}