#include<stdio.h>
#include<cs50.h>
#include<string.h>


int main(int argc,string argv[])
{
   
    int i,n,j,m,count;
    string s;
    int ch;
    
    string key=argv[1];
  
        
        // printf("%c\n",ch);
    for(i=0,n=strlen(key);i<n;i++)
    {
        if((key[i]<65||key[i]>123) ||(key[i]>90&&key[i]<97))
         {
             printf("non alphabetical key\n");
             return 1;
         }
    }
    
  s=GetString();
  
  for(i=0,j=0,m=strlen(s);i<m;i++)  
  {
  if((s[i]<65||s[i]>123) ||(s[i]>90&&s[i]<97))
        printf("%c",s[i]);
        
  else if(s[i]>96&&s[i]<123)
        { 
            count=s[i]+(key[j]-97);
            // printf("%d",count);
            if(count>122)
               {
                   ch=count-122;
                   printf("%c",ch+96);
               }
               
             else  
                    printf("%c",s[i]+(key[j]-97));    
            
            j++;
            if(j==strlen(key))
               { 
                   j=0;
               }
                count=0;
            
        }
       
        else if(s[i]>64&&s[i]<91)
        {  
            // if(key[j])
            // s[i]=s[i]-97;
            count=(s[i]-64)+(key[j]-97);
            count=count+64;
            
            //  printf("%c ",count);
            if(count>90)
               {
                   ch=count-90;
                   printf("%c",ch+64);
               }
               
             else  
                    printf("%c",count);    
            
            j++;
            if(j==strlen(key))
               { 
                //  printf("***%d***",j);
                   j=0;
                }
            
        }
      
      
  }
    
    printf("\n");
    
   
    
    
    

}