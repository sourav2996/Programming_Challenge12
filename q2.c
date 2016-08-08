#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[10][50],b[50];
    char t;
    int i=0,j=1,p=0,flag=0,c=0,k=0,n=0,l=0;
    printf("Enter the number of strings you want to enter\n");
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        printf("Enter a string of characters\n");
        scanf("%s",a[k]);
    }
    for(k=0;k<n;k++)
    {
    flag=0;
    i=0;
        strcpy(b,a[k]);
        l = strlen(a[k]) - 1;

        while(i < l )
    {
        //p=i+1;
        j=1;
        while((i+j)<l)
        {
            if( b[i] != b[i+j])
            {
                t=b[i];
                b[i]=b[i+j];
                b[i+j]=t;
                break;
            }
            else
            j++;
        }

        c=0;
        while(c<=i)
        {
            if( b[c] == a[k][c])
            flag =1;

            c++;
        }
        if(flag == 1)
        {
            t=b[i];
            b[i]=b[i+j];
            b[i+j]=t;
        }
        i++;

        }//end of while
        c=0;
        flag=0;
        if(a[k][l]==b[i])
        {
        while(c<i)
        {
            t=b[i];
            b[i]=b[c];
            b[c]=t;
            int s=0;
            while(s<i)
            {
                if( a[k][s]==b[s])
                {
                    t=b[i];
                    b[i]=b[c];
                    b[c]=t;
                    break;
                }
                else
                {
                    flag=1;
                    break;
                }
                s++;
                }

                if(flag==1)
                break;

                c++;

            }
        }
        flag=0;
        for(i=0;i<=l;i++)
        {
            if(a[k][i]==b[i])
            {
                flag=1;
                break;

            }
        }
        if(flag==1)
        printf("Not Possible\n\n");
        else
        {
        printf("\n\n");
        puts(b);
        }
        }//end of for loop

            return 0;


        }//end of main()




