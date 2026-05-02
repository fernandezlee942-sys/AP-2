#include <cstdlib>
#include <iostream>
#include <string>
#include <array>
// using namespace std;

//fungsi untuk pointer sebagai parameter
void ubahNilai(int* p){
    *p = 20; // ubah isi alamat
}



int main(){
    system("cls");

    // 1. Pointer dalam pointer
    int a = 64; // variabel biasa
    int* p = &a; // pointer ke a
    int** pp = &p; // pointer ke pointer p
    
    std::cout<<"Nilai a : "<<a<<std::endl;
    std::cout<<"Nilai *p : "<<*p<<std::endl;
    std::cout<<"Nilai **p : "<<**pp<<std::endl;

    // 2. Pointer dalam Array
    std::cout<<"=== Pointer dalam Array ==="<<std::endl;
    int arr[3] = {1,2,3};
    int* ptr = arr;

    std::cout<<"Elemen 1 : "<<*ptr<<std::endl; //arr[0] --> 1
    std::cout<<"Elemen 2 : "<<*(ptr+1)<<std::endl; // arr[1] -->2
    std::cout<<"Elemen 3 : "<<*(ptr+2)<<std::endl; //arr[2] --> 3

    // 3. Pointer dalam String
    std::cout<<"=== Pointer dalam String ==="<<std::endl;
    
    const char *organisasi = "Ilmu Komputer Laboratory Center";
    // const biar g muncul warning, ia blg klo gw g bakal ubah lagi karakternya

    std::cout<<"Awal : "<<organisasi<<std::endl;
    organisasi +=5; // geser pointer

    std::cout<<"Geser : "<<organisasi<<std::endl;
    // alasan g muncul nilai sampah karna ini itu pointer

    // 4. Pointer sebagai Parameter
    int x=5;

    std::cout<<"Sebelum : "<<x<<std::endl;
    ubahNilai(&x);
    std::cout<<"Sesudah : "<<x<<std::endl;

}