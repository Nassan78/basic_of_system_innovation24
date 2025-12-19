#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    
    int intelligence = 7 ;
    int stamina = 7;
    int charisma =6;
    
    if(intelligence >= stamina && intelligence >= charisma)
    {
    
    printf("mage\n");
    }
    
    if(stamina >= intelligence && stamina >= charisma)
    {
    
    printf("knight\n");
    }
    
    
    if(charisma >= intelligence && charisma >= stamina)
    {
    
    printf("thief\n");
    }
    printf("intelligence:%d\n", intelligence);
    printf("stamina:%d\n", stamina);
    printf("charisma:%d\n",charisma);

    
    return 0;
}