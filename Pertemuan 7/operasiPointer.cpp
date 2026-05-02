#include <cstdlib>
#include <iostream>
#include <string>
#include <array>
// using namespace std;
int main(){
    system("cls");

    // 1. Operasi Penugasan
    std::cout<<"=== Operasi Penugasan ==="<<std::endl;
    int a = 10;
    int *p;
    p=&a; // pointer simpan alamat a
    
    std::cout<<"Nilai a : "<<a<<std::endl; // 10
    std::cout<<"Alamat a (&a) : "<<&a<<std::endl; // alamat variabel a
    std::cout<<"Isi pointer p : "<<p<<std::endl; // alamat variabel a
    std::cout<<"Nilai *p : "<<*p<<std::endl; // 10
    
    
    // 2. Operasi Aritmatika
    std::cout<<"=== Operasi Aritmatika ==="<<std::endl;
    int nilai[3]; // array 3 angka
    int *oke;

    nilai[0]=125;
    nilai[1]=345;
    nilai[2]=750;
    
    oke = &nilai[0]; // "oke" sekarang menyimpan alamt nilai[0]

    /* ilustrasi
    nilai[0] --> alamat 1000 --> isinya 125
    nilai[1] --> alamat 1002 --> isinya 345
    nilai[2] --> alamat 1005 --> isinya 750    
    make sekarang oke = 1000
    */

    std::cout<<"Nilai "<<*oke<<" ada di alamat "<<oke<<std::endl;
    std::cout<<"Nilai "<<*(oke+1)<<" ada di alamat "<<(oke+1)<<std::endl;
    std::cout<<"Nilai "<<*(oke+2)<<" ada di alamat "<<(oke+2)<<std::endl;
    // geser pointer ke alamat berikutnya
    // cara kerja? kalo int lompat 4 byte, klo double 8 byte, jika char lompat 1 byte


    // 3. Operasi Logika
    std::cout<<"=== Operasi Logika ==="<<std::endl;
    int x = 5, y = 10;
    int *p1 = &x; // p1 --> alamat x
    int *p2 = &y; // p2 --> alamat y
    int *p3 = &x; // p3 --> alamat x

    // Jadi : p1 dan p3 sama, dan p2 beda sendiri
    /* Ilustrasi
    p1 = 1000
    p2 = 2000
    p3 = 1000
    */

    if(p1==p3){
        std::cout<<"p1 dan p3 menunjuk alamat yang sama"<<std::endl;
    }

    if(p1!=p2){
        std::cout<<"p1 dan p2 menunjuk alamat yang berbeda"<<std::endl;
    }

    // int *p4 = nullptr;    
    int *p4 = NULL;

    // nullptr itu tipe data tersendiri ia keyword resmi kalau ia alamat kosong
    
    // Null itu macro yang bilang kalo angka itu 0
    // Kenapa pake NULL kalo bs bilang 0? org jaman dlu pake itu biar yang baca bisa tau itu fungsi pointer g gitu beda dengan 0

    // Why use nullptr instead of NULL?
    // lets say we have
    // void cek( int n){
    //     std::cout<<"Ini Fungsi Integer"<<std::endl;
    // }
    // void cek(int *n){
    //     std::cout<<"Ini Fungsi Pointer"<<std::endl;
    // }
    // jika kita panggil
    // cek(NULL); compiler bs bingung karna NULL dianggap angka 0 dan ia bakal jalanin fungsi integer
    // cek(nullptr); ini pasti bakal jalanin fungsi pointer

    if(p4==NULL){
        std::cout<<"p4 adalah pointer NULL"<<std::endl;
    }
    if(p4==0){
        std::cout<<"p4 adalah pointer 0"<<std::endl;
    }

    getchar();
    system("cls");
}