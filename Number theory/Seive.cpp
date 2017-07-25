#include<bits/stdc++.h>
using namespace std;

int const n = 1000002;
bool mark[n];
vector<int> primes;
void seive()
{
   primes.push_back(2); // 2 is a primes
   for(int i=4;i<n;i+=2) mark[i] = 1; // Eliminating all the number that can be devided by 2
   int limit = sqrt(n*1.)+2;
   for(int i=3;i<n;i+=2) //
   {
       if(mark[i]==0)
       {
           primes.push_back(i);
           if(i<limit)  // because for i> sqrt(n) . I*I can create a integer overflow in the inner loop initialization
           {
             for(unsigned int j=i*i;j<n;j+=i*2) mark[j]=1;

           }
      }

   }
}

int main()
{
    printf("Printing first 100 primes\n");
    seive();
    for(int i=0;i<200;i++) printf("%d : %d\n",i+1,primes[i]);
    return 0;
}
