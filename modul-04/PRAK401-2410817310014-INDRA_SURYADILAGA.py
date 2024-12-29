bil_kelipatan, tanda = map(str, input().split())
bil_kelipatan = int(bil_kelipatan)
bilangan = 1

while bilangan < 51:
    if bilangan % bil_kelipatan == 0:
        print(tanda, end=" ")
    else:
        print(bilangan, end=" ")
    bilangan += 1