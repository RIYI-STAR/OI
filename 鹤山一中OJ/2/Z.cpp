#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int a, b;
	vector<int> dt_x = {-1,1,2,2,1,-1,-2,-2};
	vector<int> dt_y = {-2,-2,-1,1,2,2,1,-1};
	while (cin >> a >> b)
	{
		vector<int> x(8);
		vector<int> y(8);
		for(int i = 0;i<8;i++)
		{
			x[i] = a + dt_x[i];
			y[i] = b + dt_y[i];
		}
		for (int i = 0; i < 8; i++)
		{
			if (x[i] >= 0 && x[i] <= 7 && y[i] >= 0 && y[i] <= 7)
				cout << "(" << x[i] << ',' << y[i] << ")";
			else cout << "No";
			if (i < 7) cout << "|";
		}
		cout << endl;
	}
	return 0;
}