#include <iostream>

using namespace std;


int s(int a){       //全部加起來
    int sum = 0;
    while(a>0){
        sum = sum+a%10;
        a = a/10;
    }
    return sum;
}

int main(void){
    string str;     //他input要1000digit, 用str好解決
    while(cin>>str){
        if(str == "0"){
            break;
        }
        int sum = 0, cnt = 1;
        for(int i=0;i<str.length();i++){
            sum = sum+(str[i]-'0');
        }
        if(sum%9 == 0){     //sum%9 == 0, sum就是9的倍數
            while(sum>9){       //最小的sum就是9，數到他要停止
                cnt++;
                sum = s(sum);
            }
            cout<<str<<" is a multiple of 9 and has 9-degree "<<cnt<<"."<<endl;
        }
        else{       //不是9的倍數
            cout<<str<<"  is not a multiple of 9."<<endl;
        }
    }
}
