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
    else
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
    for(int i=0; i<size; i++)
    {
        if(arr[i]==scel)
        {
           return 1;
        }

    }
    return -1;

}
