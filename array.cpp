#include <iostream>
#include <stdio.h>

#include <string>
#include <array>

using namespace std;

main(){
    // Array declaration and initialization
    // 2 cara membaut array

    // cara 1 : array kosong
    // string nama[5];
    // nama[0]="Alya";
    // nama[1]="Parul";
    // nama[2]="Hana";
    // nama[3]="Dewi";
    // nama[4]="Padhil";

    // cara 2 : array langsung diisi
    // string nama[5] = {"Alya", "Parul", "Hana", "Dewi", "Padhil"};
    // string nama[] = {"Alya", "Parul", "Hana", "Dewi", "Padhil"};

    // Menampilkan data dalam array
    // cout<<nama[0]<<endl;
    // cout<<nama[3]<<endl;

    // Menggunakan Looping
    // for (int i=0; i<=(sizeof(nama)/sizeof(nama[0])-1);i++){
    //     cout<<nama[i]<<endl;
    // }
    
    // descending
    // for (int i=(sizeof(nama)/sizeof(nama[1])-1);i>=0;i--){
    //     cout<<nama[i]<<endl;
    // }

    // Multidimensional array
    // 1 2 3
    // 4 5 6

    // int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};

    // for (int i =0; i<2;i++){
    //     for(int j=0; j<3;j++){
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }

    // stirng (Array of char)
    // string nama = "Alya";
    // cout<<nama[0]<<endl;
    // cout<<nama[2]<<endl;

    // cout<<nama.length(); //Untuk menghitung jumlah karakter
    // string s1 ="Hello";
    // string s2 ="World";
    
    // 1 s1=s2
    // s1=s2;
    // cout<<"s1 sekarang "<<s1<<endl;
    
    // 2 s1+s2
    // s1="Hello";
    // cout<<"Hasil gabungan = "<<s1+s2<<endl;

    // 3 s1.length()
    // cout<<s1.length()<<endl; //5
    // cout<<(s1+s2).length()<<endl; //10    

    // 4 s1.substr(n,m), n itu mulai dri index brp m itu pnjgny brp
    // cout<<s1.substr(2,3)<<endl;

    // Operator sizeof
    // int angka =1000;
    // cout<<sizeof(angka);
    
    // int nilai[]={10,20,30,40};
    // cout<<sizeof(nilai);
    // cout<<sizeof(nilai)/sizeof(nilai[1]);

    // Array library
    // Misal Array biasa : float nilai[5]
    array<float,5> nilai = {87.5, 90, 100, 95.7, 78.3};
    cout<<"Nilai : ";

    for (int i=0;i<nilai.size();i++){
        cout<<nilai[i]<<", ";
    }

    // Vector dinamis array statis
}