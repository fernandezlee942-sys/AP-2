using namespace std;

#include <iostream>
#include <string>
#include <stdio.h>
#include <array>

#include <vector>


    // array<float,5> nilai = {87.5, 90, 100, 95.7, 78.3};
    // vector<string> nama_karyawan = {"Alya","Parul","Hana","Dewi","Padhil"};

main(){
    // Vector Declaration & Initialization
    vector<string> nama_karyawan = {"Alya","Parul","Hana","Dewi","Padhil"};

    // Menampilkan data ascending
    // for (int i=0;nama_karyawan.size();i++){
    //     cout<<nama_karyawan[i]<<endl;
    // }
    
    // Add data to vector
    // push_back -> 11 12 append
    nama_karyawan.push_back("Edric");
    
    // for (int i=0;nama_karyawan.size();i++){
    //     cout<<nama_karyawan[i]<<endl;
    // }
    
    // Delete data from vector
    // pop_back, hps plg blkg
    nama_karyawan.pop_back();
    nama_karyawan.erase(nama_karyawan.begin()+3);
    // dewi yg kehps indeks ke 3
    
    
    for (int i=0;i<nama_karyawan.size();i++){
        cout<<nama_karyawan[i]<<endl;
    }
    

}