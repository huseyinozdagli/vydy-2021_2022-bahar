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
		Sayi carpan(2);
		int bolum = sayi.getDeger();
		while (bolum != 1) {
			while (bolum % carpan.getDeger() == 0 && carpan.asalMi()) {
				bolum = bolum / carpan.getDeger();
				carpanSayisi++;
			}
			carpan.setDeger(carpan.getDeger() + 1);
		}
	}

	void islem() {
		carpanlar = new Sayi * [sizeof(Sayi) * (carpanSayisi)];
		Sayi carpan(2);
		int bolum = sayi.getDeger();
		int i = 0;
		while (bolum != 1) {
			while (bolum % carpan.getDeger() == 0 && carpan.asalMi()) {
				bolum = bolum / carpan.getDeger();
				carpanlar[i++] = new Sayi(carpan.getDeger());
			}
			carpan.setDeger(carpan.getDeger() + 1);
		}
	}

	friend ostream& operator<<(ostream& out, AsalCarpan& ac) {
		out << ac.sayi << " sayisinin asal carpanlari: ";
		for (int i = 0; i < ac.carpanSayisi - 1;i++) {
			out << *ac.carpanlar[i] << "*";
		}
		out << *ac.carpanlar[ac.carpanSayisi - 1] << endl;
		return out;
	}

	~AsalCarpan() {
		delete[] carpanlar;
	}
	
};

