#include<stdio.h>
int main()
{
    int N1,N2,N5,N10,N20,N50,N100,N200,N500,Amt;
    printf("Enter the amount: \n");
    scanf("%d",&Amt);
    printf("The number of possible 2000 notes is %d\n",Amt/2000);
    N500=Amt%2000;
    printf("The number of possible 500 notes is %d\n",N500/500);
    N200=N500%500;
    printf("The number of possible 200 notes is %d\n",N200/200);
    N100=N200%200;
    printf("The number of possible 100 notes is %d\n",N100/100);
    N50=N100%100;
    printf("The number of possible 50 notes is %d\n",N50/50);
    N20=N50%50;
    printf("The number of possible 20 notes is %d\n",N20/20);
    N10=N20%20;
    printf("The number of possible 10 notes is %d\n",N10/10);
    N5=N10%10;
    printf("The number of possible 5 notes is %d\n",N5/5);
    N2=N5%5;
    printf("The number of possible 2 notes is %d\n",N2/2);
    N1=N2%2;
    printf("The number of possible 1 notes is %d\n",N1/1);
    return 0;   
}