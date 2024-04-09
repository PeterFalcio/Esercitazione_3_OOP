#include <iostream>

class ComplexNumber {
private:
    double real;
    double imag;

public:
    // Constructor
    ComplexNumber(double r = 0, double i = 0) : real(r), imag(i) {}

    // Function to print complex number
    void display() {
        std::cout << real;
        if (imag >= 0)
            std::cout << "+";
        std::cout << imag << "i";
    }

    // Overloaded addition operator
    ComplexNumber operator+(const ComplexNumber& other) {
        ComplexNumber result;
        result.real = real + other.real;
        result.imag = imag + other.imag;
        return result;
    }

    // Overloaded equality operator
    bool operator==(const ComplexNumber& other) {
        return (real == other.real) && (imag == other.imag);
    }

    // Function to compute conjugate
    ComplexNumber conjugate() {
        return ComplexNumber(real, -imag);
    }
};

int main() {
    ComplexNumber a(1, 2);
    ComplexNumber b(1, -2);
    ComplexNumber c(2, 0);

    // Display complex numbers
    std::cout << "a: ";
    a.display();
    std::cout << std::endl;

    std::cout << "b: ";
    b.display();
    std::cout << std::endl;

    std::cout << "c: ";
    c.display();
    std::cout << std::endl;

    // Test addition
    ComplexNumber sum = a + b;
    std::cout << "Sum: ";
    sum.display();
    std::cout << std::endl;

    // Test equality
    std::cout << "a == b? " << std::boolalpha << (a == b) << std::endl;

    // Test conjugate
    ComplexNumber conjugate_a = a.conjugate();
    std::cout << "Conjugate of a: ";
    conjugate_a.display();
    ComplexNumber conjugate_c = c.conjugate();
    std::cout << "Conjugate of c: ";
    conjugate_c.display();
    std::cout << std::endl;



    return 0;
}
