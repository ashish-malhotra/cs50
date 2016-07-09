#include<stdio.h>
#include<cs50.h>
int main()
{
    int height=24;
    while(height>23)
    { 
       printf("height: ");
       height=GetInt();
    }
    
    for(int i=2;i<=height+1;i++)
    {
        for(int j=0;j<=height-i;j++)
          printf(" ");
        for(int k=i;k>0;k--)
         printf("#");
        printf("\n")  ;
    }
    
    
}