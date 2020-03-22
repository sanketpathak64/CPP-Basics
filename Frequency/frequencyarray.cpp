# include <bits/stdc++.h>
using namespace std;
ifstream f("data.in");
ofstream g("data.out");
int A[100], n, i;
int main ()
{
    f>>n;
    for (i=1; i<=n; ++i) {
        int x;
        f>>x;
        x=x+10;
        ++A[x];
    }
    if (A[3] > 0) g<<"YES, it appears";
             else g<<"NO, it's not";

    return 0;
}
