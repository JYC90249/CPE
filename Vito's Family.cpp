#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main(void)
{
    int t,n,med,h[505],ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>h[i];
        sort(h,h+n);

        med=h[n/2];
        ans=0;
        for(int i=0;i<n;i++)
            ans=ans+abs(med-h[i]);
        cout<<ans<<endl;
    }
}
/*
Sample Input
2
2 2 4
3 2 4 6
Sample Output
2
4
*/     
