#include<stdio.h>
int main()
{
int total=0;
float p;
int arr[5];
for(int i=0;i<5;i++)
{
 printf("Enter the subject %d mark:",i+1);
 scanf("%d",&arr[i]);
}
for(int j=0;j<5;j++)
{
 total+=arr[j];
}
printf("The Total Mark is:%d\n",total);
printf("Average:%d\n",total/5);
p=total/5;
printf("Percentage:%.2f\n",p);
return 0;
}
