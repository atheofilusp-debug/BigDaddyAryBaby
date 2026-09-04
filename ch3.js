// let nilai = "B";

// switch (nilai) {
//     case "A":
//         console.log("sangat Baik");
//         break;
//     case "B":
//         console.log("bagus");
//         break;
// default:
//     console.log("tidak diketahui");
// }

// 

// let rows = 5;
// let i = 1;
// do {
//     console.log(" ".repeat(rows-1)+"*".repeat(i))

// i++;
// }while(i <= rows);

// function luasPersegi(sisi) {
//     return sisi * sisi;
// }

// console.log(luasPersegi(4));

// function cekGanjilGenap(angka) {
//     if (angka % 2 === 0) {
//         console.log("genap");
//     } else {
//         console.log("ganjil");
//     }
// }

// cekGanjilGenap(6);
// cekGanjilGenap(7);

// function konversiSuhu(celcius) {
//     let fahrenheit = celcius * 1.8 + 32;
//     return fahrenheit;
// }

// let hasil = konversiSuhu(30);
// console.log(hasil);

// function cekhoki(n) {
//     if (n % 2 === 0 && n % 7 === 0) {
//         console.log("HOKI");
//     } else {
//         console.log("BIASA");
//     }
// }

// cekhoki(13);
// cekhoki(14);

// function hitungtabungan(hari) {
//     let total = 0;

//     for (let i = 1; i <= hari; i++) {
//         if (i % 2 === 1) {
//             total += 2000;
//         } else {
//             total += 5000;
//         }
//     }

//     return total;
// }

// console.log(hitungtabungan(3));

function cektilang(plat, tanggal) {
    if (plat % 2 === tanggal % 2) {
        return "AMAN";
    } else {
        return "TILANG";
    }
}

console.log(cektilang(24, 12));
console.log(cektilang(13, 20));

function hitungKopi(jumlahGelas) {
    let totalHarga = jumlahGelas * 5000;

    if (jumlahGelas > 3) {
        totalHarga -= 2000;
    }

    return totalHarga;
}

console.log(hitungKopi(2));
console.log(hitungKopi(4));