#include <iostream>

using namespace std;

int decimal(int n){     //轉成十進位
    int dec = 0, c = 1;
    while(n>0){
        dec = dec+(n%10)*c;
        n = n/10;
        c = c*2;
    }
    return dec;
}

int main(void){
    int t, a, b;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>a>>b;
        a = decimal(a);
        b = decimal(b);
        while((a=a%b)&&(b=b%a));        //找gcd
        if((a+b) == 1){     //互質
            cout<<"Pair #"<<i<<": Love is not all you need!"<<endl;
        }
        else{       //不是互質
            cout<<"Pair #"<<i<<": Love is all you need!"<<endl;
        }
    }
}
