// string
// a.find();
// a.length();
// a.substr(1,2);
// komputer substr(0,3)
// kom


// a.erase(a.begin()+3);

// vector
// a.push_back(1.1);
// a.pop_back();
// a.erase(a.begin()+3);


//vecotr<float> ferfer = {1.2, 2.2};

// using namespace std; bcos im a chad
#include <iostream>
#include <cstdlib>
#include <string>
#include <array>
#include <vector>

void sapa(std::string nama){
    std::cout<<"Halo "<<nama<<" Selamat Datang di AP 2!"<<std::endl;    
}

//parameter formal, yg ad di fungsi : nama
//parameter aktual, yg dipake buat panggil fungsi : namaPengguna

int main (){

    std::string namaPengguna = "Alya";
    system("cls");
    sapa(namaPengguna);

    return 0;

}
