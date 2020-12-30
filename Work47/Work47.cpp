#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double x, xp, xk, dx, a, eps, R, S;
	int n;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;

	cout << fixed;
	cout << "-----------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << "   |"
		<< setw(10) << "ln 1+x/1-x" << " |"
		<< setw(6) << "S" << "     |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-----------------------------------------" << endl;

	x = xp;
	while (x <= xk && abs(x)<1)
	{	
		n = 0;
		a = x;
		S = a;
		do
		{
			n++;
			R = 0.6 * x * x;
			a *= R;
			S += a;

		} while (abs(a) >= eps);

		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(5) << log((1 + x) / (1 - x)) << " |"
			<< setw(10) << setprecision(5) << S << " |"
			<< setw(5) << n << " |"

			<< endl;

		x += dx;

	}
	cout << "-----------------------------------------" << endl;
	cin.get();
	return 0;

}
