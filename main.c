#include <stdio.h>
#include <stdlib.h>

 /* Nama    : Ardhika Rafi Pratama
    Kelompok: 4115
    Matkul  : Dasar Pemograman
    Judul   : Indentifikasi Tipe Data
    Tanggal : 20 September 2016*/
int main()
{
    printf("\t\t=MENGHITUNG LUAS DAN KELILING SEGITIGA=\n\n\n");
    //kamus
    int tinggi;
    int alas;
    int sisi_miring;
    //Input
    printf("Masukan tinggi segitiga:");
    scanf("%d",&tinggi);
    printf("Masukan alas segitiga:");
    scanf("%d",&alas);
    printf("Masukan sisi miring segitiga:");
    scanf("%d",&sisi_miring);
    //Tampilan
    printf("   \n\n\n\n");
    printf("Diketahui: \n\n");
    printf("Tinggi = %d\n",tinggi);
    printf("Alas = %d\n",alas);
    printf("Sisi Miring = %d\n",sisi_miring);
    printf("   \n\n\n\n");
    float luas = 0.5*tinggi*alas;
    int keliling = tinggi+alas+sisi_miring;
    printf("Rumus Luas Segitiga = 0.5*%d*%d = %.lf \n",tinggi,alas,luas);
    printf("Rumus Keliling Segitiga = %d +%d +%d = %d \n",tinggi,alas,sisi_miring,keliling);
    return 0;
}
