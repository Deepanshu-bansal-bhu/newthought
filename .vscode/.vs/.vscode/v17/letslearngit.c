#include <stdio.h>
int swap (int *i,int *j)
{
    int *temp;
    *temp=*i;
    *i=*j;
    *j=*temp;
}
int main() {
   int arr[8]={1,2,3,4,5,6,7,8};
   for (int i=0;i<=3;i++)
   {
       swap (arr+2*i,arr+2*i+1);
   }
   for (int j=0;j<=7;j++)
   printf("%d\n",arr[j]); 
    return 0;
}