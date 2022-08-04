#include<stdio.h>
void fre(int b[],int a);
int main()
{
    int n,i;
    printf("Enter number of elements=");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers=",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    fre(a,n);
    return 0;
}
void fre(int b[],int a)
{
    int i,j,f;
    for(i=0;i<a;i++)
    {
        f=1;
        for(j=i+1;j<a;j++)
        {
            if(b[i]==b[j])
             {
                 f++;
                 b[j]=0;

             }

        }
        if(b[i]!=0)
            printf("\nFrequency of %d=%d",b[i],f);

    }
}
