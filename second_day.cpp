#include <iostream>
#include <string>

int main() {

    
    std::string isim;
    std::string yas;
    // int yas; 
    // daha tercih edilebilir olabilir eğer matematiksel işlemde yapıllmak istenirse değer üzerinde daha doğru yoksa metin gibi kullanılır
    std::cout << "isminiz :" << std::endl;
    std::cout << ": ";
    std::cin >> isim;
    
    std::cout << "yasiniz :" << std::endl;
    std::cout << ": ";
    std::cin >> yas;

    std::cout << "isminiz " << isim << " ve yasiniz " << yas;

    return 0;


}