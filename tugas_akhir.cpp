#include<iostream>
using namespace std;
int main (){
    int harga, jml_barang, total, pilihan;
    string item;
    cout << "item tersedia :" <<endl;
    cout << "1. Roti \t: RP. 5000" <<endl;
    cout << "2. Susu \t: RP. 4000" <<endl;
    cout << "3. Snak \t: RP. 1000" <<endl;
    cout << "4. Selesai" <<endl;
    do{
     cout << "isikan kode:";
     cin >> pilihan;
     switch(pilihan){
        case 1 :
           item = "Roti";
           harga = 5000;
           cout << "jumlah item:";
           cin >> jml_barang;
           total += harga * jml_barang;
           cout<<jml_barang<<"  "<<item<<" RP. "<< harga*jml_barang<<endl;
           break;
        case 2 :
           item = "Susu";
           harga = 4000;
           cout << "jumlah item:";
           cin >> jml_barang;
           total += harga * jml_barang;
           cout<<jml_barang<<"  "<<item<<" RP. "<< harga*jml_barang<<endl;
           break;
        case 3 :
           item = "Snak";
           harga = 1000;
           cout << "jumlah item:";
           cin >> jml_barang;
           total += harga * jml_barang;
           cout<<jml_barang<<"  "<<item<<" RP. "<< harga*jml_barang<<endl;
           break;
        case 4 :
           cout<<"total belanja : RP. "<<total<<endl;
           break;
        default :
           cout<<"pilihan salah"<<endl;
           break;
        }  
    }while(pilihan != 4);
    cout<<"Terimakasih"<<endl;
}