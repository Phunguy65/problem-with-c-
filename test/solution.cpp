#include <iostream>
using namespace std;
bool somayman(int tmp)
{
	int sum = 0;
	while (tmp)
	{
		sum += tmp % 10;
		tmp /= 10;
	}
	if (sum % 10 == 4 || sum % 10 == 7) {
		return true;
	}
	return false;
}
int main()
{
	int n, x, kq = INT_MIN, dem = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		if (somayman(x))
		{
			kq = max(kq, x);
			dem++;
		}
	}
	if (dem > 0)
		cout << dem << " " << kq;
	else
		cout << "No";
}