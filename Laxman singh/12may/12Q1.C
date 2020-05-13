#include<stdio.h>
main()
{
int arr[20],size,i,n,f=0;
printf("enter the size of the array:");
scanf("%d",&size);
printf("enter the elements of array:");
for (i=0;i<size;i++)
{
 scanf("%d",&arr[i]);
}
printf("enter the element to be searched:");
scanf("%d",&n); //n is the element which we need to find
for(i=0;i<size;i++)
{
 if(arr[i]==n)
 {
  f=1;
  break;
 }
}
if(f==1)
{
 printf("element found at position %d",i+1);
}
else
{
 printf("element not in array");
}
getch();
}
