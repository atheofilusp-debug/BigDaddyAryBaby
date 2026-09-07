harga_buku = 45000
jumlah_buku = 3

harga_pulpen = 7500
jumlah_pulpen = 2

harga_tas = 120000
jumlah_tas = 1

total_sebelum_diskon = (
    (jumlah_buku * harga_buku)
    + (jumlah_pulpen * harga_pulpen)
    + (jumlah_tas * harga_tas)
)

diskon = 0.10
total_setelah_diskon = total_sebelum_diskon * (1 - diskon)

print(f"Total harga sebelum diskon: Rp{total_sebelum_diskon:,.0f}".replace(",", "."))
print(f"Total harga setelah diskon 10%: Rp{total_setelah_diskon:,.0f}".replace(",", "."))