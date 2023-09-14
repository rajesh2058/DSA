#include<stdio.h>
#include<stdlib.h>
void TOH(int ,char ,char ,char );

int main()
{
    int n;
    printf("\n enter no of disks \n");
    scanf("%d",&n);
    TOH(n,'O','D','I');
    return 0;
}
void TOH(int n,char A,char B,char C) //tower of honor
{
    if(n>0)
    {
        TOH(n-1,A,C,B);
        printf("in move disk %d from %c to %c\n",n,A,B);
        TOH(n-1,C,B,A);
    }
}
