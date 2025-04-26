#include <iostream>
using namespace std;

class abstraction {
private:
    int a, b,c;

public:
    // method to set values of private members
    void set(int x, int y,int z) {
        a = x;
        b = y;
        c = z;
    }

    void display() {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        cout << "c = " << c << endl;

    }
};

int main() {
    abstraction obj;
    obj.set(10, 20,30);
    obj.display();
    return 0;
}