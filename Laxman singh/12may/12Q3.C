#include<stdio.h>
main()
{
 int a[10],n,i;      clrscr();
 printf("enter the number to convert:");
 scanf("%d",&n);

 for(i=0;n>0;i++)
 {
  a[i]=n%2;
  n=n/2;

 }

 printf("\n binary of given number is=");
 for (i=i-1;i>=0;i--)
 {
  printf("%d",a[i]);
 }
getch();
}