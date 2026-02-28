#include <iostream>
using namespace std;
// volume lp bola
int main (){
    float pi=3.14;
    float luaspermukaan, volume, r;
    cout<<"Masukkan jari-jari lingkaran : ";cin>>r;
    luaspermukaan = 4*pi*r*r;
    volume=float(4)/3*pi*r*r*r;
    cout<<"Volume bola = "<<volume<<endl;
    cout<<"Luas Permukaan = "<<luaspermukaan;
    cout<<--r<<endl;
}