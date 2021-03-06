#include<bits/stdc++.h>

using namespace std;

int lcm_recursive(int num2,int num1)
{
    int res = (num2%num1);
    if(res==0) return num1;
    gcd_recursive(num1,res);
}


int lcm_iterative(int num2,int num1)
{   int res=1;
    while(res!=0)
    {
        res = num2%num1;
        num2 = num1;
        num1=res;
    }
    return num2;
}
int main()
{
    int num1,num2;
    printf("Please insert two number \n");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
    {
        num1+=num2;
        num2=num1-num2;
        num1=num1-num2;
    }
    printf("The result recursive  : %d\n",lcm_recursive(num2,num1));
    printf("The result iterative  : %d",lcm_iterative(num2,num1));

    return 0;
}
