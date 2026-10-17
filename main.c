#include <stdio.h>

int main(void) 
{
    double num;

    scanf("3.14:");
    printf("%1f", &num);
    
    printf("入力した数値は%fです。\n", num);
    return 0;
}
