#include <iostream>

using namespace std;

int main(void){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"Case "<<i<<": ";
        string str;
        cin>>str;
        int cnt = 0;
        char letter;
        for(int j=0;j<str.length();j++){
            if(isalpha(str[j])){
                cout<<string(cnt, letter);  //第一次會空跑讓letter和cnt賦值
                cnt = 0;    //重設計數
                letter = str[j];    //設定字母
            }
            if(isdigit(str[j])){
                cnt = cnt*10+(str[j]-'0');  //累加計數
            }
        }
        cout<<string(cnt, letter)<<endl;    //最後一個字母不會進迴圈，用這來補
    }
}
