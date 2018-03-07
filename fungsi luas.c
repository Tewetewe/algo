#include <stdio.h>
int main()
{
    int menu;
    float luasPersegiPanjang(float p, float l);
    float kllPersegiPanjang(float p, float l);
    float luasSegitiga(float s1, float s2, float s3);
    float kllSegitiga(float s1, float s2, float s3);
    float luasLingkaran(float r);
    float kllLingkaran(float r);
    float luasTrapesium(float a, float b, float t);
    float kllTrapesium(float a, float b, float t, float sisi);
    float luasJajargenjang(float a, float t);
    float kllJajargenjang(float a, float sisi );
    float luas,keliling,s,p,l,s1,s2,s3,r,a,b,t,sisi;
    printf("=====================================\n");
    printf("         Program Luas dan Keliling\n");
    printf("           by kelompok 22\n");
    printf("=====================================\n\n");
    printf(" Menu :\n");
    printf("\t1. Persegi Panjang\n");
    printf("\t2. Segitiga Sembarang\n");
    printf("\t3. Lingkaran\n");
    printf("\t4. Trapesium\n");
    printf("\t5. Jajargenjang\n");
    printf("\t6. Keluar Program\n");
    printf("Pilih Menu : ");
    scanf("%d",&menu);
    switch (menu){
        case 1:{
            system("cls");
            printf("Masukkan Panjang : ");
            scanf("%f",&p);
            printf("Masukkan Lebar : ");
            scanf("%f",&l);
            luas=luasPersegiPanjang(p,l);
            keliling=kllPersegiPanjang(p,l);
            printf("Luas Persegi Panjang Tersebut : %.2f \n",luas);
            printf("Keliling Persegi Panjang Tersebut : %.2f\n",keliling);
            break;
        }
        case 2: {
            system("cls");
            printf("Masukkan Sisi A Segitiga : ");
            scanf("%f",&s1);
            printf("Masukkan Sisi B Segitiga : ");
            scanf("%f",&s2);
            printf("Masukkan Sisi C Segitiga : ");
            scanf("%f",&s3);
            luas=luasSegitiga(s1,s2,s3);
            keliling=kllSegitiga(s1,s2,s3);
            printf("Luas Segitiga Sembarang Tersebut : %.2f\n",luas);
            printf("Keliling Segitiga Sembarang Tersebut : %.2f\n",keliling);
            break;
        }
        case 3: {
            system("cls");
            printf("Masukkan Jari-jari Lingkaran : ");
            scanf("%f",&r);
            luas=luasLingkaran(r);
            keliling=kllLingkaran(r);
            printf("Luas Lingkaran Tersebut : %.2f\n",luas);
            printf("Keliling Lingkaran Tersebut : %.2f\n",keliling);
            break;
        }
        case 4: {
            system("cls");
            printf("Masukkan Alas Trapesium : ");
            scanf("%f",&a);
            printf("Masukan Atap Trapesium : ");
            scanf("f",&b);
            printf("Masukkan Tinggi Trapesum : ");
            scanf("%f",&t);
            printf("Masukkan panjang sisi miring : ");
            scanf("%f",&sisi);
            luas=luasTrapesium(a,b,t);
            keliling=kllTrapesium(a,b,t,sisi);
            printf("Luas Trapesium Tersebut : %.2f\n",luas);
            printf("Keliling Trapesium Tersebut : %.2f\n",keliling);
            break;
        }
            case 5 : {
            system("cls");
            printf("Masukkan Sisi Alas Jajargenjang: ");
            scanf("%f",&a);
            printf("Masukkan Tinggi Jajargenjang : ");
            scanf("%f",&t);
            printf("Masukkan Sisi 1 Jajargenjang : ");
            scanf("%f",&sisi);
            luas=luasJajargenjang(a,t);
            keliling=kllJajargenjang(a,sisi);
            printf("Luas Jajargenjang Tersebut : %.2f\n",luas);
            printf("Keliling Jajargenjang Tersebut : %.2f\n",keliling);
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
float luas,keliling,s;
float luasPersegiPanjang(float p, float l){
    luas=p*l;
    return luas;
}
float kllPersegiPanjang(float p, float l){
    keliling=2*(p+l);
    return keliling;
}
float luasSegitiga(float s1, float s2, float s3){
    s=(s1+s2+s3)/2;
    luas=sqrt(s*(s-s2)*(s-s2)*(s-s3));
    return keliling;
}
float kllSegitiga(float s1, float s2, float s3){
    keliling=s1+s2+s3;
    return keliling;
}
float luasLingkaran(float r){
    luas=3.14*r*r;
    return luas;
}
float kllLingkaran(float r){
    keliling=2*3.14*r;
    return keliling;
}
float luasTrapesium(float a, float b, float t){
    luas=0.5*(a+b)*t;
    return luas;
}
float kllTrapesium(float a, float b, float t, float sisi){
    keliling=a+b+t+sisi;
    return keliling;
}
float luasJajargenjang(float a, float t){
    luas=a*t;
    return luas;
}
float kllJajargenjang(float a, float sisi){
    keliling=2*(a+sisi);
    return keliling;
}
