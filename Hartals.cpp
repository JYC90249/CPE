#include <iostream>
using namespace std;
int main(void){
    int sum,d,n,i,j;
    cin>>sum;
    while(sum--){
        int num[100],sum=0;
        cin>>d>>n;
        int har[d];
        for(i=0;i<n;i++)cin>>num[i];
        for(i=1;i<=d;i++)har[i]=0;
        for(i=0;i<n;i++){
            int temp=0;
            while(temp<=d){
                if(temp%7!=0&&temp%7!=6){
                    har[temp]=1;
                }
                temp+=num[i];
            }
        }
        for(i=1;i<=d;i++){
            if(har[i]){
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
}
