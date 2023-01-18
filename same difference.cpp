
/* 
 Same Difference
 ___________________________________
 
You are given an array a of n integers. Count the number of pairs of indices (i,j) such that i<j and aj−ai=j−i.

Input
The first line contains one integer t (1≤t≤104). Then t test cases follow.

The first line of each test case contains one integer n (1≤n≤2⋅105).

The second line of each test case contains n integers a1,a2,…,an (1≤ai≤n) — array a.

It is guaranteed that the sum of n over all test cases does not exceed 2⋅105.

Output
For each test case output the number of pairs of indices (i,j) such that i<j and aj−ai=j−i.

Example
input

4
6
3 5 1 4 6 6
3
1 2 3
4
1 3 3 4
6
1 6 3 4 5 6

output 
1
3
3
10

*/
#include<iostream>
#include<map>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x;
        map<int,ll> mp;
        ll maxi = 0;
        for (int i = 0; i < n; ++i) {
            cin>>x;
            maxi += mp[x-i];
            mp[x-i]++;
        }
        cout<<maxi<<"\n";
    }
}