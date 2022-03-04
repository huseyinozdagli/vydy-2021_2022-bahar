#pragma once
#include <iostream>
using namespace std;
class Sayi
{
private:
	int deger;
public:
	void setDeger(int x) { //private de�i�kenlere eri�mek i�in getter ve setter fonksiyonlar�
		deger = x;
	}
	int getDeger() { //private de�i�kenlere eri�mek i�in getter ve setter fonksiyonlar�
		return deger;
	}
	Sayi() {
	}
	Sayi(int x) { // negatif say� girilmemesi i�in constructurda d�zenleme, negatif say� gelirse say�n�n de�eri otomatik olarak 1 oluyor
		if (x < 0) {
			deger = 1;
		}
		else {
			deger = x;
		}
	}

	friend ostream& operator<<(ostream& out, Sayi& x) { // say�n�n de�erini yazd�r fonksiyonu kullanmadan yazd�rmak i�in << operator overloading
		return out << x.deger;
	}

	bool asalMi() { 
		bool asalmi = true; // say�ya asald�r diyoruz
		if (deger == 0 || deger == 1) { //0 ve 1 asal say� olamayaca�� i�in asal de�ildir
			asalmi = false;
		}
		for (int i = 2; i < deger;i++) { // i'yi 2 den ba�latarak say�n�n kendisine kadar kalans�z b�lmeyi bulmay� �al���yoruz,
			if (deger % i == 0) { // e�er kalans�z b�l�n�yorsa say� asal de�ildir diyerek fonksiyonu bitiriyoruz
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

