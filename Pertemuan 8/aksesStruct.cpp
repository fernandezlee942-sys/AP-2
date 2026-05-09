// using namespace std;
#include <iostream>
#include <cstdlib>
#include <array>
#include <string>
#include <vector>

struct Mahasiswa{
    std::string nama;
    int umur;
    float ipk;
};

int main(){
    system("cls");
    Mahasiswa mhs1;
    mhs1.nama = "Fernandez";
    mhs1.umur = 19;
    mhs1.ipk = 4.0;
    // bs pake . atau ->

    std::cout<<"Akses dengan tanda (.)"<<std::endl;
    std::cout<<"Nama : "<<mhs1.nama<<std::endl;
    std::cout<<"Umur : "<<mhs1.umur<<std::endl;
    std::cout<<"IPK : "<<mhs1.ipk<<std::endl;
    
    Mahasiswa* ptrMhs = &mhs1;
    std::cout<<"Akses dengan tanda (->)"<<std::endl;
    std::cout<<"Nama : "<<ptrMhs->nama<<std::endl;
    std::cout<<"Umur : "<<ptrMhs->umur<<std::endl;
    std::cout<<"IPK : "<<ptrMhs->ipk<<std::endl;

    
}