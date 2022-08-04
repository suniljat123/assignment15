#include<stdio.h>
void merge(int b[],int c[],int a);
int main()
{
    int n,i;
    printf("Enter number of elements=");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter %d numbers in Array A=",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter %d numbers in Array B=",n);
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    merge(a,b,n);
    return 0;
}
void merge(int c[],int b[],int a)
{
    int i,j=0,temp;
    for(i=a;i<a*2;i++)
    {
            b[i]=c[j];
            j++;
    }
    for(i=0;i<a*2;i++)
        for(j=i+1;j<a*2;j++)
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
    printf("\nArray in desending order=");
    for(i=0;i<a*2;i++)
        printf("%d ",b[i]);

}
