#include<string.h>
#include<stdio.h>
#include<cs50.h>

int main(int argsc,string argsv[])
{
    int k;
    int j=k=atoi(argsv[1]);
    if(k>26)
        k=k%26;
    
    string s = GetString();
    
    for(int i=0,n=strlen(s);i<n;i++)
    {
        k=j;
        if(s[i]==' ')
         {  printf(" ");
             continue;
         }
       
        if( (s[i]<65||s[i]>123) ||(s[i]>90&&s[i]<97) )
          printf("%c",s[i]);
         
        else if(s[i]+k>97 && s[i]+k<123)
          printf("%c",s[i]+k);
          
        else if((s[i]+k)>=123)
         {
             k=(s[i]+k)%97;
             k=(k+1)%26;
             printf("%c",96+k);
         }
         
        else if(s[i]+k>65 && s[i]+k<91)
            printf("%c",s[i]+k);
            
        else if(s[i]+k>=91&&s[i]+k<97)
         {
             k=(s[i]+k)%65;
             k=(k+1)%26;
             printf("%c",64+k);
         }
         else 
            printf("%c",s[i]);
        
        
    }
    
    printf("\n");
    
    
    
}