// const hargaBuku = 45000;
// const jumlahBuku = 3;

// const hargaPulpen = 7500;
// const jumlahPulpen = 2;

// const hargaTas = 120000;
// const jumlahTas = 1;


// const totalSebelumDiskon =
//     (jumlahBuku * hargaBuku) +
//     (jumlahPulpen * hargaPulpen) +
//     (jumlahTas * hargaTas);


// const diskon = 0.10;
// const totalSetelahDiskon = totalSebelumDiskon * (1 - diskon);


// const formatRupiah = nilai =>
//     new Intl.NumberFormat("id-ID").format(nilai);

// console.log(
//     `Total harga sebelum diskon: Rp${formatRupiah(totalSebelumDiskon)}`
// );

// console.log(
//     `Total harga setelah diskon 10%: Rp${formatRupiah(totalSetelahDiskon)}`
// );

// const tabunganPerMinggu = 50000;
// const jumlahMinggu = 3;
// const pengeluaranMinggu3 = 30000;

// const totalTabungan =
//     (tabunganPerMinggu * jumlahMinggu) - pengeluaranMinggu3;

// const formatRupiah = nilai =>
//     new Intl.NumberFormat("id-ID").format(nilai);

// console.log(
//     `Total tabungan Ahmad setelah minggu ketiga adalah: Rp${formatRupiah(totalTabungan)}`
// );

const nilai = Number(prompt("Masukkan nilai ujian (0-100):"));
let kategori;

if (nilai >= 90) {
    kategori = "Nilai A";
} else if (nilai >= 80) {
    kategori = "Nilai B";
} else if (nilai >= 70) {
    kategori = "Nilai C";
} else {
    kategori = "Nilai D";
}

console.log(`Kategori: ${kategori}`);