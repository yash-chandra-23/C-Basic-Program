#include<stdio.h>
void select (int n,int s[],int f[])
{
    printf("Selected activites \n");
    int i=0,j;
    printf("A %d",i);
    for(j=1;j<n;j++)
    {
        if(s[j]>=f[i])
        {
            printf("A %d",j);
            i=j;
        }
    }
}
int main()
{
    int s[100],f[100];
    int n;
    printf("Enter the  size of the array \n");
    scanf("%d",&n);
    printf("Enter the starting time of process \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    printf("Enter the ending time in ascending order \n");
    for(int j=0;j<n;j++)
    {
        scanf("%d",&f[j]);
    }
    select(n,s,f);
}
