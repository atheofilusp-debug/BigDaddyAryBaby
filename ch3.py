# def cekhoki(n):
#     if n % 2==0 and n % 7==0:
#         print("HOKI")
#     else:
#         print("BIASA")


# cekhoki(13)
# cekhoki(14)

# for i in range(1, hari + 1):
#         if i % 2 == 1:
#             total += 2000
#         else:
#             total += 5000

#     return total


# print(hitungtabungan(3))

def cektilang(plat, tanggal):
    if (plat%2 == tanggal%2):
        return "AMAN"
    else:
        return "TILANG"

print(cektilang(24, 12))
print(cektilang(13, 20))
