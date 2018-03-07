#include <stdio.h>

float hasil,bil1,bil2;
int main()
{
    int menu;
    printf("================================\n");
    printf("         Program Kalkulator\n");
    printf("           by kelompok 22\n");
    printf("===============================\n\n");
    printf(" Menu :\n");
    printf("\t1. Penjumlahan\n");
    printf("\t2. Pengurangan\n");
    printf("\t3. Perkalian\n");
    printf("\t4. Pembagian\n");
    printf("\t5. Modulo\n");
    printf("\t6. Keluar Program\n");
    printf("Pilih Menu : ");
    scanf("%d",&menu);
    switch (menu){
        case 1:{
            system("cls");
            printf("--Penjumlahan--\n");
            printf("Masukkan Bilangan Pertama : ");
            scanf("%f",&bil1);
            printf("Masukkan Bilangan Kedua : ");
            scanf("%f",&bil2);;
            hasil=bil1+bil2;
            printf("Hasil Penjumlahan = %.2f", hasil);
            break;
    }
        case 2:{
            system("cls");
            printf("--Pengurangan--\n");
            printf("Masukkan Bilangan Pertama : ");
            scanf("%f",&bil1);
            printf("Masukkan Bilangan Kedua : ");
            scanf("%f",&bil2);
            hasil=bil1-bil2;
            printf("Hasil Penjumlahan = %.2f", hasil);
            break;
    }
      case 3:{
            printf("--Perkalian--\n");
            printf("Masukkan Bilangan Pertama : ");
            scanf("%f",&bil1);
            printf("Masukkan Bilangan Kedua : ");
            scanf("%f",&bil2);
            hasil=bil1*bil2;
            printf("Hasil Perkalian = %.2f", hasil);
            break;
    }
     case 4:{
            system("cls");
            printf("--Pembagian--\n");
            printf("Masukkan Bilangan Pertama : ");
            scanf("%f",&bil1);
            printf("Masukkan Bilangan Kedua : ");
            scanf("%f",&bil2);
            hasil=bil1/bil2;
            printf("Hasil Pembagian = %.2f", hasil);
            break;
     }
    case 5:{
            system("cls");
            printf("--Modulo--\n");
            printf("Masukkan Bilangan Pertama : ");
            scanf("%f",&bil1);
            printf("Masukkan Bilangan Kedua : ");
            scanf("%f",&bil2);
            int mod=(bil1/bil2);
            hasil=bil1-(mod*bil2);
            printf("Hasil Modulo = %.0f", hasil);
            break;
    }
    case 6:{
            break;
            }
    default : {
            printf("Masukkan Pilihan Yang Tersedia :)");
            }
    }
}

