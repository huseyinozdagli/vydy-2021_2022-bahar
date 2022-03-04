#pragma once
#include <iostream>
using namespace std;
class Sayi
{
private:
	int deger;
public:
	void setDeger(int x) { //private deðiþkenlere eriþmek için getter ve setter fonksiyonlarý
		deger = x;
	}
	int getDeger() { //private deðiþkenlere eriþmek için getter ve setter fonksiyonlarý
		return deger;
	}
	Sayi() {
	}
	Sayi(int x) { // negatif sayý girilmemesi için constructurda düzenleme, negatif sayý gelirse sayýnýn deðeri otomatik olarak 1 oluyor
		if (x < 0) {
			deger = 1;
		}
		else {
			deger = x;
		}
	}

	friend ostream& operator<<(ostream& out, Sayi& x) { // sayýnýn deðerini yazdýr fonksiyonu kullanmadan yazdýrmak için << operator overloading
		return out << x.deger;
	}

	bool asalMi() { 
		bool asalmi = true; // sayýya asaldýr diyoruz
		if (deger == 0 || deger == 1) { //0 ve 1 asal sayý olamayacaðý için asal deðildir
			asalmi = false;
		}
		for (int i = 2; i < deger;i++) { // i'yi 2 den baþlatarak sayýnýn kendisine kadar kalansýz bölmeyi bulmayý çalýþýyoruz,
			if (deger % i == 0) { // eðer kalansýz bölünüyorsa sayý asal deðildir diyerek fonksiyonu bitiriyoruz
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

