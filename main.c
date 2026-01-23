/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int quadratic()
{
    int a, b, c;
    printf("ax^2+bx+c=0 二次方程式の係数a, b, c（a, b, cはいずれも整数）を入力してください。");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a==0)
    {
    printf("aは0以外の整数を入力してください。");
    }

    else 
    {
       double D = b*b-4*a*c;
       
       if(D > 0)
       {
           double x1 = (-b+sqrt(D))/2*a;
           double x2 = (-b-sqrt(D))/2*a;
           printf("解は2つあります:x = %g, %g\n", x1, x2);
       }
       else if (D == 0)
       {
           double x = -b/(2*a);
           printf("解は1つです:x = %g\n", x);
       }
       else
       {
           printf("解なし\n");
       }
    }
    
    return 0;
}
int main()
{
    quadratic();
}
