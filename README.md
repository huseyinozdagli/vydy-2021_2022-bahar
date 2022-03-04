# 02.03.2022
Bu labda bir sayının asal çarpanlarının belirlenmesi işlemini gerçekleştirmeye yardımcı bir
AsalCarpan sınıfı geliştirilecektir. AsalCarpan sınıfı için tanımlı sayi değişkeni Sayi sınıfı
tipinde bir değişken olup sadece 0’dan büyük pozitif değerler almaktadır. Örneğin sadece asal
sayılar olduğu belirlenecek bir dizi n, m ve p sayıları için sayi = n * n * n * m * m * p
benzeri bir çıktı verilecektir. Çıktılar Sayi ve AsalCarpan sınıfları için << operatörünün aşırı
yüklenmesi ile oluşturulacaktır. Buna göre aşağıdaki adımları kodlayınız:
1) int tipinde deger değişkeni içeren bir Sayi sınıfı oluşturunuz.
2) Sayi sınıfı için bir varsayılan yapıcı (default constructor) ve deger değişkenini pozitif
olmadığı takdirde 1 ile ilklendiren diğer bir yapıcı oluşturunuz.
3) Sayi sınıfı için deger değişkenini güncellemeye ve okumaya yarayan yazıcı (set) ve
okuyucu (get) fonksiyonları kodlayınız. Yazıcı fonksiyonunda deger değişkeninin
pozitif olma kısıtını tatmin ediniz.
4) Sayi sınıfı için mevcut deger’inin bir asal sayı olup olmadığını belirleyen bir bool
asalMi() fonksiyonu yazınız.
5) Sayi sınıfı için << operatörünü aşırı yükleyerek referans alınan bir Sayi değişkeninin
deger’ini ostream tamponuna bastıracak bir friend fonksiyon yazınız.
6) Sayi tipinde sayi, Sayi ** tipinde çarpanlar ve int tipinde carpanSayisi
değişkenlerini içeren bir AsalCarpan sınıfı oluşturunuz.
7) AsalCarpan sınıfı için çarpanlar ve carpanSayisi değişkenlerini ilklendiren bir
varsayılan yapıcı oluşturunuz. Varsayılan yapıcının işlevlerine ek olarak Sayi sınıfına
bir referans alıp sayi değişkenini ilklendiren ikinci bir yapıcı oluşturunuz.
8) AsalCarpan sınıfında sayi ve carpanSayisi değişkenleri için int değer dönen okuyucu
(get) fonksiyonları yazınız.
9) AsalCarpan sınıfının çarpanlar değişkeni Sayi nesnelerini tutmak için dinamik olarak ayrılacak bir hafıza alanına işaret eder. Bu hafıza alanının oluşturulabilmesi için öncelikle sayi değişkeninin asal carpanSayisi belirlenmelidir. Bu amaçla AsalCarpan sınıfında bir void carpanSayisiBul() fonksiyonu kodlanacaktır. Bu fonksiyonda gerektiğinde Sayi sınıfının fonksiyonları kullanılarak şu işlemler gerçekleştirilecektir.
```
carpan = 2 ve bölüm = sayi.okuDeger()’den başlar. 
bölüm = 1 olmadığı sürece  
    çarpan sayısı bölüm’ü bölen bir asal sayı olduğu sürece 
        bölüm değeri çarpan değerine bölünür. 
        carpanSayisi değeri 1 arttırılır. 
    Aksi takdirde çarpan sayısı 1 arttırılır. 
```

10) AsalCarpan sınıfında yazacağınız void islem() fonksiyonunda bir önceki adımda
hesaplattığınız carpanSayisi değerini kullanarak çarpanlar değişkeninin işaret
edeceği bir hafıza alanını new anahtar kelimesiyle ayırınız. Bir önceki adımda
yazdığınız kodun bir benzeriyle sayi değişkeninin asal çarpanlarını belirlerken bu sefer
her asal çarpan için bir Sayi nesnesi oluşturup çarpanlar hafıza alanında bu nesnenin
saklanmasını sağlayınız.
11) AsalCarpan sınıfında << operatörünü aşırı yükleyerek referans alınan bir
AsalCarpan değişkeninin çarpanlar’ını sayi = n * n * n * m * m * p formatında
ostream tamponuna bastıracak bir friend fonksiyon yazınız.
12) AsalCarpan sınıfına son olarak bir yıkıcı (destructor) fonksiyon yazıp içerisinde
çarpanlar değişkeninin işaret ettiği hafıza alanını delete anahtar kelimesiyle siliniz.
13) main içerisinde aşağıdaki kod parçasını çalıştırarak uygulamanızı test ediniz.

```
Sayi s(300);
cout<< s << " sayisi asal mi: " << s.asalMi() << endl;
AsalCarpan* as1 = new AsalCarpan(s);
as1->carpanSayisiBul();
as1->islem();
cout << *as1;
as1->~AsalCarpan();
s.yazDeger(37);
cout << s << " sayisi asal mi: " << s.asalMi() << endl;
AsalCarpan* as2 = new AsalCarpan(s);
as2->carpanSayisiBul();
as2->islem();
cout << *as2;
```

## Benim kodumun çıktısı :

```
300 sayisi asal mi: 0
300 sayisinin asal carpanlari: 2*2*3*5*5
37 sayisi asal mi: 1
37 sayisinin asal carpanlari: 37
```

![Screenshot_1](https://user-images.githubusercontent.com/55535970/156786578-d5495152-531e-4268-b545-e54b5326b4f6.png)

