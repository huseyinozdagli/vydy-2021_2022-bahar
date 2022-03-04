#include "AsalCarpan.h"


using namespace std;
int main()
{
    Sayi s(300);
    cout << s << " sayisi asal mi: " << s.asalMi() << endl;
    AsalCarpan* as1 = new AsalCarpan(s);
    as1->carpanSayisiBul();
    as1->islem();
    cout << *as1;
    as1->~AsalCarpan();

    s.setDeger(37);
    cout << s << " sayisi asal mi: " << s.asalMi() << endl;
    AsalCarpan* as2 = new AsalCarpan(s);
    as2->carpanSayisiBul();
    as2->islem();
    cout << *as2;

}