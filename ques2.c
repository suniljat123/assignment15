  #include<stdio.h>
  #include<limits.h>
int minimum(int b[],int a);
int main()
{
    int n,i,min;
    printf("Enter number of elements=");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers=",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    min=minimum(a,n);
    printf("Smallest number in array=%d",min);
    return 0;
}
int minimum(int b[],int a)
{
    int i,min=INT_MAX;
    for(i=0;i<a;i++)
    {
        if(b[i]<min)
            min=b[i];
    }
    return min;
}
