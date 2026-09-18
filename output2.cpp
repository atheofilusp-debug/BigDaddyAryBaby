// #include <iostream>
// using namespace std;

// int main() {
//     for (int angka = 1; angka <= 100; angka++) {
//         cout << "angka " << angka << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    for (int baris = 1; baris <= 5; baris++) {
        for (int angka = 1; angka <= baris; angka++) {
            cout << angka << " ";
        }
        cout << endl;
    }

    return 0;
}