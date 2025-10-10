/**文字を表記するためのプログラム**/

#include <stdio.h>

int main()
{
    /**名前を付けて数字を保存しておく**/
    int figure = 8;
    /**printfは、””の間に、表記したい文字を書く**/
    printf("マグロの握りが%d貫あります！美味しそう！\n", figure);
    figure = figure + 2;
    printf("\nわぁ！マグロが%d貫に増えたよ！やったぁ！", figure);
    return 0;
}