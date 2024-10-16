#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double z(const double x);
int main()
{
	double pp, pk, y;
	int n;
	cout << "pp = "; cin >> pp;
	cout << "pk = "; cin >> pk;
	cout << "n = "; cin >> n;
	double dp = (pk - pp) / n;
	double p = pp;
	cout << fixed;
	cout << "----------------------" << endl;
	cout << "|" << setw(7) << "p" << " |"
		<< setw(10) << "y" << " |"
		<< endl;
	cout << "----------------------" << endl;
	while (p <= pk)
	{
		y = z(p * p + 1) - z(p * p - 1) + (2 * z(p));
		cout << "|" << setw(7) << setprecision(2) << p << " |"
			<< setw(10) << setprecision(5) << y << " |"
			<< endl;
		p += dp;
	}
	cout << "----------------------" << endl;
	return 0;
}
double z(const double x)
{
	if (abs(x) >= 1)
		return (sin(x +1) / pow(cos(x + exp(x)), 2));
	else
	{
		double S = 0;
		int k = 0;
		double a = 1;
		S = a;
		do
		{
			k++;
			double R = (2 * x) / k;
			a *= R;
			S += a;
		} while (k < 6);
		return (1 / exp(pow(x, 2))) * S;
	}
}