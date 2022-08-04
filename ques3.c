#include<stdio.h>
int* sort(int b[],int a);
int main()
{
    int n,i,min;
    printf("Enter number of elements=");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers=",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int *b=sort(a,n);
    printf("Array in ascending order=");
    for(i=0;i<n;i++)
        printf("%d ",b[i]);
    return 0;
}
int* sort(int b[],int a)
{
    int i,j,temp;
    for(i=0;i<a;i++)
    {
        for(j=i+1;j<a;j++)
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
    }
    return b;
}
