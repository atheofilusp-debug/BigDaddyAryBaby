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

const rows = 5;
for (let i = 1; i <= rows; i++) {
    console.log(" ".repeat(rows - i) + "*".repeat(2 * i - 1));
}