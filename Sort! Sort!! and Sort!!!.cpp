#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

struct num{
    int n;      //M
    int r;      //M mod N == M%N
    int odd;    //484 odd
}number[10000];

bool cmp(num a, num b){     //很高級的排序使用方式?
    if(a.r!=b.r){
        return a.r<b.r;
    }
    int cnt = a.odd+b.odd;
    if(cnt == 2){
        return a.n>b.n;
    }
    if(cnt == 0){
        return a.n<b.n;
    }

    return a.odd;
}

int main(void){
    int n, m;
    while(cin>>n>>m){
        if(n==0&&m==0){     //0 0特別處理
            cout<<"0 0";
            break;
        }
        for(int i=0;i<n;i++){
            cin>>number[i].n;
            number[i].r = number[i].n%m;
            number[i].odd = abs(number[i].n%2);
        }
        sort(number, number+n, cmp);        //用在這

        cout<<n<<" "<<m<<endl;

        for(int i=0;i<n;i++){
            cout<<number[i].n<<endl;
        }
    }
}
