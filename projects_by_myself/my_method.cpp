#include <iostream>
using namespace std;

class you_lost {
        public:
        void method() {
            cout << "you lost";
        }
    };

int main() {
    you_lost obj;

    obj.method();
    return 0;
}