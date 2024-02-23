// Nama : Muhammad Fathur Rahman
// Kelas : XI IPS 1
#include <iostream>

int main() {
    float angka1, angka2;
    
    std::cout << "Masukkan angka pertama: ";
    std::cin >> angka1;
    
    std::cout << "Masukkan angka kedua: ";
    std::cin >> angka2;

    float tambah = angka1 + angka2;
    float kurang = angka1 - angka2;
    float kali = angka1 * angka2;
    
    float bagi = (angka2 != 0) ? (angka1 / angka2) : 0;

    std::cout << "Hasil penambahan: " << tambah << std::endl;
    std::cout << "Hasil pengurangan: " << kurang << std::endl;
    std::cout << "Hasil perkalian: " << kali << std::endl;
    std::cout << "Hasil pembagian: " << bagi << std::endl;

    return 0;
}
