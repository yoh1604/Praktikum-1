#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void bentukwall(int wall[][11])
{
    int finish=2;
    wall[1][8]=finish;

    for (int i=0;i<11;i++) wall[0][i]=1;
    for (int i=0;i<11;i++) wall[1][i]=0;
    wall[1][0]=1;
    wall [1][4]=2;
    wall[1][9]=1;
    wall[1][10]=1;
    for (int i=0;i<11;i++) wall[2][i]=1;
    wall [2][4]=0;
    wall [2][5]=0;
    wall [2][8]=0;
    wall [2][10]=1;
    for (int i=0;i<11;i++) wall[3][i]=1;
    wall [3][1]=0;
    wall [3][2]=0;
    wall [3][3]=0;
    wall [3][4]=0;
    wall [3][8]=0;
    wall [3][9]=0;
    wall [3][10]=1;
    wall [3][9]=1;
    for (int i=0;i<11;i++) wall[4][i]=1;
    wall [4][1]=0;
    wall [4][7]=0;
    wall [4][9]=0;
    wall [4][10]=1;
    for (int i=0;i<11;i++) wall[5][i]=0;
    wall [5][0]=1;
    wall [5][9]=1;
    wall [5][10]=1;
    for (int i=0;i<11;i++) wall[6][i]=1;
    wall[6][4]=0;
    for (int i=0;i<11;i++) wall[7][i]=0;
    wall [7][0]=1;
    wall [7][9]=1;
    wall [7][10]=1;
    for (int i=0;i<11;i++) wall[8][i]=1;



}

void print(int wall[][11])
{

        for(int i=0;i<9;i++)
        {
        for(int j=0;j<11;j++)
        {
            if (wall[i][j]==1) printf("#");
            else if(wall[i][j]==0) printf(" ");
            else if (wall[i][j]==2) printf("F");
            else if (wall[i][j]==3) printf("P");
        }
        printf("\n");
        }


}

void mentok(char c,int i,int posisi[],int wall [][11])
{
    if (c=='w')
    {
        for (int x=0;x<i;x++)
        {
            if (wall[posisi[0]-1][posisi[1]]==0) posisi[0]--;
        }
        wall[posisi[0]][posisi[1]]=3;
    }

    else if (c=='d')
    {
        for (int x=0;x<i;x++)
        {
            if (wall[posisi[0]][posisi[1]+1]==0) posisi[1]++;
        }
        wall[posisi[0]][posisi[1]]=3;
    }

    else if (c=='a')
    {
        for (int x=0;x<i;x++)
        {
            if (wall[posisi[0]][posisi[1]-1]==0) posisi[1]--;
        }
        wall[posisi[0]][posisi[1]]=3;
    }

    else if (c=='s')
    {
        for (int x=0;x<i;x++)
        {
            if (wall[posisi[0]+1][posisi[1]]==0) posisi[0]++;
        }
        wall[posisi[0]][posisi[1]]=3;
    }
}

int main()
{
    printf("Gunakan W/A/S/D untuk menjalankan Player ke Finish:\n");

    int wall[9][11];
    bentukwall(wall);
    wall [7][1]=3;
    int posisi [2]={7,1};
    print(wall);

    char huruf;
    int jumlahpindah;
    printf("Masukkan char dan int\n");
    scanf("%c %d",&huruf,&jumlahpindah);
    while (posisi[0]!=1 && posisi[1]!=8)
        {
        system("cls");
        bentukwall(wall);
        mentok(huruf,jumlahpindah,posisi,wall);
        print(wall);

        printf("Masukkan arah (huruf) dan langkahnya(angka)\n");
        scanf("%c %d",&huruf,&jumlahpindah);
        }

    printf("Selesai");





    //for(int i=0;i<11;i++) printf("%d",wall[0][i]);
    return 0;
}
