#include <stdio.h>
#include "conio.h"
#include<stdlib.h>

void nhap(float **a,int m, int n){

        int i,j;

        float x;

        for (i=0;i<m;i++)

        for (j=0;j<n;j++)

        {

                printf("a[%d][%d]=",i,j);

                scanf("%f",&x);

                a[i][j]=x;

        }

}

void xuat(float **a,int m, int n){

        int i,j;

        float x;

        for (i=0;i<m;i++)

        {

        for (j=0;j<n;j++)

        {

                printf("%5.1f",a[i][j]);

                

        }

        printf("\n");}

}

void hamcuoi(float **a,int m,int n)

{

        

        for (int j=0;j<n;j++)


        printf(" cac gia tri hang cuoi : %5.1f ",a[m-1][j]);

}

void xuatfile(float **a,int n,int m)

{

        FILE *fp;

        fp=fopen("matran1.txt","w");

        fprintf(fp,"Cac phan tu ma tran : \n");

        for(int i=0;i<m;i++){

        for(int j=0;j<n;j++)

        {

        

                fprintf(fp,"%5.1f",a[i][j]);

        }

        fprintf(fp,"\n");}

        fclose(fp);

}

main()
{

        int n,m,i,j;

        printf("Nhap so hang : ");

        scanf("%d",&m);

        printf("Nhap so cot:");

        scanf("%d",&n);

            float **a=new float *[m];

        for (i=0;i<m;i++)

                a[i]=new float [n];

        printf("\n Nhap tung phan tu cho ma tran \n");

        nhap(a,m,n);

        printf("\n In ma tran \n");

        xuat(a,m,n);

    hamcuoi(a,m,n)        ;

    xuatfile(a, n, m);
    getch();
}
