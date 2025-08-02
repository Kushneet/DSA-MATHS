#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int count(int n)
{
    int count=0;
    vector <bool> prime(n+1,true); // name prime size (n+1) initial value (true)
    prime[0]=prime[1]=false;
    for(int i=2;i<n;i++)
    {
        if( prime[i]) // If the number is still marked as prime
        {
            count++;
        }
        // Mark all multiples of i as not prime (i.e., set to false)
        // These cannot be prime because they are divisible by i
        for(int j=2*i;j<n;j+=i)
        {
           prime[j]=0;
        }
    }
    return count;
}    
int main()
{
    int n;
    cout << "series: " << endl;
    cin >> n;
   cout << "number of primes: " << count(n) << endl;
}
