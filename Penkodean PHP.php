<!-- tugas Penkodean PHP (X RPL) -->

<?php
<!DOCTYPE html>
<html lang="id">
<head>
    <meta charset="UTF-8">
    <title>Konversi Nilai</title>
</head>
<body>
    <h1>Cek Usia dan Diskon Belanja</h1>

    <?php
    // Contoh data
    $usia = 20;
    $totalBelanja = 600000;

    // Percabangan cek usia
    if ($usia < 13) {
        $kategoriUsia = "Anak-anak";
    } elseif ($usia <= 17) {
        $kategoriUsia = "Remaja";
    } elseif ($usia <= 59) {
        $kategoriUsia = "Dewasa";
    } else {
        $kategoriUsia = "Lansia";
    }

    // Percabangan diskon belanja
    if ($totalBelanja >= 500000) {
        $persentaseDiskon = 20;
    } elseif ($totalBelanja >= 300000) {
        $persentaseDiskon = 15;
    } elseif ($totalBelanja >= 100000) {
        $persentaseDiskon = 10;
    } else {
        $persentaseDiskon = 0;
    }

    $jumlahDiskon = $totalBelanja * $persentaseDiskon / 100;
    $totalBayar = $totalBelanja - $jumlahDiskon;
    ?>

    <h2>Hasil Cek Usia</h2>
    <p>Usia: <?= $usia; ?> tahun</p>
    <p>Kategori: <?= $kategoriUsia; ?></p>

    <h2>Hasil Diskon Belanja</h2>
    <p>Total belanja:
        Rp<?= number_format($totalBelanja, 0, ',', '.'); ?>
    </p>

    <p>Diskon: <?= $persentaseDiskon; ?>%</p>

    <p>Jumlah diskon:
        Rp<?= number_format($jumlahDiskon, 0, ',', '.'); ?>
    </p>

    <p>Total yang harus dibayar:
        Rp<?= number_format($totalBayar, 0, ',', '.'); ?>
    </p>
</body>
</html>