#ifndef COMPLEX_HPP
# define COMPLEX_HPP
#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    // Constructors
	Complex() {}
    Complex(double r, double i) : real(r), imag(i) {}

    // Getter functions
    double getReal() const { return real; }
    double getImag() const { return imag; }

    // Comparison operators
    bool operator<(const Complex& other) const {
        // Compare based on magnitude
        return (real * real + imag * imag) < (other.real * other.real + other.imag * other.imag);
    }

    bool operator<=(const Complex& other) const {
        return !(*this > other);
    }

    bool operator>(const Complex& other) const {
        return (real * real + imag * imag) > (other.real * other.real + other.imag * other.imag);
    }

    bool operator>=(const Complex& other) const {
        return !(*this < other);
    }

    bool operator==(const Complex& other) const {
        return (real == other.real) && (imag == other.imag);
    }

    bool operator!=(const Complex& other) const {
        return !(*this == other);
    }
};

// Overload << operator for easy printing
std::ostream& operator<<(std::ostream& os, const Complex& c) {
    os << c.getReal() << " + " << c.getImag() << "i";
    return os;
}

#endif