// using namespace std;
#include <iostream>
#include <cstdlib>

std::string variabelglobal = "Ilmu";

void namaVariabel(){
    std::string variabellokal = "Komputer";

    //coba akses 1
    std::cout<<variabellokal<<std::endl;   

    // coba akses 2
    std::cout<<variabelglobal<<std::endl;
}

int main(){
    system("cls");
    namaVariabel();
    std::cout<<variabelglobal<<std::endl;
    
    // std::cout<<variabellokal<<std::endl;
    
}