#include<stdio.h>
\\array of pointers
int add(int num1,num2);
int subtract(int num1,num2);
int multiply(int num1,num2);
int divison(int num1,num2);
int main()
{
    int x,y,choice,result;
    int(*op[4])(int,int);
    op[0]=add;
    op[1]=subtract;
    op[2]=multiply;
    op[3]=divison;
    printf("enter two integer: ");
    scanf("%d %d,&x,&y);
    scanf("%d",&choice);
    result=op[choice](x,y);
    printf("%d",result);
}
int add(int num1,int num2)
{
    return(num1+num2);
}
int add(int x,int y)
{
    return(x-y);
}
int add(int x,int y)
{
    return(x*y);
}
int divide(int x,int y)
{
    if(y!=0)
        return(y/x);
    else
      return 0;
}

   


   


   


   

