#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int count(int n)
{
  if(n<=2) // How many primes less than n
    return 0;
    vector <bool> prime(n,true);
    prime[0]=prime[1]=false;
for (int i=2;i*i<n;i++)
{   //everything less than (i*i) has already been checked by lower
        if (prime[i]) 
        {
            for(int j=i*i;j<n;j+=i) //j=4+2;8 etc.. j=9;12 //already sorted bach gye
            { // time complexity O(log(logn))
                prime[j]=false;
            }
        }

    }
    // Count all numbers still marked as prime
    int count=0;
for (int i=2;i<n;i++)
    {
        if (prime[i])//  if(prime[i] == true) count++( since i is already initiated by true)
        {
            count ++;
        }
    }
  return count;
}

int main()
{
    int n;
    cout << "series upper limit: " << endl;
    cin >> n;
    cout << "Number of primes less than " << n << ": " << count(n) << endl;
}