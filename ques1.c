  #include<stdio.h>
  #include<limits.h>
int maximum(int b[],int a);
int main()
{
    int n,i,j,max;
    printf("Enter number of elements=");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers=",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    max=maximum(a,n);
    printf("Greatest number in array=%d",max);
    return 0;
}
int maximum(int b[],int a)
{
    int i,max=INT_MIN;
    for(i=0;i<a;i++)
    {
        if(b[i]>max)
            max=b[i];
    }
    return max;
}
