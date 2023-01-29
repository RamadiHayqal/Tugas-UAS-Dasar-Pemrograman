#include <iostream>
using namespace std;

int main() {
  int pilihan,total_Menu,banyak,hasil=0;
  char pilihan_Menu,yesNo;
  int diskon = 10;
  int x=0;
  int total_Seluruh_Pesanan[x];

  cout << "Menu Mie Gacoan : " << endl;
  cout << "1. NOODLE" << endl;
  cout << "2. DIMSUM" << endl;
  cout << "3. BEVERAGE" << endl;

 do {
  cout << "Masukan Menu Yang Di Pilih : ";
  cin >> pilihan;

 switch(pilihan) {
   case 1:
    cout << "Menu NOODLE" << endl;
    cout << "A. Mie Angel        : Rp.13.000" << endl;
    cout << "B. Mie Setan        : Rp.15.000" << endl;
    cout << "C. Mie Iblis        : Rp.15.000" << endl;

    cout << "Masukkan Pilihan Menu : ";
    cin >> pilihan_Menu;

    if(pilihan_Menu == 'a' || pilihan_Menu == 'A') {
              total_Menu = 13000;
    } else if(pilihan_Menu == 'b' || pilihan_Menu == 'B'){
              total_Menu = 15000;
    } else if(pilihan_Menu == 'c' || pilihan_Menu == 'C'){
              total_Menu = 15000;
    } else {
     cout << "Menu Tidak Tersedia!" << endl;
    }

    cout << "Berapa Banyak Pesanan? : ";
    cin >> banyak;

    total_Seluruh_Pesanan[x]=total_Menu*banyak;

    cout << "Apakah Ada Pesanan Lainnya? Ya tekan (y), Tidak tekan (n) : ";
    cin >> yesNo;
  break;

   case 2:
    cout << "Menu DIMSUM" << endl;
    cout << "A. Siomay           : Rp.9.000" << endl;
    cout << "B. Udang Keju       : Rp.9.000" << endl;
    cout << "C. Pangsit Goreng   : Rp.11.000" << endl;

    cout << "Masukkan Pilihan Menu : ";
    cin >> pilihan_Menu;;

    if(pilihan_Menu == 'a' || pilihan_Menu == 'A'){
             total_Menu = 9000;
    } else if(pilihan_Menu == 'b' || pilihan_Menu == 'B'){
              total_Menu = 9000;
    } else if(pilihan_Menu == 'c' || pilihan_Menu == 'C'){
              total_Menu = 11000;
    } else {
     cout << "Menu Tidak Tersedia!"<< endl;
    }

    cout << "Berapa Banyak Pesanan? : ";
    cin >> banyak;

    total_Seluruh_Pesanan[x]=total_Menu*banyak;

    cout << "Apakah Ada Pesanan Lainnya? Ya tekan (y), Tidak tekan (n) : ";
    cin >> yesNo;
   break;

   case 3:
    cout << "Menu BEVERAGE" << endl;
    cout << "A. Es Genderuwo          : Rp.9.000" << endl;
    cout << "B. Es Tuyul              : Rp.6.000" << endl;
    cout << "C. Es Sundel Bolong      : Rp.6.000" << endl;
    cout << "D. Es Pocong             : Rp.9.000" << endl;

    cout << "Masukkan Pilihan Menu : ";
    cin >> pilihan_Menu;;

    if(pilihan_Menu == 'a' || pilihan_Menu == 'A'){
              total_Menu = 9000;
    } else if(pilihan_Menu == 'b' || pilihan_Menu == 'B'){
              total_Menu = 6000;
    } else if(pilihan_Menu == 'c' || pilihan_Menu == 'C'){
              total_Menu = 6000;
    }  else if(pilihan_Menu == 'd' || pilihan_Menu == 'D'){
              total_Menu = 9000;
    } else {
     cout << "Menu Tidak Tersedia!" << endl;
    }

    cout << "Berapa Banyak Pesanan? : ";
    cin >> banyak;

    total_Seluruh_Pesanan[x]=total_Menu*banyak;

    cout << "Apakah Ada Pesanan Lainnya? Ya tekan (y), Tidak tekan (n) : ";
    cin >> yesNo;
   break;

  }
  x++;
 } while(yesNo == 'y' || yesNo == 'Y');

 cout << "Rincian : " << endl;

   for(int i= 0; i <x; i++){
       hasil = hasil + total_Seluruh_Pesanan[i];
 }

 cout << "Total Pesanan : " << hasil << endl;
 cout << "Diskon 10% : " << hasil/diskon << endl;
 cout << "Total Pembayaran : " << hasil - (hasil/diskon) << endl;
}
