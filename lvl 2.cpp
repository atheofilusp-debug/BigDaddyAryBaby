// #include <iostream>
// using namespace std;

// int main() {
//     int nilai = 75;

//     if (nilai >= 90) {
//         cout << "A" << endl;
//     } else if (nilai >= 80) {
//         cout << "B" << endl;
//     } else if (nilai >= 70) {
//         cout << "C" << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <string>

// int main() {
//     int rows = 5;

//     for (int i = 1; i <= rows; i++) {
//         std::cout
//             << std::string(rows - i, ' ')
//             << std::string(2 * i - 1, '*')
//             << std::endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int rows = 5;
//     for(int i = 1; i <= rows; i++) {
//         for(int j=1; j<=rows-i; j++) {
//             cout << " ";
//         }
//         for(int k=1; k<=2*i-1; k++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int luasPersegi(int sisi) {
//     return sisi * sisi;
// }

// int main() {
//     cout << luasPersegi(4);

//     return 0;
// }

// #include <iostream>

// void cek_ganjil_genap(int angka) {
//     if (angka % 2 == 0) {
//         std::cout << "genap" << std::endl;
//     } else {
//         std::cout << "ganjil" << std::endl;
//     }
// }

// int main() {
//     cek_ganjil_genap(6);
//     cek_ganjil_genap(7);
//     return 0;
// }

#include <iostream>

double konversiSuhu(double celcius) {
    double fahrenheit = celcius * 1.8 + 32;
    return fahrenheit;
}

int main() {
    double hasil = konversiSuhu(30);
    std::cout << hasil << std::endl;
    
    return 0;
}