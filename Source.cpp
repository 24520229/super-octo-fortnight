//Bài 1: Tính S(n) = 1 + 2 + 3 + … + n
#include <iostream>
using namespace std;
long Tong(int);

int main()
{ 
	int n;
	cout << "Nhap n: ";
	cin >> n;
	long kq = Tong(n);
	cout << "Tong la " << kq;
	return 0;
}

long Tong(int n)
{
	long s = 0;
	for (int i = 1; i <= n; i++)
		s = s + i;
	return s;
}