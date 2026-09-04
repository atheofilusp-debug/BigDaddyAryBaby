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

// using namespace std;

// int hitungKopi(int jumlahGelas) {
// 	int totalHarga = jumlahGelas * 5000;

// 	if (jumlahGelas > 3) {
// 		totalHarga -= 2000;
// 	}

// 	return totalHarga;
// }

// int main() {
// 	cout << hitungKopi(2) << endl;
// 	cout << hitungKopi(4) << endl;

// 	return 0;
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

// #include <iostream>

// double konversiSuhu(double celcius) {
//     double fahrenheit = celcius * 1.8 + 32;
//     return fahrenheit;
// }

// int main() {
//     double hasil = konversiSuhu(30);
//     std::cout << hasil << std::endl;
    
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int hitungtabungan(int hari) {
//     int total = 0;

//     for(int i = 1; i <= hari; i++) {
//         if(i % 2 == 1) {
//             total += 2000;
//         } else {
//             total += 5000;
//         }
//     }
//     return total;
// }

// int main() {
//     cout << hitungtabungan(3) << endl;
// }

// #include <iostream>
// using namespace std;

// void cekhoki(int n) {
//     if (n % 2 == 0 && n % 7 == 0) {
//         cout << "HOKI" << endl;
//     } else {
//         cout << "BIASA" << endl;
//     }
// }

// int main() {
//     cekhoki(13);
//     cekhoki(14);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// string cektilang(int plat, int tanggal) {
//     if (plat % 2 == tanggal % 2) {
//         return "AMAN";
//     } else {
//         return "TILANG";
//     }
// }

// int main() {
//     cout << cektilang(24, 12) << endl;
//     cout << cektilang(13, 20) << endl;

//     return 0;
// }

