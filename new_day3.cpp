#include <iostream>
#include <string>

int main(){

    std::string isim;
    int yas;

    std::cout << "Merhaba lütfen isimini ve yasini gir" << std::endl;
    std::cout << "isim : "; 
    std::cin >> isim;
    std::cout << "yasin :";
    std::cin >> yas;
    std::cout << "ismin " << isim << " yasin " << yas << std::endl;

    if (yas >= 18){

    std::cout << "Reşitsiniz \n";
    
    } else {
        std::cout << "Reşit değilsin reşit olmana " << 18 - yas << " yıl var.";
         
    }
    


    return 0;

}




















