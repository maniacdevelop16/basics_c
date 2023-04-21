/******************************************************************************

AUTHOR : Mayank Srivastava
DATE : 21/04/23
PURPOSE : To Calculate + - / * of two numbers

*******************************************************************************/
//header file stdio.h for input output operations
#include<stdio.h>

int main (){
    
    int in_a, in_b;
    printf("Please Enter Values for a and b\n");
    scanf("%d",&in_a);
    scanf("%d",&in_b);
    
    int add = in_a + in_b;
    int sub = in_a - in_b;
    int mul = in_a * in_b;
    float divide = in_a / in_b;
    
    printf("The addition of two numbers      : [%d + %d = %d]\n",in_a,in_b,add);
    printf("The subtraction of two numbers   : [%d - %d = %d]\n",in_a,in_b,sub);
    printf("The multipication of two numbers : [%d * %d = %d]\n",in_a,in_b,mul);
    printf("The division of two numbers      : [%d / %d = %f]\n",in_a,in_b,divide);
  
    return 0;
}
