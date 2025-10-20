#include <iostream>
#include <cmath>

using namespace std;

double g(double a, double b) {
	return sin(a * b) / (a * a + b * b);
}

int main() {
	double s, t;
	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;

	double numerator = g(pow(s, 2), t + 1) + g(pow(t, 2), s + 1);
	double denominator = 1 + pow(g(s + t, s * t), 2);
	double result = numerator / denominator;

	cout << "result = " << result << endl;
	return 0;
}