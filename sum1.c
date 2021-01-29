#include<iostream>

using namespace std;

int main(){
    cout << "This program prints the value of summation((-1)^(n+1)/n) for all n from 1 to 500"<<endl;
    long double x;
    long double t;
    x=1;
    t=1/x;
    for(int i=1;i<=500;i++){
        if(x>0){
            x=x+1;
            x=-x;
            t=t+1/x;
            cout<<t<<endl;
        }
        else{
            x=x-1;
            x=-x;
            t=t+1/x;
            cout<<t<<endl;
            
        }
        
    }
    

    return 0;

}
