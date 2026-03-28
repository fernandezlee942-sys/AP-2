#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){
    system("cls");
    // goto label
    // Hello World, Failkom-TI, Ilmu Komputer, IKLC
    // -> Hello World, IKLC, Ilmu Komputer, Fasilkom-TI
    // a: cout<<"Hello World"<<endl;
    // goto d;
    // b: cout<<"Fasilkom-TI"<<endl;
    // return 0;
    // c: cout<<"Ilmu Komputer"<<endl;
    // goto b;
    // d: cout<<"IKLC"<<endl; cout<<"a";
    // goto c;
    // int i = 10;
    // genap:
    // if(i%2==0){
    //     cout<<i<<" ";
    // } i--;

    // if (i>=2){
    //     goto genap;
    // }

    // Statement While
    // int i = 1;
    // while (i<=10){
    //     if (i%2==0){
    //         cout<<i<<" ";
    //     } i++;
    // }

    // Statement Do-While
    // int i = 1;

    // do{
    //     cout<<i<<endl;
    // } while (i<=0);
    
    // int i = 1;
    // do{
    //     cout<<i<<endl;i--;
    // } while (i<=0);


    // Statement for
    // for(inisialisasi; kondisi; incerment/decrement)
    // for(int i=1; i<=10; i+=2){
    //     cout<<"Hello World"<<endl;

    // }

    // Nested for
    // ***** 5 x 5
    // for(int i=1;i<=5;i++){
    // for (int j =1; j<=5; j++){
    //     cout<<"* ";
    // }
    // cout<<endl;
    // }

    // Segiotiga siku-siku

    for (int i = 1; i<=5; i++){
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for (int i = 5; i>=1; i--){
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}


