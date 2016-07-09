// 25 10 5 1

#include<stdio.h>
#include<math.h>

int main()
{
    float user;
    int coins=0;
    float limit= 0.01;
    printf("o hai! How much change is owed?\n");
    scanf("%f",&user);
    // printf("%f",user);
    while(user >= limit)
    {
        if(user>=0.25)
        {
            coins++;
            user -= 0.25;
            // printf("%f",user);
        }
        else if(user>=0.10)
        {
            coins++;
            user -= 0.10;
          
        }
        else if(user>=0.05)
        {
            coins++;
            user -= 0.05;
         
        }
        else // if(user>=limit)
        {  
            coins++;
            user -= 0.01;
          
        }
        
        
        user = roundf(user * 100) / 100;
        
        // printf("%f\n",user);
    }
    printf("%d\n",coins);
    
    
}