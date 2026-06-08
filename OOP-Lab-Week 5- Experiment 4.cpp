#include <iostream>
using namespace std;

class ComplexNumber
{
private:
    double realPart;
    double imaginaryPart;

public:
    ComplexNumber()
    {
        realPart = 0;
        imaginaryPart = 0;
    }

    ComplexNumber(double r, double i)
    {
        realPart = r;
        imaginaryPart = i;
    }

    ComplexNumber add(const ComplexNumber &obj)
    {
        return ComplexNumber(realPart + obj.realPart,imaginaryPart + obj.imaginaryPart);
    }

    ComplexNumber sub(const ComplexNumber &obj)
    {
        return ComplexNumber(realPart - obj.realPart,imaginaryPart - obj.imaginaryPart);
    }

    ComplexNumber mul(const ComplexNumber &obj)
    {
        double real = (realPart * obj.realPart) - (imaginaryPart * obj.imaginaryPart);

        double imag = (realPart * obj.imaginaryPart) + (imaginaryPart * obj.realPart);

        return ComplexNumber(real, imag);
    }

    void print() const
    {
        cout << realPart;

        if (imaginaryPart >= 0)
            cout << " + " << imaginaryPart << "i";
        else
            cout << " - " << -imaginaryPart << "i";

        cout << endl;
    }
};

int main()
{
    double r1, i1, r2, i2;

    cout << "Enter real and imaginary part of first complex number: ";
    cin >> r1 >> i1;

    cout << "Enter real and imaginary part of second complex number: ";
    cin >> r2 >> i2;

    ComplexNumber c1(r1, i1);
    ComplexNumber c2(r2, i2);

    ComplexNumber sum = c1.add(c2);
    ComplexNumber diff = c1.sub(c2);
    ComplexNumber product = c1.mul(c2);

    cout << "\nFirst Complex Number: ";
    c1.print();

    cout << "Second Complex Number: ";
    c2.print();

    cout << "Addition: ";
    sum.print();

    cout << "Subtraction: ";
    diff.print();

    cout << "Multiplication: ";
    product.print();

    return 0;
}