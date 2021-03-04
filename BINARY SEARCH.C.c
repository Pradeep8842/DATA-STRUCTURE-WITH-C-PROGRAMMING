#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[30]= {3,5,8,10,13};
    int size=5;
    int scel;
    printf("Elements of array......\n");
    display(arr,size);
    printf("Enter a element to be searched:\n");
    scanf("%d",&scel);
    int searchindex=search(arr,size,scel);
    if(searchindex==1)
    {
        printf("Search is successful..........");
    }
    else if(searchindex==-1)
    {
        printf("Search is not successful..........");
    }
    return 0;
}
int display(int arr[],int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
int search(int arr[],int size,int scel)
{
   int low=0;
   int high=size-1;
   int mid;
   while(low<high)
   {
   mid=(low+high)/2;
   if(arr[mid]<scel)
   {
   low=mid;
   }
   else if(arr[mid]>scel)
   {
   low=0;
   high=mid;
   }
   else if(arr[mid]==scel)
   {
   return 1;
   }
   }
    return -1;

}
