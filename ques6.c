#include<stdio.h>
int* rev(int b[],int a);
int main()
{
    int n,i;
    printf("Enter number of elements=");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers=",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int *b=rev(a,n);
    printf("Array in reverse order=");
    for(i=0;i<n;i++)
        printf("%d ",b[i]);
    return 0;
}
int* rev(int b[],int a)
{
    int i,j,temp;
    for(i=0,j=a-1;i<j;i++,j--)
    {
        temp=b[i];
        b[i]=b[j];
        b[j]=temp;
    }
    return b;
}
