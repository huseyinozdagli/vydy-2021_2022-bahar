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
	int getSayi() { //private deðiþkenlere eriþmek için getter ve setter fonksiyonlarý
		return sayi.getDeger();
	}
	int getCarpanSayisi() { //private deðiþkenlere eriþmek için getter ve setter fonksiyonlarý
		return carpanSayisi;
	}

	void carpanSayisiBul() { // carpan adlý deðiþkeni 2 den baþlatýp sayýmýza bölündüðü ve asal olduðu sürece bölüyoruz böylece 
		Sayi carpan(2);      // kaç tane çarpaný olduðunu tespit ediyoruz
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
		carpanlar = new Sayi * [sizeof(Sayi) * (carpanSayisi)]; // (çarpan sayýsý x sayi nesnesinin boyutu) þeklinde asal çarpanlarý dolduracak bir
		Sayi carpan(2);                                        // dizi oluþturuyoruz
		int bolum = sayi.getDeger();
		int i = 0;
		while (bolum != 1) {
			int x = carpan.getDeger();
			while ((bolum % x == 0) && carpan.asalMi()) {
				bolum = bolum / x;
				carpanlar[i++] = new Sayi(x); // carpanSayisiBul() fonksiyonunun aynýsý ancak burada bulduðumuz asal sayý çarpanlarýný
			}								  // carpanlar adlý dizimize ekliyoruz
			carpan.setDeger(x + 1);
		}
	}

	friend ostream& operator<<(ostream& out, AsalCarpan& ac) { // sayýnýn asal sayý çarpanlarýný yazdýrmak için << operator overloading
		out << ac.sayi << " sayisinin asal carpanlari: ";
		for (int i = 0; i < ac.carpanSayisi - 1;i++) {
			out << *ac.carpanlar[i] << "*";
		}
		out << *ac.carpanlar[ac.carpanSayisi - 1] << endl;
		return out;
	}

	~AsalCarpan() { // belleðimizi verimli bir þekilde kullanmak için carpanlar dizisini bellekten temizliyoruz
		delete[] carpanlar;
	}
	
};

