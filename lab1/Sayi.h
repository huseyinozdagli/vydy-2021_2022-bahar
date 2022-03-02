#pragma once
#include <iostream>
using namespace std;
class Sayi
{
private:
	int deger;
public:
	void setDeger(int x) {
		deger = x;
	}
	int getDeger() {
		return deger;
	}
	Sayi() {
	}
	Sayi(int x) {
		if (x < 0) {
			deger = 1;
		}
		else {
			deger = x;
		}
	}

	friend ostream& operator<<(ostream& out, Sayi& x) {
		return out << x.deger;
	}

	bool asalMi() {
		bool asalmi = true;
		if (deger == 0 || deger == 1) {
			asalmi = false;
		}
		for (int i = 2; i <= deger;i++) {
			if (deger % i == 0) {
				asalmi = false;
				break;
			}
		}
		if (asalmi)
			return true;
		else
			return false;
	}
};

