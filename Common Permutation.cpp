#include <iostream>
#include <algorithm>

using namespace std;

string compare(string a, string b){
    string ans;
    for(int i=0;i<a.length();i++){
        for(int j=0;j<b.length();j++){
            if(a[i]==b[j]){
                ans = ans+a[i];     //ans = ans+b[j] also fine
            }
        }
    }
    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());   //超級無敵奇怪但有用的東西
    return ans;
}

int main(void){
    string a, b;
    while(cin>>a>>b){
        cout<<compare(a, b)<<endl;
    }
    return 0;
}
