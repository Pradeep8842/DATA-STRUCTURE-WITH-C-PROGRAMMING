#include<stdio.h>
#include<conio.h>
struct myarray{
int total_size;
int used_size;
int*ptr;
};
int main()
{
    struct myarray marks;
    createarray(&marks,10,4);
    setval(&marks);
    show(&marks);
}
void createarray(struct myarray*a,int tsize,int usize)
{
    a->total_size=tsize;
    a->used_size=usize;
    a->ptr=(int*)malloc(tsize*sizeof(int));
}
void setval(struct myarray*a)
{
    int n;
    printf("Enter elements of array:\n");
    for(int i=0;i<(a->used_size);i++)
    {
        scanf("%d",&n);
        (a->ptr)[i]=n;
    }
}
void show(struct myarray*a)
{
    int sum=0;
    printf("Elements of array:\n");
    for(int i=0;i<(a->used_size);i++)
    {
        printf("%d\n",(a->ptr)[i]);
    }
    for(int i=0;i<(a->used_size);i++)
    {
        sum+=(a->ptr)[i];
    }
    printf("Sum of given arrays elements:%d",sum);
}
