#include <iostream>

using namespace std;

int r(int a){
    int rever = 0, temp = 0;
    while(a>0){
        temp = a%10;
        a = a/10;
        rever = rever*10 + temp;
    }
    return rever;
}


bool prime(int a){
    bool ans = true;
    for(int i=2;i<a;i++){
        if(a%i == 0){
            ans = false;
        }
    }
    return ans;
}

int test(int a){
    return a+1;
}

int main(void){
    int a;
    while(cin>>a){
        int b = r(a);
        if(prime(a)){
            if(prime(b)){
                cout<<a<<" is emirp"<<endl;
            }
            else{
                cout<<a<<" is prime"<<endl;
            }
        }
        else{
            cout<<a<<" is not prime."<<endl;
        }
    }
}
