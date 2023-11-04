// Lab 5_1

#include <iostream>
#include <cmath>

using namespace std;

double g(const double x, const double y, const double z); // прототип

int main()
{
	double x, y;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	double c = (g(x * y, x * x, y * y) - (g(1, x, y) * g(1, x, y))) / (1 + g(sqrt(x),y*y,1));
	cout << "c = " << c << endl;
	return 0;
}

double g(const double a, const double b, const double c) // визначення
{
	return (a * a + b * b - c * c);
}