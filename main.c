#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*KAMUS*/
    int liter3;
    int liter5;
    int pilihan;

    liter3 = 0;
    liter5 = 0;

    /*ALGORITMA*/
    while (liter5 != 4) {
        printf("-----------------GAME ISI AIR-------------------\n");
        printf("Air di ember 3 liter: %d", liter3);
        printf("\nAir di ember 5 liter: %d", liter5);
        printf("\n------------------------------------------------\n");
        printf("1. Isi penuh ember 3 liter\n2. Isi penuh ember 5 liter\n3. Tuang ember 3 liter ke ember 5 liter\n4. Tuang ember 5 liter ke ember 3 liter\n5. Buang isi ember 3 liter\n6. Buang isi ember 5 liter\n\n");
        printf("Masukkan Pilihan Kamu!\n");
        scanf("%d", &pilihan);
        if(pilihan == 1) {
            liter3 = liter3 + 3;
            if (liter3 > 3) {
                liter3 =3;
            }
        }
        else if (pilihan == 2) {
            liter5 = liter5 + 5;
            if (liter5 > 5) {
                liter5 =5;
            }
        }
        else if (pilihan == 3) {
            liter5 = liter5 + liter3;
            liter3 = 0;
            if (liter5 > 5) {
                liter3 = liter5-5;
                liter5 =5;
            }
        }
        else if (pilihan == 4) {
            liter3 = liter3 + liter5;
            liter5 = 0;
            if (liter3 > 3) {
                liter5 = liter3-3;
                liter3 = 3;
            }
        }
        else if (pilihan == 5) {
            liter3 = 0;
        }
        else if (pilihan == 6) {
            liter5 = 0;
        }
        else {
            printf("Pilihan yang anda masukkan salah, ulangi kembali!");
        }
        printf("\n\n");
    }
    return 0;
}
