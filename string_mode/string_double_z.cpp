#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text;
    getline(cin, text);

    for (int i = 0; i < text.size(); i++) {
        cout << text[i];
        if (text[i] == 'z') {
            cout << "z";
        }
    }
}