#include <iostream>
#include <iomanip>

using namespace std;

void convert(long long int num){
    if(num>10000000){
        convert(num/10000000);
        cout<<" kuti";
        num = num%10000000;
    }
    if(num>100000){
        convert(num/100000);
        cout<<" lakh";
        num = num%100000;
    }
    if(num>1000){
        convert(num/1000);
        cout<<" hajar";
        num = num%1000;
    }
    if(num>100){
        convert(num/100);
        cout<<" shata";
        num = num%100;
    }
    if(num){
        cout<<" "<<num;
    }
}

int main(void){
    long long int n;
    int times = 1;
    while(cin>>n){
        if(n==0){
            cout<<setw(4)<<times<<". 0";
            times++;
            cout<<endl;
        }
        else{
           cout<<times<<". ";
           times++;
           convert(n);
           cout<<endl;
        }
    }
}
