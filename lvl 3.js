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

function konversiSuhu(celcius) {
    let fahrenheit = celcius * 1.8 + 32;
    return fahrenheit;
}

let hasil = konversiSuhu(30);
console.log(hasil);