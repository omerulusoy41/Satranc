#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int x,y,i,j;
    char secim,dizi[8][8];
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
            dizi[i][j]='-';
    }
    printf("SATRANC OGRETICI UYGULAMAYA HOSGELDINIZ\n--->KONUMU GORMEK ISTEDIGINIZ ELEMANIN KONUMUNU GIRIP EKRANDA GORUCEKSINIZ\n");
    printf("satranc tahtasi:\n  0 1 2 3 4 5 6 7\n");
    for(i=0;i<8;i++)
    {
        printf("%d ",i);
        for(j=0;j<8;j++)
        {
            printf("- ");
        }
        printf("\n");
    }
    printf("\nislemler\n1=Atin konumu icin a yada A ya basiniz\n2=Filin konumu icin f yada F ye basiniz\n3=kalenin konumu icin k yda K ya basiniz\n4=vezirin konumu icin v yada V giriniz\n5=Sahin konumu icin s yada S giriniz\n6=Piyonun konumu icin p yada P giriniz\nislem seciniz:");
    scanf("%c",&secim);
    if(secim=='a'||secim=='A'){
    printf("\natin konumu(once satir sonra sutun):");
    scanf("%d%d",&x,&y);
    printf("----------------------------------\natin gidebilecegi konumlar\n  0 1 2 3 4 5 6 7\n");
    for(i=0;i<8;i++)
    {
        printf("%d ",i);
        for(j=0;j<8;j++)
        {
            if(x==i&&y==j)
                printf("A ");
            else if(i==x-2&&j==y-1||i==x-2&&j==y+1||i==x-1&&j==y-2||i==x-1&&j==y+2||i==x+1&&j==y-2||i==x+1&&j==y+2||i==x+2&&j==y-1||i==x+2&&j==y+1)
            {
                printf("* ");
            }
            else printf("- ");

        }
        printf("\n");
    }
    }
    else if (secim=='f'||secim=='F')
    {

        printf("filin konumunu giriniz (once satir sonra sutun):");
        scanf("%d%d",&x,&y);
        printf("----------------------------\nfilin gidebilecegi konumlar\n  0 1 2 3 4 5 6 7\n");
        int a;
        for(i=0;i<8;i++)
        {
            a=0;
            for(j=0;j<8;j++)
            {
                while(a<8){
                if(i==x-a&&j==y-a||i==x+a&&j==y+a||i==x-a&&j==y+a||i==x+a&&j==y-a){
                   if(i!=x&&j!=y)
                    dizi[i][j]='*';
                }
                    a++;
                }
             a=0;
            }
        }
    dizi[x][y]='F';
    for(i=0;i<8;i++)
    {
        printf("%d ",i);
        for(j=0;j<8;j++)
        {
            printf("%c ",dizi[i][j]);
        }
        printf("\n");
    }

    }
    else if(secim=='k'||secim=='K')
    {
        printf("kalenin konumunu giriniz(once satir sonra sutun):");
        scanf("%d%d",&x,&y);
        printf("----------------------------\nkalenin gidebilecegi yerler\n  0 1 2 3 4 5 6 7\n");
        int a;
        for(i=0;i<8;i++)
        {
            a=0;
            for(j=0;j<8;j++)
            {
                while(a<8)
                {
                    if(i==x-a&&j==y||i==x&&j==y-a||i==x+a&&j==y||i==x&&j==y+a){
                        dizi[i][j]='*';
                    }
                    a++;
                }
                a=0;
            }
        }
        dizi[x][y]='K';
        for(i=0;i<8;i++)
    {
        printf("%d ",i);
        for(j=0;j<8;j++)
        {
            printf("%c ",dizi[i][j]);
        }
        printf("\n");
    }

   }
    else if(secim=='v'||secim=='V')
    {
        printf("vezirin konumunu giriniz(once satir sonra sutun):");
        scanf("%d%d",&x,&y);
        printf("------------------------------\nvezirin gidebilecegi yerler\n  0 1 2 3 4 5 6 7\n");
        int a;
        for(i=0;i<8;i++)
        {
            a=0;
            for(j=0;j<8;j++)
            {
                while(a<8)
                {
                    if(i==x-a&&j==y||i==x&&j==y-a||i==x+a&&j==y||i==x&&j==y+a||i==x-a&&j==y-a||i==x+a&&j==y+a||i==x-a&&j==y+a||i==x+a&&j==y-a)
                        dizi[i][j]='*';
                    a++;
                }
                a=0;
            }
        }

    dizi[x][y]='V';
            for(i=0;i<8;i++)
    {
        printf("%d ",i);
        for(j=0;j<8;j++)
        {
            printf("%c ",dizi[i][j]);
        }
        printf("\n");
    }

    }
    else if(secim=='s'||secim=='S')
    {
        printf("sahin konumu giriniz(once satir sonra sutun):");
        scanf("%d%d",&x,&y);
        printf("------------------------------\nsahin gidebilcegi konumlar\n  0 1 2 3 4 5 6 7\n");
        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
            {
                if(i==x&&j==y)
                    dizi[i][j]='S';
                else if(i==x-1&&j==y-1||i==x-1&&j==y||i==x-1&&j==y+1||i==x+1&&j==y-1||i==x+1&&j==y||i==x+1&&j==y+1||i==x&&j==y-1||i==x&&j==y+1)
                dizi[i][j]='*';
            }
        }
    for(i=0;i<8;i++)
    {
        printf("%d ",i);
        for(j=0;j<8;j++)
            printf("%c ",dizi[i][j]);
        printf("\n");
    }
    }
    else if(secim=='p'||secim=='P')
    {
        printf("piyonun konumu giriniz(once satir sonra sutun):");
        scanf("%d%d",&x,&y);
        dizi[x][y]='P';
        dizi[x-1][y]='*';
        dizi[x+1][y]='*';
        printf("-----------------------------\npiyonun gidebilcegi konumlar\n  0 1 2 3 4 5 6 7\n");
        for(i=0;i<8;i++)
        {
            printf("%d ",i);
            for(j=0;j<8;j++)
                printf("%c ",dizi[i][j]);
            printf("\n");
        }
    }
    getch();
    return 0;
}
