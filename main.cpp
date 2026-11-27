
#include <iostream>
#include <string>

using namespace std;

class Fraction {
public:
    Fraction(int numerator, int denominator);
    string toString();
    double toDouble();

private:
    int numerator;
    int denominator;
};

// Costruttore
Fraction::Fraction(int numerator, int denominator) {
    this->numerator = numerator;
    this->denominator = denominator;
}

// Converte in stringa
string Fraction::toString() {
    int resto = numerator % denominator;
    int altro = numerator / denominator;

    return to_string(altro) + " " + to_string(resto) + "/" + to_string(denominator);
}

double Fraction::toDouble() {
    return (double)numerator / denominator;
}

int main() {
    int num, den;

    cin >> num >> den;

    Fraction fraction(num, den);

    cout << fraction.toString() << " is " << fraction.toDouble() << " in decimal" << endl;

    return 0;
}
