#include<stdio.h>
void unique(int b[],int a);
int main()
{
    int n,i;
    printf("Enter number of elements=");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers=",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    unique(a,n);
    return 0;
}
void unique(int b[],int a)
{
    int i,j,f;
    printf("Unique elements=");
    for(i=0;i<a;i++)
    {
        f=0;
        for(j=i+1;j<a;j++)
        {
            if(b[i]==b[j])
             {
                 f=1;
                b[j]=0;

             }

        }
         if(f==0&&b[i]!=0)
            printf("%d ",b[i]);
    }
}
