"""
 _____ __________ ___   ____  _ _____ 
|  ___|___ |___  ( _ ) / ___|/ |___  |
| |_    |_ \  / // _ \/\___ \| |  / / 
|  _|  ___) |/ /| (_>  <___) | | / /  
|_|   |____//_/  \___/\|____/|_|/_/ 

"""

def main(): 
    angka = int(input("Masukkan angka : "))
    if angka >= 0 and angka <= 100:
        if angka >= 95:
            grade = "A"
            keterangan = "Amat Baik"
        elif angka >= 85:
            grade = "B"
            keterangan = "Baik"
        elif angka >= 75:
            grade = "C"
            keterangan = "Cukup Baik"
        elif angka >= 65:
            grade = "D"
            keterangan = "Cukup"
        else:
            grade = "E"
            keterangan = "Kurang"
        
        print(25*"=" + f"\nAngka anda\t: {angka}\nGrade\t\t: {grade}\nKeterangan\t: {keterangan}\n" + 25*"=")

        ulang = input("\nApakah anda ingin mengulangi program ? Y/N : ")
        if ulang.lower() == "y" or ulang.lower() == "yes": main()
    else:
        print("Angka anda kurang/melebihi batas silahkan ulangi\n")
        main()

main()
