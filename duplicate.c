#include<stdio.h>
int main()
{
int ar[5],i,j,duplicate=0;
printf("enter the elements");
for(i=0;i<5;i++)
{
    scanf("%d" ,&ar[i]);
}
for(i=0;i<5;i++)
{
for(j=i+1;j<5;j++)
{
    if(ar[i]==ar[j])
    duplicate=1;
}
}
if(duplicate)
printf("duplicate exist");
else
printf(" dublicate not exist");
return 0 ;
}
