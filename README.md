# algo
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float p,l,r,s,s1,s2,s3,s4,a,t,
luaspermukaan,volume,phi=3.14,b;
int menu;



int main()
{
    printf("=====================================\n");
    printf("   Program Volume dan Luas Permukaan\n");
    printf("           by kelompok 22\n");
    printf("=====================================\n\n");
    printf(" Menu :\n");
    printf("\t1. Balok\n");
    printf("\t2. Bola\n");
    printf("\t3. Limas Segitiga Sama Sisi\n");
    printf("\t4. Prisma Segitiga\n");
    printf("\t5. Tabung\n");
    printf("\t6. Keluar Program\n");
    printf("Pilih Menu : ");
    scanf("%d",&menu);
    switch (menu){
        case 1:{
            system("cls");
            printf("========Balok========\n");
            printf("Masukkan Panjang Balok: ");
            scanf("%f",&p);
            printf("Masukkan Lebar Balok: ");
            scanf("%f",&l);
            printf ("Masukkan Tinggi Balok : ");
            scanf("%f",&t);
            }
            volume=p*l*t;
            luaspermukaan=2*((p*l)+(p*t)+(l*t));
            printf("Volume Balok Tersebut : %.2f \n",volume);
            printf("Luas Permukaan Balok Tersebut : %.2f\n", luaspermukaan);
            break;

        case 2: {
            system("cls");
            printf("========Bola=========\n");
            printf("Masukkan jari-jari Bola : ");
            scanf("%f",&r);
            volume=4/3*phi*r*r*r;
            luaspermukaan=4*phi*r*r;
            printf("Volume Bola Tersebut : %.2f\n",volume);
            printf("Luas Permukaan Bola Tersebut : %.2f\n",luaspermukaan);
            break;
        }
        case 3: {
            system("cls");
            printf("========Limas Segitiga Sama Sisi========\n");
            printf("Masukkan alas Limas Segitiga Sama Sisi : ");
            scanf("%f",&a);
            printf("Masukkan tinggi Limas Segitiga Sama Sisi ");
            scanf("%f",&t);
            volume=1/3*a*a*t;
            luaspermukaan=a*a+(2*a*(sqrt(t*t+1/4*a*a)));
            printf("Volume Limas Segitiga Sama Sisi tersebut : %.2f\n",volume);
            printf("Luas Permukaan Limas Segitiga Sama Sisi Tersebut : %.2f\n",luaspermukaan);
            break;
        }
        case 4: {
            system("cls");
            printf("=========Prisma Segitiga Sama Sisi=========\n");
            printf("Masukkan Sisi Alas Prisma : ");
            scanf("%f",&a);
            printf("Masukan Tinggi Prisma : ");
            scanf("%f",&t);
            volume=1/2*(sqrt(a*3/4*a))*a*t;
            luaspermukaan=2*(sqrt(a*3/4*a))*a+3*(t*a);
            printf("Volume Prisma Tersebut : %.2f\n",volume);
            printf("Luas Permukaan Tersebut : %.2f\n",luaspermukaan);
            break;
        }
            case 5 : {
            system("cls");
            printf("=====Tabung=====\n");
            printf("Masukkan Jari-jari Tabung: ");
            scanf("%f",&r);
            printf("Masukkan Tinggi Tabung : ");
            scanf("%f",&t);
            volume=phi*r*r*t;
            luaspermukaan=(2*phi*r*r)+(2*phi*r);
            printf("Volume Tabung Tersebut : %.2f\n",volume);
            printf("Luas Permukaan Tabung Tersebut : %.2f\n",luaspermukaan);
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