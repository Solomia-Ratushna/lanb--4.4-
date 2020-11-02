#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double R,  xp, xk, dx, F, x,y;
	cout << "R = "; cin >> R;
	
	cout << "dx = "; cin >> dx;
	cout << "xp ="; cin >> xp;
	cout << "xk= "; cin >> xk;
	
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "F" << " |" << endl;
	cout << "---------------------------" << endl;

	for (x = xp; x <= xk; x += dx)
	{
		if (x <= -8)
			y = -R;
		else
			if (-8 < x && x <= -R)
				y = (R * R + x * R) / -R + 8;
			else
				if (-R < x && x <= 0)
					y = sqrt(R * R - x * x);
				else
					if (0 < x && x <= R)
						y = sqrt(R * R - x * x);
					else
						if (R < x && x < 5)
							y = (2 * x - 2 * R) / 5 - R;
						else

							y = 3;




		cout << "|" << setw(7) << setprecision(2) << x
			<< "|" << setw(10) << setprecision(3) << y
			<< " |" << endl;

	}
	cout << "---------------------------" << endl;
	return 0;
}