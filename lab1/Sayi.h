#pragma once
#include <iostream>
class Sayi
{
	int deger;
public:
	Sayi(void) {
		deger = 1;
	}
	Sayi(int x) {
		deger = x;
	}
	Sayi operator << (Sayi const& x) {
		return x;
	}
};

