#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> array;
    int ant = 0;
    for (int i = 0; i != array.size(); i++) {
      int a;
      cin >> a;
    }

    for (int i = 0; i != array.size(); i++) {
      if (array[i] > array[i + 1]) {
        ant += array[i] - array[i + 1];
      }
      if (array[i] < array[i + 1] ){
        ant += array[i + 1] - array[i];
      }
    }
    cout << ant;
    return 0;
}