#include<stdio.h>
#include<string.h>

   int main()
{
      printf("設定するパスワードを入力してください。");
 
char password[100]={0};
 scanf("%s", &password);
 int flag[2]={0};
 int i= 0;
 while(password[i] != 0)
 {
 
     if (65<= password[i] &&  password[i] <=90)
     {
         flag[0]=1;
     }
     
     else if (97<= password[i] && password[i] <=122)
     {
         flag[1]=1;
     }
     
     i++;
 }
     
     if (i<8)
     {
         printf("パスワードは8文字以上で設定してください。");
     }
     
     else if(flag[0]==0 && flag[1]==1)
     {
         printf("パスワードに大文字を含めてください。");
     }
     
     else if(flag[0]==1 && flag[1]==0)
     {
         printf("パスワードに小文字を含めてください。");
     }
     
     else if (flag[0]==1 && flag[1]==1 && i>=8)
     {
         printf("パスワードは強力です。");
     }
     
     else 
     {
         printf("エラーが発生しました。");
     }
 
 return 0;
}
