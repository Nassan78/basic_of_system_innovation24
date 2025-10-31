#include <stdio.h>

int main()
{
    int k;
    printf("How many sushi do you want to eat?");
    scanf("%d", &k);
    
    int l;
    printf("How many wasabi do you want?");
    scanf("%d", &l);
    
    if(k<=4)
    {
       printf("Heiomachi!");
    }   
    
    else
    {
       printf("Sorry, wait a moment please?");
    }
    
    return 0;
    
}       