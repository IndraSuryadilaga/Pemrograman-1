bil_1, bil_2 = map(int, input().split())
total_semua = 0

for i in range(1, bil_1 + 1):
    print("(", end="")
    total_baris = 0
    for j in range(i, 0, -1):
        print(f"{j} * {bil_2}", end="")
        total_baris += j * bil_2
        if j > 1:
            print(") + (", end="")

    print(f") = {total_baris}")
    total_semua += total_baris

print(total_semua)