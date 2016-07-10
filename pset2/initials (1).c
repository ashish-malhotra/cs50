#include<cs50.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
   
    string s=GetString();
  
    for(int i=0,n=strlen(s);i<n;i++)
    {
        if(i==0)
         printf("%c",toupper(s[i]));
         
         if(s[i]==' ')
            printf("%c",toupper(s[i+1]));
         
         
            
    }
    printf("\n");
    // printf("total no of spaces: %d\n",count);
    // printf("%c\n",toupper(s[0]));
    
    
}