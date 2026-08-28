# 
# rows = 5
# while rows >= 1:
#     print("*" * rows)
#     rows -= 1

# 

# def luasPersegi(sisi):
#     return sisi * sisi

# print(luasPersegi(4))

# def cek_ganjil_genap(angka):
#     if angka % 2 == 0:
#         print("genap")
#     else:
#         print("ganjil")

# cek_ganjil_genap(6)
# cek_ganjil_genap(7)

def konversiSuhu(celcius):
    fahrenheit = celcius * 1.8 + 32
    return fahrenheit

hasil = konversiSuhu(30)
print(hasil)