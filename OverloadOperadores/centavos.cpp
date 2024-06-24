#include <iostream>
using namespace std;
class Cents {
private:
	int m_cents;

public:
	Cents(int cents) {
		m_cents = cents;
	}

	// Overload Cents + int
	Cents operator+(int value);
	Cents operator*(double value);
	Cents operator/(int cantidad);
	Cents operator+(Cents c1);
	int getCents() const {
		return m_cents;
	}
	// Overload << con función amiga
	friend ostream &operator<<(ostream &out, const Cents &c);
};

ostream &operator<<(ostream &out, const Cents &c) {
	out << "Cents(" << c.m_cents << ")" << endl;
	return out;
}
// note: this function is a member function!
// the cents parameter in the friend version is now the implicit *this parameter
Cents Cents::operator+(int value) {
	return Cents(m_cents + value);
}

Cents Cents::operator*(double value) {
	return Cents(m_cents * value);
}

Cents Cents::operator/(int cantidad) {
	if (cantidad != 0)
		return Cents(m_cents / cantidad);
	else
		return Cents(-1);
}

Cents Cents::operator+(Cents c1) {
	return Cents(m_cents + c1.getCents());
}
int main() {
	Cents cents1(6);

	// usando el operador + sobrecargado con 1 obj Cents() + int
	Cents cents2 = cents1 + 2;
	Cents cents3{5};
	std::cout << "I have " << cents2.getCents() << " cents.\n";

	// usando el operador * sobrecargado con 1 obj Cents() * double
	cents2 = cents1 * 2.566666666;
	std::cout << "I have " << cents2.getCents() << " cents.\n";

	// usando el operador + sobrecargado con 2 obj Cents()
	cents3 = cents1 + cents2;

	cout << cents3.getCents() << endl;

	// usando el operador << sobrecargado con fx amiga
	cout << cents3 << endl;

    return 0;
}