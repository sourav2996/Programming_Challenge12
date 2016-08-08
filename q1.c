#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,i=0,j=0,p=0;
char a[10][20],b[20],c[20];
printf("Enter the number of strings you want to enter\n");
scanf("%d",&n);
for ( i=0;i<n;i++)
{
    printf("Enter the string of characters\n");
    scanf("%s",&a[i]);
    }
    int k=0;
    for (i=0;i<n;i++)
    {
        for(k=0;a[i][k]!='\0';k++)
        {
            if(k%2==0)
            b[j++]=a[i][k];
            else
            c[p++]=a[i][k];
    }
    b[j]='\0';
    c[p]='\0';
    printf("%s %s",b,c);
    printf("\n");
    j=0;p=0;
}//end of outer for
return 0;
}//end of main()
