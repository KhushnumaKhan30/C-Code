
#include <iostream>
using namespace std;

struct Complex
{
    float real;
    float imag;
};

// Function to read a complex number
void readComplex(Complex &c)
{
    cout << "Enter real part: ";
    cin >> c.real;
    cout << "Enter imaginary part: ";
    cin >> c.imag;
}

// Function to display a complex number
void writeComplex(Complex c)
{
    cout << c.real;
    if (c.imag >= 0)
        cout << " + " << c.imag << "i";
    else
        cout << " - " << -c.imag << "i";
    cout << endl;
}

// Function to add two complex numbers
Complex add(Complex a, Complex b)
{
    Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

// Function to subtract two complex numbers
Complex subtract(Complex a, Complex b)
{
    Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

// Function to multiply two complex numbers
Complex multiply(Complex a, Complex b)
{
    Complex result;
    result.real = a.real * b.real - a.imag * b.imag;
    result.imag = a.real * b.imag + a.imag * b.real;
    return result;
}

int main()
{
    Complex c1, c2, sum, diff, product;

    cout << "Enter first complex number:"<<endl;
    readComplex(c1);

    cout << "Enter second complex number:"<<endl;
    readComplex(c2);

    cout << "First complex number: "<<endl;
    writeComplex(c1);

    cout << "Second complex number: ";
    writeComplex(c2);

    sum = add(c1, c2);
    diff = subtract(c1, c2);
    product = multiply(c1, c2);

    cout << "Addition: "<<endl;
    writeComplex(sum);

    cout << "Subtraction: "<<endl;
    writeComplex(diff);

    cout << "Multiplication: "<<endl;
    writeComplex(product);

    return 0;
}

