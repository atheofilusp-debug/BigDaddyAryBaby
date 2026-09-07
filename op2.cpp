// #include <iostream>
// #include <string>
// #include <algorithm>

// using namespace std;

// string formatRupiah(double nilai) {
//     string angka = to_string(static_cast<long long>(nilai));

//     for (int posisi = angka.length() - 3; posisi > 0; posisi -= 3) {
//         angka.insert(posisi, ".");
//     }

//     return angka;
// }

// int main() {
//     int harga_buku = 45000;
//     int jumlah_buku = 3;

//     int harga_pulpen = 7500;
//     int jumlah_pulpen = 2;

//     int harga_tas = 120000;
//     int jumlah_tas = 1;


//     double total_sebelum_diskon =
//         (jumlah_buku * harga_buku) +
//         (jumlah_pulpen * harga_pulpen) +
//         (jumlah_tas * harga_tas);


//     double diskon = 0.10;
//     double total_setelah_diskon =
//         total_sebelum_diskon * (1 - diskon);

//     cout << "Total harga sebelum diskon: Rp"
//          << formatRupiah(total_sebelum_diskon) << endl;

//     cout << "Total harga setelah diskon 10%: Rp"
//          << formatRupiah(total_setelah_diskon) << endl;

//     return 0;
// }

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int tabungan_per_minggu = 50000;
    int jumlah_minggu = 3;
    int pengeluaran_minggu_3 = 30000;

    int total_tabungan =
        (tabungan_per_minggu * jumlah_minggu) - pengeluaran_minggu_3;

    cout << "Total tabungan Ahmad setelah minggu ketiga adalah: Rp"
         << total_tabungan << endl;

    return 0;
}