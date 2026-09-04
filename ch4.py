# def cekhoki(n):
#     if n % 2==0 and n % 7==0:
#         print("HOKI")
#     else:
#         print("BIASA")


# cekhoki(13)
# cekhoki(14)

def hitungKopi(jumlahGelas):
    total_harga = jumlahGelas * 5000

    if jumlahGelas > 3:
        total_harga -= 2000

    return total_harga


print(hitungKopi(2))
print(hitungKopi(4))


def tepokNyamuk(jumlah):
    for angka in range(1, jumlah + 1):
        if angka % 3 == 0:
            print("TEPOK")
        else:
            print(angka)


tepokNyamuk(5)