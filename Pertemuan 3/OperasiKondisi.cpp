#include <iostream>
using namespace std;

int main(){
    int nilai;
    system("CLS");
    cout<<"Masukkan nilai : "; cin>>nilai;
    
    // if statement
    // if (nilai<=65){
    //     cout<<"Anda Tidak lulus"<<endl;
    // }

    // if else statement
    // if (nilai<=65){
    //     cout<<"Anda Tidak lulus"<<endl;
    // }
    // else{
    //     cout<<"Anda Lulus"<<endl;
    // }    

    // if else if statement
    // if (nilai==100){
    //     cout<<"Anda keceh"<<endl;
    // }
    // else if (nilai<=65){
    //     cout<<"Anda tidak lulus"<<endl;
    // }
    // else{
    //     cout<<"Anda lulus"<<endl;
    // }

    // nested if statement
    // if (nilai<=65){
    //     cout<<"Anda tidak lulus"<<endl;
    // }
    // else{
    //     if (nilai==100){
    //         cout<<"Anda keceh"<<endl;
    //     }
    //     else{
    //         cout<<"Anda lulus"<<endl;
    //     }
    // }

    // switch case statement
    // switch(nilai){
    //     case 1:
    //         cout<<"Senin"<<endl;break;
    //     case 2:
    //         cout<<"Selasa"<<endl;break;
    //     case 3:
    //         cout<<"Rabu"<<endl;break;
    //     case 4:
    //         cout<<"Kamis"<<endl;break;
    //     case 5:
    //         cout<<"Jumat"<<endl;break;
    //     case 6:
    //         cout<<"Sabtu"<<endl;break;
    //     case 7:
    //        cout<<"Minggu"<<endl;break;
    //     default:
    //         cout<<"Inputan salah";break;
    // }

    // switch range case statement
    // switch(nilai){
    //     case 85 ... 100:
    //         cout<<"Nilai A"<<endl;break;
    //     case 80 ... 84:
    //         cout<<"Nilai B+"<<endl;break;
    //     case 75 ... 79:
    //         cout<<"Nilai B"<<endl;break;
    //     case 70 ... 74:
    //         cout<<"Nilai C+"<<endl;break;
    //     case 65 ... 69:
    //         cout<<"Nilai C"<<endl;break;
    //     case 60 ... 64:
    //         cout<<"Nilai D"<<endl;break;
    //     case 0 ... 59:
    //         cout<<"E for Emezing"<<endl;break;
    //     default:
    //     cout<<"Inputan Salah"<<endl;break;
    // }


    // ternary operator
    if (nilai%2==0){
        cout<<"Nilai genap";
    }
    else{
        cout<<"\nNilai ganjil\n";
    }

    (nilai%2==0) ? cout<<"Nilai genap"<<endl : cout<<"Nilai ganjil"<<endl;





}