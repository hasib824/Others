#include<bits/stdc++.h>
using namespace std;
int A[100];

// Building the tree while Scanning the Tree;
void buildTree(int n)
{
   for(int i=(n/2);i<n;i++)
   {
       int a,b;
       scanf("%d%d",&a,&b);
       A[i*2] = a; // left child insertion
       A[i*2+1] = b; // left child insertion
       A[i]=a+b;    //  Adding the addition to root;
   }
   for(int i=n/2-1;i>0;i--)
   {
       A[i] = A[i*2] + A[i*2+1];
   }
}


int RangeSum(int left,int right)
{   printf("Left %d , right %d\n",left,right);
    int sum=0;
    while(left<=right)
    {
       if(left%2==1)
       {
         printf("Left %d , value %d \n",left,A[left]);
         sum+= A[left++];
       }
       if(right%2==0)
       {
           printf("right %d , value %d\n",right,A[right]);
          sum+= A[right--];
       }

       left/=2; right/=2;
    }

    return sum;
}


void printTree(int n)
{
    for(int i=0;i<n*2;i++) printf("%d , ",A[i]);
}
int main()
{
    printf("How many Numbers : \n");
    int n; scanf("%d",&n);
    buildTree(n);  printTree(n);
    printf("\nPlease enter range query : from 0 to %d\n",n-1);
    int left , right;
    scanf("%d%d",&left,&right);
    printf("\nSum is : %d\n",RangeSum(n+left,n+right));
    return 0;
}


/*

12
2
4
5
7
9
8
13
11
6
15
3
1

2
8

*/
