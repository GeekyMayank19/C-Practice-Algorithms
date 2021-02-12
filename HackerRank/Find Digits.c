/******************************************************************************

https://www.hackerrank.com/challenges/find-digits/problem

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int p;
    cin>>p;
    while(p--){


   int n,temp,count=0;
   cin>>n; //input n
   int t=n;

  while(n!=0){
    temp= n%10; //calculate remainder
    n/=10;
    if(temp==0){
        continue;
    }
    if(t%temp==0){
        count++;
    }
  }
  cout<<count<<endl;
  }
    return 0;
}
