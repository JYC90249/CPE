#include <iostream>

using namespace std;

int main(void){
    int n, num1, num2;
    cin>>n;
    while(n--){
        int sum1 = 0, sum2 = 0;
        cin>>num1;
        num2 = num1;
        while(num1){
            if(num1%2) sum1++;
            num1 = num1/2;
        }
        while(num2){
            num1 = num2%10;
            while(num1){
                if(num1%2) sum2++;
                num1 = num1/2;
            }
            num2 = num2/10;
        }
        cout<<sum1<<" "<<sum2<<endl;
    }
}
