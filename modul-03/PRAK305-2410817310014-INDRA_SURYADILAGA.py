jumlah_detik = int(input())
jam = jumlah_detik // 3600
menit = (jumlah_detik % 3600) // 60
detik = jumlah_detik % 60

if jam >= 24:
    hari = jam // 24
    jam = jam % 24
    output = f"{hari} hari {jam:02}:{menit:02}:{detik:02}"
else:
    output = f"{jam:02}:{menit:02}:{detik:02}"
print(output)
