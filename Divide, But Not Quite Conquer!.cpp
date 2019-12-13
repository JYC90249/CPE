#include <iostream>

using namespace std;

int main(void){
    int a, b, ans[100];
    while(cin>>a>>b){
        int flag = 1, cnt = 0;
        ans[cnt] = a;
        while(1){
            cnt++;
            ans[cnt] = a/b;
            a = a/b;
            if(a==1){
                break;
            }
            if(a%b!=0){
                flag = 0;
                break;
            }

        }
        if(flag == 1 ){
            for(int i=0;i<cnt;i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"Boring!"<<endl;
        }
    }
}
