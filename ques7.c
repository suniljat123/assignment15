#include<stdio.h>
int duplicate(int b[],int a);
int main()
{
    int n,i;
    printf("Enter number of elements=");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers=",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int b=duplicate(a,n);
    printf("Total number Duplicate elements in  Array=%d",b);
    return 0;
}
int duplicate(int b[],int a)
{
    int i,j,cnt=0;
    for(i=0;i<a;i++)
    {
        for(j=i+1;j<a;j++)
        {
            if((b[i]==b[j])&&b[i]!=0)
             {
                cnt++;
                b[j]=0;
                break;
             }
        }
    }
    return cnt;
}
