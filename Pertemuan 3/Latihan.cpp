#include<iostream>
using namespace std;
int main(){
    float nilai, tinggi, berat;

    cout<<"Masukkan berat badan anda (kg) : "; cin>>berat;
    cout<<"Masukkan tinggi anda (m) : ";cin>>tinggi;
    nilai = (berat/tinggi)/tinggi;
    cout<<"BMI anda : "<<nilai<<endl;
    cout<<"Kategori berat badan : ";

    if (nilai < 18.5){
        cout<<"Berat badan kurang";
    }

    else if ((nilai >= 18.5 )and(nilai<25)){
        cout<<"Berat badan normal";
    }

    else if ((nilai >= 25 )and(nilai<30)){
        cout<<"Berat badan berlebih";
    }
    else if (nilai >=30){
        cout<<"Obesitas";
    }
    else {
        cout<<"Invalid (Mikir kidz)";
    }
}