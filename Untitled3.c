#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void generatedinding(int dinding[][11])
{
    int finish=2;
    dinding[1][8]=finish;

    for (int i=0;i<11;i++) dinding[0][i]=1;
    for (int i=0;i<11;i++) dinding[1][i]=0;
    dinding[1][0]=1;
    dinding [1][8]=2;
    dinding[1][9]=1;
    for (int i=0;i<11;i++) dinding[2][i]=1;
    dinding [2][4]=0;
    for (int i=0;i<11;i++) dinding[3][i]=1;
    dinding [3][1]=0;
    dinding [3][2]=0;
    dinding [3][3]=0;
    dinding [3][4]=0;
    dinding [3][8]=0;
    dinding [3][9]=0;
    for (int i=0;i<11;i++) dinding[4][i]=1;
    dinding [4][1]=0;
    dinding [4][7]=0;
    dinding [4][9]=0;
    for (int i=0;i<11;i++) dinding[5][i]=0;
    dinding [5][0]=1;
    dinding [5][9]=1;
    for (int i=0;i<11;i++) dinding[6][i]=1;
    dinding[6][4]=0;
    for (int i=0;i<11;i++) dinding[7][i]=0;
    dinding [7][0]=1;
    dinding [7][9]=1;
    for (int i=0;i<11;i++) dinding[8][i]=1;



}

void print(int dinding[][11])
{

        for(int i=0;i<9;i++)
        {
        for(int j=0;j<11;j++)
        {
            if (dinding[i][j]==1) printf("#");
            else if(dinding[i][j]==0) printf("-");
            else if (dinding[i][j]==2) printf("F");
            else if (dinding[i][j]==3) printf("P");
        }
        printf("\n");
        }


}

void cektabrak(char c,int i,int posisi[],int dinding [][11])
{
    if (c=='w')
    {
        for (int x=0;x<i;x++)
        {
            if (dinding[posisi[0]-1][posisi[1]]==0) posisi[0]--;
        }
        dinding[posisi[0]][posisi[1]]=3;
    }

    else if (c=='d')
    {
        for (int x=0;x<i;x++)
        {
            if (dinding[posisi[0]][posisi[1]+1]==0) posisi[1]++;
        }
        dinding[posisi[0]][posisi[1]]=3;
    }

    else if (c=='a')
    {
        for (int x=0;x<i;x++)
        {
            if (dinding[posisi[0]][posisi[1]-1]==0) posisi[1]--;
        }
        dinding[posisi[0]][posisi[1]]=3;
    }

    else if (c=='s')
    {
        for (int x=0;x<i;x++)
        {
            if (dinding[posisi[0]+1][posisi[1]]==0) posisi[0]++;
        }
        dinding[posisi[0]][posisi[1]]=3;
    }
}

int main()
{
    int dinding[9][11];
    generatedinding(dinding);
    dinding [7][1]=3;
    int posisi [2]={7,1};
    print(dinding);

    char inpc;
    int inpi;
    printf("Masukkan char dan int\n");
    scanf("%c %d",&inpc,&inpi);
    while (posisi[0]!=1 && posisi[1]!=8)
        {
        system("cls");
        generatedinding(dinding);
        cektabrak(inpc,inpi,posisi,dinding);
        print(dinding);

        printf("Masukkan char dan int\n");
        scanf("%c %d",&inpc,&inpi);
        }

    printf("Selamat anda menang");





    //for(int i=0;i<11;i++) printf("%d",dinding[0][i]);
    return 0;
}
