#include<stdio.h>
int main()
{
    char a[10];
    int i,count=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        count++;
    }
    printf("%d",count);
   return 0;
}
