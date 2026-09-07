# harga_buku = 45000
# jumlah_buku = 3

# harga_pulpen = 7500
# jumlah_pulpen = 2

# harga_tas = 120000
# jumlah_tas = 1

# total_sebelum_diskon = (
#     (jumlah_buku * harga_buku)
#     + (jumlah_pulpen * harga_pulpen)
#     + (jumlah_tas * harga_tas)
# )

# diskon = 0.10
# total_setelah_diskon = total_sebelum_diskon * (1 - diskon)

# print(f"Total harga sebelum diskon: Rp{total_sebelum_diskon:,.0f}".replace(",", "."))
# print(f"Total harga setelah diskon 10%: Rp{total_setelah_diskon:,.0f}".replace(",", "."))

# tabungan_per_minggu = 50000
# jumlah_minggu = 3
# pengeluaran_minggu_3 = 30000

# total_tabungan = (tabungan_per_minggu * jumlah_minggu) - pengeluaran_minggu_3

# print(f"Total tabungan Ahmad setelah minggu ketiga adalah: Rp{total_tabungan:,.0f}".replace(",", "."))

# umur = 14

# if umur >= 17:
#     print("Anda boleh membuat KTP.")
# else:
#     print("Anda belum cukup umur untuk membuat KTP.")

# nilai = 85

# if nilai == 100:
#     print("Nilai Sempurna")
# elif nilai >= 75:
#     print("Lulus")
# else:
#     print("Tidak Lulus")

nilai = float(input("Masukkan nilai ujian (0-100): "))

if nilai >= 90:
    kategori = "Nilai A"
elif nilai >= 80:
    kategori = "Nilai B"
elif nilai >= 70:
    kategori = "Nilai C"
else:
    kategori = "Nilai D"

print(f"Kategori: {kategori}")