#include <stdio.h>
void menu();
void balok();
void bola();
void limas();
void prisma();
void tabung();
void volumebola();
int main()
{
    menu();
}
void menu()
{
    int menu;
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
            balok();
            break;
        }
        case 2: {
            system("cls");
            bola();
            break;
        }
        case 3: {
            system("cls");
            limas();
            break;
        }
        case 4: {
            system("cls");
            prisma();
            break;
        }
            case 5 : {
            system("cls");
            tabung();
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
float p,l,t,volume,luaspermukaan,r,a,t1,a1;
void balok(){
    printf("========Balok========\n");
    printf("Masukkan Panjang Balok: ");
    scanf("%f",&p);
    printf("Masukkan Lebar Balok: ");
    scanf("%f",&l);
    printf ("Masukkan Tinggi Balok : ");
    scanf("%f",&t);
    volume=p*l*t;
    luaspermukaan=2*((p*l)+(p*t)+(l*t));
    printf("Volume Balok Tersebut : %.2f \n",volume);
    printf("Luas Permukaan Balok Tersebut : %.2f\n", luaspermukaan);
}
void bola(){
    printf("========Bola=========\n");
    printf("Masukkan jari-jari Bola : ");
    scanf("%f",&r);
    volume=4/3*3.14*r*r*r;
    luaspermukaan=4*3.14*r*r;
    printf("Volume Bola Tersebut : %.2f\n",volume);
    printf("Luas Permukaan Bola Tersebut : %.2f\n",luaspermukaan);
}
void limas(){
    printf("========Limas Segitiga Sama Sisi========\n");
    printf("Masukkan alas Limas Segitiga Sama Sisi : ");
    scanf("%f",&a);
    printf("Masukkan tinggi Limas Segitiga Sama Sisi : ");
    scanf("%f",&t);
    printf("Masukkan tinggi sisi limas : ");
    scanf("f",&t1);
    volume=1/3*a*a*t;
    luaspermukaan=(1/2*a*t)+(3*(1/2*a*t1));
    printf("Volume Limas Segitiga Sama Sisi tersebut : %.2f\n",volume);
    printf("Luas Permukaan Limas Segitiga Sama Sisi Tersebut : %.2f\n",luaspermukaan);
}
void prisma(){
    printf("=========Prisma Segitiga===========\n");
    printf("Masukkan sisi alas Prisma Segitiga : ");
    scanf("%f",&a);
    printf("Masukkan tinggi alas Prisma Segitiga : ");
    scanf("f",&t1);
    printf("Masukkan tinggi Prisma Segitiga : ");
    scanf("f",&t);
    volume=(1/2*a*t1)*t;
    luaspermukaan=(2*(1/2*a*t1))+(3*(a*t));
}
void tabung(){
    printf("=====Tabung=====\n");
    printf("Masukkan Jari-jari Tabung: ");
    scanf("%f",&r);
    printf("Masukkan Tinggi Tabung : ");
    scanf("%f",&t);
    volume=3.14*r*r*t;
    luaspermukaan=(2*3.14*r*r)+(2*3.14*r);
    printf("Volume Tabung Tersebut : %.2f\n",volume);
    printf("Luas Permukaan Tabung Tersebut : %.2f\n",luaspermukaan);
}
