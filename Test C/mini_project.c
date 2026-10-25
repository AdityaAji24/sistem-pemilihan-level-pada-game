#include <stdio.h>

enum Level {
    Easy =1,
    Medium ,
    Hard 
};

int main () {
    enum Level level;
    int pilihan;
    int nyawa;
    int waktu;

    printf("====pemilihan level game======\n");
    printf("1. Easy\n");
    printf("2. Medium\n");
    printf("3. Hard\n");
    printf("Pilih Level: \n");
    scanf("%d", &pilihan);

    level=(enum Level)pilihan;

    printf("\n=====Pengaturan Level Game=======\n");

    switch (level){
    case Easy:
        printf("Level  = Easy \n");
        nyawa = 5 ;
        waktu = 120;
        break;
    case Medium:
        printf("level = Medium \n");
        nyawa = 3;
        waktu = 80;
        break;
    case Hard:
        printf("level = Hard\n");
        nyawa = 1;
        waktu = 60;
        break;

    
    default:
        printf("level tidak valid\n");
        return 0;

    }

    printf("Nyawa   : %d\n", nyawa);
    printf("Waktu   : %d detik\n", waktu);

    if (nyawa == 1) {
        printf("Pesan   : Hati-hati, kamu cuma punya satu nyawa!\n");
    } else {
        printf("Pesan   : Selamat bermain!\n");
    }

    return 0;
}