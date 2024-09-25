#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, y, R, xp, xk, dx;
	cout << "R = "; cin >> R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "----------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "y" << " |" << endl;
	cout << "----------------------" << endl;

	x = xp;
	while (x <= xk) {
		if (x < R)
			y = R + 3;
		else
			if (0 > x && x <= -R)
				y = sqrt(R * R - x * x);

			else
				if (0 <= x && x <= 6)
					y = ((R * x) / 6);

				else
					y = x - 6;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}

	cout << "----------------------" << endl;
	cin.get();
	return 0;
}