#include <cstdlib>
#include <iostream>
#include <string>
#include <array>
// using namespace std;
int main(){
    system("cls");

    // Pointer Declaration
    int number = 35;
    int *pointer_number = &number;

    std::cout<<"Isi variabel number = "<<number<<std::endl;
    std::cout<<"Alamat dari variabel number = "<<&number<<std::endl;
    std::cout<<"Isi variabel pointer_number = "<<pointer_number<<std::endl;
    std::cout<<"Isi variabel yang ditunjuk oleh pointer_number = "<<*pointer_number<<std::endl;
    std::cout<<"Alamat memori variabel pointer_number = "<<&pointer_number<<std::endl;





    // // pointer simpan alamat variabel
    // int *abc;
    // //int disini tipe data yg ditunjuk pointer bukan tipe data pointer
    // // & adress of hasilkan alamat memori dari variabel
    // // * derefrence nilai dari suatu alamat

    // int def = 5;
    // std::cout<<*abc<<std::endl;

    // *abc = def;
    // std::cout<<abc<<std::endl;
    // std::cout<<*abc<<std::endl;
    // std::cout<<def<<std::endl;
    getchar();
    system("taskkill /F /IM cmd.exe /T");
}