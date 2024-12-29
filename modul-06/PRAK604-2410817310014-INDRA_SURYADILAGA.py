sandi = str(input())
pesan = str(input())

if len(sandi) != len(pesan):
    print("Panjang kalimat berbeda, pesan palsu")
else:
    bintang = 0
    pagar = 0

    for i in range(len(sandi)):
        if sandi[i] == pesan[i]:
            if sandi[i] == ' ':
                print(" ", end="")
            else :
                print("*", end="")
                bintang += 1
        else :
            print("#", end="")
            pagar += 1

    print(f"\n* = {bintang}")
    print(f"# = {pagar}")

    if bintang >= pagar:
        print("Pesan asli")
    else:
        print("Pesan palsu")