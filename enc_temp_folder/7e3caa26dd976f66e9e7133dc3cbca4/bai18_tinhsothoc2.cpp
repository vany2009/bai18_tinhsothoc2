#include<cmath>
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	cout << "tinh so thoc tren ban co vua\n";
	int soO;
	double tongthoc = 0;
	cout << "nhap so o:"; cin >> soO;
	cout.imbue(locale("en_us-UTF-8")); // phan nghin
	if (soO > 64) {
		cout << "tren ban chi co 64o,vui long nhap so<=64\n";
		system("pause");
		return 0;
		do
		{
			cout << "nhap so o:"; cin >> soO;
		} while (soO > 64 || soO < 0);
	}
	for (int i = 0; i < soO; i++)
	{
		cout << "o thu" << i + 1 << "co\t\t" << fixed << setprecision(0) << pow(2, i) << "hat thoc\n";
		tongthoc = tongthoc + pow(2, i);
	}
	cout << "tong so thoc la:\t" << tongthoc << "hat thoc\n";
	return 0;
}