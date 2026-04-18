#include <iostream>
#include <stdio.h>

#include <string>
#include <array>
#include <vector>
using namespace std;

main(){

    vector<string> mahasiswa ={"Nadia","Echa","Carlos","Ilham","Alan"};

    cout<<"Isi vector awal :"<<endl;
    for(int i=0; i<mahasiswa.size();i++){
        cout<<mahasiswa[i]<<endl;
    }

    mahasiswa.push_back("Houra");
    mahasiswa.pop_back();
    mahasiswa.erase(mahasiswa.begin()+1);

    cout<<"\nIsi vector setelah perbuahan :"<<endl;
    for(int i=0; i<mahasiswa.size();i++){
        cout<<mahasiswa[i]<<endl;
    }
    cout<<"\nJumlah data tersisa : "<<mahasiswa.size();
    
    
}