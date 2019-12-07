#include <iostream>

using namespace std;

int main(void){
    int fib[40];        //40個大概就夠了
    fib[0] = 1, fib[1] = 2;
    for(int i=2;i<40;i++){
        fib[i] = fib[i-1]+fib[i-2];
    }
    int n, num;
    cin>>n;
    while(n--){
        int flag = 0;
        cin>>num;
        for(int i=39;i>=0;i--){
            if(num/fib[i] == 1){
                cout<<"1";
                num = num%fib[i];
                flag = 1;       //遇到第一個1，flag才變1
            }
            else if(flag){      //flag變1之後才有0
                cout<<"0";
            }
        }
        cout<<" (fib)"<<endl;
    }
    return 1;
}
