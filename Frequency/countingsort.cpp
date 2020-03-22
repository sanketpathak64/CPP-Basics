#include<bits/stdc++.h>
#include<iostream>
typedef long long int ll;
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    ll frequency[10];
    for(ll i=0;i<10;i++) frequency[i] = 0;
    for(ll i=0;i<n;i++)
        frequency[a[i]]++;
    for(ll i=0;i<10;i++)
    {
        while(frequency[i]-->0)
            cout<<i--<<" ";
    }
}
