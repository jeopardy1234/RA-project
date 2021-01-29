#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"This program calculates 1 + summation(1/(2n)(4n+1)(4n-1)"<<endl;
    long double n = 1;
    long double sum = 1;
    for(int i=1; i<=500 ; i++)
    {
        sum += 1/(2*n)/(16*n*n-1);
        n++;
        cout << sum <<endl;
    }
    return 0;
}
