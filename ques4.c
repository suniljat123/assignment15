#include<stdio.h>
void rotate(int b[],int a,int pos,int d);
int main()
{
    int n,i,pos,d;
    printf("Enter number of elements=");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers in Array=",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nHow many position you want to rotate array=");
    scanf("%d",&pos);
    printf("\nIn which direction you want to rotate Array Element?\nPress 1 for Left Direction:\nPress 2 for Right Direction:");
    scanf("%d",&d);
    printf("Original Array=");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
     rotate(a,n,pos,d);//function calling
    printf("\nArray after rotate %d position=",pos);
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
void rotate(int b[],int a,int pos,int d)
{
    int i,j=0,temp;
    switch(d)
    {
        case 1:
            if(pos>a)
                printf("\nError...Position is greater than array size");
            else
            for(i=1;i<=pos;i++)
            {
                temp=b[0];
                for(j=0;j<a;j++)
                {
                    b[j]=b[j+1];
                }
                b[j-1]=temp;
            }
            break;
        case 2:
            if(a>=pos)
            for(i=1;i<=pos;i++)
            {
                temp=b[a-1];
                for(j=a-1;j>0;j--)
                {
                    b[j]=b[j-1];
                }
                b[0]=temp;
            }
            else
                printf("\nError...Position is greater than array size");
            break;
            default:
                printf("\nError...No Direction found");

    }
}
