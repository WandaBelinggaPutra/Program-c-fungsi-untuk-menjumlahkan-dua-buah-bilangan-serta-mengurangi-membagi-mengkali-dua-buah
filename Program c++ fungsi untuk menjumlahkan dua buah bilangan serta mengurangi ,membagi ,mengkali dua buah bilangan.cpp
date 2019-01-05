#include<iostream>
using namespace std;

int jumlah(){
int a,b;
cout<<"PROGRAM FUNGSI PENJUMLAHAN,PERKALIAN,PENGURANGAN,DAN PEMBAGIAN 2 BUAH BILANGAN"<<endl;
cout<<"Penjumlahan"<<endl;
cout<<"Masukan Bilangan pertama : ";
cin>>a;
cout<<"Masukan Bilangan Kedua   : ";
cin>>b;
cout<<"Hasilnya Adalah : "<<a+b<<endl;
cout<<endl;
}
int kurang(){
int a,b;
cout<<"Pengurangan"<<endl;
cout<<"Masukan Bilangan Pertama : ";
cin>>a;
cout<<"Masukan Bilangan Kedua   : ";
cin>>b;
cout<<"Hasilnya Adalah : "<<a-b<<endl;
cout<<endl;
}
int kali(){
int a,b;
cout<<"Perkalian"<<endl;
cout<<"Masukan Bilangan Pertama : ";
cin>>a;
cout<<"Masukan Bilangan Kedua   : ";
cin>>b;
cout<<"Hasilnya Adalah : "<<a*b<<endl;
cout<<endl;
}
int bagi(){
int a,b;
cout<<"Pembagian"<<endl;
cout<<"Masukan Bilangan pertama : ";
cin>>a;
cout<<"Masukan bilangan kedua   : ";
cin>>b;
cout<<"Hasilnya Adalah : "<<a/b<<endl;
cout<<endl;
}
int main(){
cout<<endl;
jumlah();
kurang();
kali();
bagi();
cout<<endl;
return 0;
}
