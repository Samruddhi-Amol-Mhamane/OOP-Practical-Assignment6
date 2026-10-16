
#include <iostream>
using namespace std;

class A {
public:
    void displayA() {
        cout << "This is Base Class A" << endl;
    }
};

class B : public A {
public:
    void displayB() {
        cout << "This is Derived Class B" << endl;
    }
};

int main() {
    B obj;

    obj.displayA();
    obj.displayB();

    return 0;
}
