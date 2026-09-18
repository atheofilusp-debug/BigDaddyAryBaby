// for (let angka = 1; angka <= 100; angka++) {
//     console.log("angka " + angka);
// }

for (let baris = 1; baris <= 5; baris++) {
    let hasil = "";

    for (let angka = 1; angka <= baris; angka++) {
        hasil += angka + " ";
    }

    console.log(hasil);
}