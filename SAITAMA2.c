/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
int main()
{
    char saitama[] = "SAITAMADAjhgfilyyutffijjhO";
    int i;
    int l = strlen(saitama);
    printf("The string '%s' is %lu characters long.\n", saitama, strlen(saitama));
    for(i = 0; i <= l; i++)
       printf("%d\n", i);
    
    return 0;
}
