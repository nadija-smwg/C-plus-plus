#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;

    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    Complex operator + (Complex c) {      // returntype operator symbol (argument)
        return Complex(real + c.real, imag + c.imag);
    }

    void show() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(2, 3);
    Complex c2(4, 5);

    Complex c3 = c1 + c2;   // operator overloading

    c3.show();
    return 0;
}
