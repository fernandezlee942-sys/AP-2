// using namespace std;
#include <iostream>
#include <cstdlib>
#include <array>
#include <string>
#include <vector>

class ContohAkses{
    private:
    int privateVar;
    
    protected:
    int protectedVar;
    
    public:
    int publicVar;
    
    // Constructor
    ContohAkses(){
        privateVar=1;
        protectedVar=2;
        publicVar=3;
    }
    
    void tampilkanSemua(){
        std::cout<<"Akses dari dalam class : "<<std::endl;
        std::cout<<privateVar<<std::endl;
        std::cout<<protectedVar<<std::endl;
        std::cout<<publicVar<<std::endl;
    }
};
    
// Inheritance (pewarisan), class turunan
class Turunan : public ContohAkses{
    public:
    void aksesProtected(){
            // std::cout<<privateVar<<std::endl;
            std::cout<<protectedVar<<std::endl;
            std::cout<<publicVar<<std::endl;
    }
};



int main(){
    system("cls");
    ContohAkses obj;
    obj.tampilkanSemua();

    std::cout<<"\nAkses dari luar class :"<<std::endl;
    // std::cout<<obj.privateVar<<std::endl;
    // std::cout<<obj.protectedVar<<std::endl;
    std::cout<<obj.publicVar<<std::endl;

    std::cout<<"\nAkses dari class turunan :"<<std::endl;
    Turunan tur;
    tur.aksesProtected();
}