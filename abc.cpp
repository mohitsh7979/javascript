
#include<bits/stdc++.h>
using namespace std;

const int N=1000000;
bool primes[N+1];


void sieve()
{
    for(int i=1;i<=N;i++)
{
    primes[i]=true;
}
        primes[1]=false;
        
for(int i=2;i*i<=N;i++)
{
    if(primes[i]==true)
    {
        for(int j=i;j<=N;j+=i)
                {
                    primes[j]=false;
                }
            }
        }
}



// vector<int>ans;
// for(int i=2;i<=N;i++)
// {
//     if(primes[i]==true)
//     {
//         ans.push_back(i);
//     }
// }

int main() {
    // Write C++ code here
    
    //1 1 2 3 5
    int n;
    cin>>n;
    
    sieve();
    
    int count=0;
    for(int i=2;i<=n;i++)
    {
        if(primes[i]==true)
        {
            cout<<i<<endl;
        }
    }
    
}
