#pragma once
#include "Sayi.h"
class AsalCarpan
{
private:
	Sayi sayi;
	Sayi** carpanlar;
	int carpanSayisi;
public:

	AsalCarpan() {
		carpanlar = NULL;
		carpanSayisi = 0;
	}
	AsalCarpan(Sayi& x) {
		this->sayi = x;
		carpanlar = NULL;
		carpanSayisi = 0;
	}
	int getSayi() {
		return sayi.getDeger();
	}
	int getCarpanSayisi() {
		return carpanSayisi;
	}

	void carpanSayisiBul() {
		int carpan = 2;
		int bolum = sayi.getDeger();
		while (bolum != 1) {
			
		}

	}
	
};

