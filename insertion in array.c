#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[100]= {2,5,7,9,10};
    int size=5;
    printf("Elements of array before insertion......\n");
    display(arr,size);
    int capacity=10;
    int index=2;
    int element=4;
    insertion(arr,size,capacity,index,element);
    size+=1;
    printf("Elements of array after insertion......\n");
    printf("Inserted element is %d at position %d \n",element,index);
    display(arr,size);
    return 0;
}
void display(int arr[],int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("---------------------------------------------------------------------------------\n");
}
int insertion(int arr[],int size,int capacity,int index,int element)
{
    if(size>=capacity)
    {
      printf("insertion is not succcessful ");
    }
    for(int i=size-1; i>=index; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
}
