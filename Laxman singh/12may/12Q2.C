#include<stdio.h>
main()
{
 int arr[20],i,j,k,size;
clrscr();
printf("enter the size of the array:");
scanf("%d",&size);
printf("enter the elements for array now :");

for(i=0;i<size;i++)
{
 scanf("%d",&arr[i]);
}

for(i=0;i<size;i++)
{
 for(j=i+1;j<size;j++)
 {
  if(arr[i]==arr[j])
   {
    for(k=j;k<size;k++)
     {
      arr[k]=arr[k+1];
     }
     size--;
     j--;
   }
 }
}

printf("array elements after deleting duplicates :");

for(i=0;i<size;i++)
{
 printf("%d",arr[i]);
}
getch();
}