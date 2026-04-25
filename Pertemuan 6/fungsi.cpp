// using namespace std;
#include <iostream>
#include <cstdlib>

// Fungsi dengan nilai balikan
int tambah(int a,int b){
    return a+b;
}

//Fungsi tanpa nilai balikan (void) --no return value
void tampilkanPesan(){
    std::cout<<"======== Selamat Datang di AP 2 ! ========"<<std::endl;
}

//Fungsi overload, funsi denga nama yg sama, tapi parameternya beda, tipenya beda
int kali (int a, int b){
    return a*b;
}

double kali(double a, double b){
    return a*b;
}

//Fungsi Rekursif, fungsi yang memanggil dirinya sendiri
int faktorial (int n){
    if (n == 0 || n == 1){ // base case
            return 1;
    }
    else{ // recursive case
        return n * faktorial(n-1);
    }

}

int main(){
    system("cls");

    // memanggil fungsi tanpa nilai balikan
    tampilkanPesan();

    // memanggil fungsi dengan nilai balikan
    int x = 5, y = 3;
    int hasilTambah = tambah(x,y);
    std::cout<<"Hasil Penjumlahan : "<<hasilTambah<<std::endl;

    // menggunakan fungsi overload
    int hasilKaliInt = kali(x,y);
    
    double n = 3, m = 5;
    double hasilKaliDouble = kali(n,m);
    std::cout<<"Hasil Perkalian (int) : "<<hasilKaliInt<<std::endl;
    std::cout<<"Hasil Perkalian (double) : "<<hasilKaliDouble<<std::endl;
    
    // menggunakan fungsi rekursif
    int angka = 5;
    std::cout<<"Faktorial dari "<<angka<<" adalah "<<faktorial(angka)<<std::endl;

}