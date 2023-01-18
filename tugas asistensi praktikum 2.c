#include <stdio.h>

int main()
{
    char *bulan[13]= {" ", "Januari", "Februari", "Maret", "April", "Mei", "Juni", "Juli", "Agustus", "September", "Oktober", "November", "Desember"};
    int bln;

    printf("Masukkan Bulan Ke Berapa : ");
    scanf("%d", &bln);

    if (bln == 2){printf ("Bulan %s adalah bulan Relaxing", bulan[bln]);}
    else {
    if (bln > 0 && bln <= 7) {
        if(bln%2 == 0) {
            printf ("Bulan %s adalah bulan Normal", bulan[bln]);}
        else {printf ("Bulan %s adalah bulan Amazing", bulan[bln]);}
    }
    if (bln > 7 && bln <13){
        if(bln%2 == 0){
            printf ("Bulan %s adalah bulan Amazing", bulan[bln]);}
        else {printf ("Bulan %s adalah bulan Normal", bulan[bln]);}
        }
    }

    /*if(bln == 1 || bln == 3 || bln == 5 || bln == 7 || bln == 8 || bln == 10 || bln == 12) {
        printf ("Bulan %s adalah bulan Amazing", bulan[12]);
    if (bln == 2){printf ("Bulan Februari adalah bulan Relaxing");}
    if (bln == 4 || bln == 6 || bln == 9 || bln == 11){printf ("Bulan %s adalah bulan Normal", bulan [12]);}
    }*/
    return 0;
}
