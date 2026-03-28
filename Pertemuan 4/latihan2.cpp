#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){
    string kalimat;
    int i,j,JKalimat;
    system("cls");
    cout<<"Masukkan jumlah kalimat : ";cin>>JKalimat;getchar();
    for (j=1; j<=JKalimat;j++){
        cout<<"Masukkan kalimat : ";
        getline(cin,kalimat);    
        for (i=0; i<kalimat.length();i++){
            while (kalimat[i]=='a' or kalimat[i]=='e' or kalimat[i]=='i' or kalimat[i]=='o' or kalimat[i]=='u'){
            kalimat[i] = toupper(kalimat[i]);
            }
        }
    cout<<"Kalimat dalam huruf kapital : "<<kalimat<<endl;
    }
}   