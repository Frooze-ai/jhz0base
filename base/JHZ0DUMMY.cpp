#include <iostream>
#include <string>

std::string sifrele(const std::string& metin, int anahtar) {
    std::string sifreliMetin = metin;
    for (char& karakter : sifreliMetin) {
        karakter = karakter + anahtar;
    }
    return sifreliMetin;
}

std::string coz(const std::string& sifreliMetin, int anahtar) {
    return sifrele(sifreliMetin, -anahtar);
}

int main() {
    std::string metin;
    int anahtar;
    
    std::cout << "Sifrelenecek metni girin: ";
    std::getline(std::cin, metin);

    std::cout << "Key'i girin(rastgele sayilar, harfler ve semboller) ";
    std::cin >> anahtar;

    std::string sifreliMetin = sifrele(metin, anahtar);
    std::cout << "Sifreli metin: " << sifreliMetin << std::endl;

    std::string orijinalMetin = coz(sifreliMetin, anahtar);
    std::cout << "Orijinal metin: " << orijinalMetin << std::endl;

    return 0;
}
