menu = 1

while menu != 5:
    print("Pilih Program\n1.Penjumlahan\n2.Pengurangan\n3.Perkalian\n4.Pembagian\n5.Exit\nMasukan Pilihan : ", end="")
    menu = int(input())
    
    if menu >= 1 and menu <= 4:
        bil_1 = float(input("Masukkan Nilai pertama : "))
        bil_2 = float(input("Masukkan Nilai kedua   : "))

        if menu == 1:
            hasil = bil_1 + bil_2
            print(f"Hasil Pertambahan anatara {bil_1:.2f} dengan {bil_2:.2f} adalah {hasil:.2f} \n")
        elif menu == 2:
            hasil = bil_1 - bil_2
            print(f"Hasil Pengurangan anatara {bil_1:.2f} dengan {bil_2:.2f} adalah {hasil:.2f} \n")
        elif menu == 3:
            hasil = bil_1 * bil_2
            print(f"Hasil Perkalian anatara {bil_1:.2f} dengan {bil_2:.2f} adalah {hasil:.2f} \n")
        elif menu == 4:
            hasil = bil_1 / bil_2
            print(f"Hasil Pembagian anatara {bil_1:.2f} dengan {bil_2:.2f} adalah {hasil:.2f} \n")
    
    elif menu == 5:
        print("Terimakasih, telah menggunakan kalkulator Indra Suryadilaga \n")
        break
    else:
        print("Input anda salah, silahkan coba lagi \n")