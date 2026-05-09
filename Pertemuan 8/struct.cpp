// using namespace std;
#include <iostream>
#include <cstdlib>
#include <array>
#include <string>
#include <vector>

struct Alamat{
    std::string jalan;
    std::string kota;
    double kodePos;
};

struct Mahasiswa{
    std::string nama;
    int umur;
    float ipk;
    Alamat alamat;
};


int main(){
    system("cls");

    Mahasiswa mhs1;
    mhs1.alamat.jalan = "Jalan Jamin Ginting";
    mhs1.alamat.kota = "Medan";
    mhs1.alamat.kodePos = 20155;

    // std::cout<<"Alamat : "<<mhs1.alamat.jalan<<" "<<mhs1.alamat.kota<<" "<<mhs1.alamat.kodePos<<std::endl;

    std::vector<Mahasiswa> mahasiswa;
    int n;
    std::cout<<"Masukkan banyak mahasiswa : "; std::cin>>n;

    for (int i=0;i<n;i++){
        std::cout<<"Mahasiswa "<<i+1<<std::endl;
        std::cin.get(); //cin emg abaikan spasi dan enter tapi g dihapus di buffernya
        std::cout<<"Masukkan nama : "; std::getline(std::cin,mhs1.nama);
        std::cout<<"Masukkan umur : "; std::cin>>mhs1.umur;
        std::cout<<"Masukkan ipk : "; std::cin>>mhs1.ipk;
        mahasiswa.push_back(mhs1);
    }

    for (int i=0;i<n;i++){
        std::cout<<"Mahasiswa "<<i+1<<std::endl;
        std::cout<<"Nama : "<<mahasiswa[i].nama<<std::endl;
        std::cout<<"Umur : "<<mahasiswa[i].umur<<std::endl;
        std::cout<<"IPK : "<<mahasiswa[i].ipk<<std::endl;
    }

}