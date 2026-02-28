#include <iostream>
#include<conio.h>

// conio.h buat getche() dan getch()
// getche itu fungsi buat input char, get character and echo, input dan nnati ditampilin
// getch buat karakter yg kt ketik g ketampilan
// header standar lainnya, conio.h, stdio.h
using namespace std;

int main()
{
    string nama;
    char kom, jenisKelamin;
    int nim;
    float ip;

    cout<<"Hello World\n";

    cout<<"Masukkan nama : "; getline(cin,nama);
    // getline biar spasi bs terbaca 
    // cin>>nama;
    cout<<"Masukkan KOM : "; cin>>kom;
    cout<<"Masukkan NIM : "; cin>>nim;
    cout<<"Masukkan IP : "; cin>>ip;
    cout<<"Masukkan jenis kelamin (L/P) : ";
    jenisKelamin = getche();
    cout<<"\n";
    // biar karakter lgsg tampil tanpa perlu enter, (ia bakal terima 1 input dan lgsg dijalanin kode dibwhnya meski lu tipo sekalipun jdi g bs diubah lgi pas salah, bayangin lu mau gender l tpi ketekan p itu dh g bs diganti karna nnti di jalankan lgsg)


    cout<<nama<<", "<<kom<<", "<<nim<<", "<<ip<<", ",jenisKelamin; 
    cout<<"\n"<<nama<<endl;
    cout<<kom<<endl;
    cout<<nim<<endl;
    cout<<ip<<endl;
    // cout<<jenisKelamin<<endl;
    putchar(jenisKelamin);
    cout<<"\n";

    // cout bs utk int str dsb, klo putchar cmn buat char doang (intinya g gt guna pke cout aja dh plg bnr), is bakal error klo variabel yg diambil bkn char

    getch(); 
    
    //karakter yg kt ketik ga ditampilin dilayar, kekny cuman untuk 1 karakter aja


    // klo tipe data char g diblg brp karakternya nnti g bs terima input lbh dri itu klo g nnti input brktny bs error

    // klo char[2] g bs dipake getche

}