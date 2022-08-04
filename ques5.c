#include<stdio.h>
int main()
{
    int i,n,f=0;
    printf("Enter number of elemnts=");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {
            f=1;
            printf("Adjacent dupllicate element=%d",a[i]);
            break;

        }
    }
    if(f==0)
        printf("No adjacent duplicate element found!!!!!!!");
    return 0;
}
