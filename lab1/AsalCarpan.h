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
	AsalCarpan(Sayi& x) { // constructor
		this->sayi = x;
		carpanlar = NULL;
		carpanSayisi = 0;
	}
	int getSayi() { //private de�i�kenlere eri�mek i�in getter ve setter fonksiyonlar�
		return sayi.getDeger();
	}
	int getCarpanSayisi() { //private de�i�kenlere eri�mek i�in getter ve setter fonksiyonlar�
		return carpanSayisi;
	}

	void carpanSayisiBul() { // carpan adl� de�i�keni 2 den ba�lat�p say�m�za b�l�nd��� ve asal oldu�u s�rece b�l�yoruz b�ylece 
		Sayi carpan(2);      // ka� tane �arpan� oldu�unu tespit ediyoruz
		int bolum = sayi.getDeger();
		while (bolum != 1) {
			int x = carpan.getDeger();
			while ((bolum % x) == 0 && carpan.asalMi()) {
				bolum = bolum / x;
				carpanSayisi++;
			}
			carpan.setDeger(++x);
		}
	}

	void islem() {
		carpanlar = new Sayi * [sizeof(Sayi) * (carpanSayisi)]; // (�arpan say�s� x sayi nesnesinin boyutu) �eklinde asal �arpanlar� dolduracak bir
		Sayi carpan(2);                                        // dizi olu�turuyoruz
		int bolum = sayi.getDeger();
		int i = 0;
		while (bolum != 1) {
			int x = carpan.getDeger();
			while ((bolum % x == 0) && carpan.asalMi()) {
				bolum = bolum / x;
				carpanlar[i++] = new Sayi(x); // carpanSayisiBul() fonksiyonunun ayn�s� ancak burada buldu�umuz asal say� �arpanlar�n�
			}								  // carpanlar adl� dizimize ekliyoruz
			carpan.setDeger(x + 1);
		}
	}

	friend ostream& operator<<(ostream& out, AsalCarpan& ac) { // say�n�n asal say� �arpanlar�n� yazd�rmak i�in << operator overloading
		out << ac.sayi << " sayisinin asal carpanlari: ";
		for (int i = 0; i < ac.carpanSayisi - 1;i++) {
			out << *ac.carpanlar[i] << "*";
		}
		out << *ac.carpanlar[ac.carpanSayisi - 1] << endl;
		return out;
	}

	~AsalCarpan() { // belle�imizi verimli bir �ekilde kullanmak i�in carpanlar dizisini bellekten temizliyoruz
		delete[] carpanlar;
	}
	
};

