#include <iostream>
using namespace std;

int main() {
    class my_class {
        public: 
        int num;
        string str;
    };
    my_class obj;

    obj.num = 15;
    obj.str = "Some text";

    cout << obj.str << "\n" << obj.num;
    return 0;
}