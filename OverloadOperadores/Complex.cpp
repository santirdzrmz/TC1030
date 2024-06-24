#include <iostream>

class Complex {
private:
    int real, imag;
public:
    Complex(int _real = 0, int _imag =0) {
        real = _real;
        imag = _imag;
    }
    // This is automatically called when '+' is used with
    // between two Complex objects

    Complex operator + (Complex const &obj) {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    Complex operator - (Complex const &obj) {
        Complex res;
        res.real = real - obj.real;
        res.imag = imag - obj.imag;
        return res;
    }

    Complex operator *(Complex const &obj){
        Complex res;
        int coef;
        int coef2;
        coef = real*obj.real - imag*obj.imag;
        coef2 = real*obj.imag + imag*obj.real;
        res.real = coef;
        res.imag = coef2;
        return res;
    }


    void print() {
        std::cout << real << " + i" << imag << std::endl;
    }
};

int main(){
    Complex c1(3, 4), c2(2, -5), c5;
    Complex c3 = c1 + c2; // An example call to "operator+"
    c3.print();
    std::cout<<"here\n";
    c3 = c1 - c2;
    c3.print();
    
    c5.print();
    
    c5 = c1 * c2;
    c5.print();

}


