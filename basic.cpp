#include<iostream>
using namespace std;

int fibonacciSeries(int n){
    if (n<=0)
    {
        return 0;
    }
    else if(n==1){
        return 1;
    }
    return fibonacciSeries(n-1)+fibonacciSeries(n-2);
    
}


int sum(int n){
    if(n==1){
        return 1;
    }
    return n+sum(n-1);
}



int main(){
    cout<<fibonacciSeries(4)<<endl;
    cout<<sum(10)<<endl;
    return 0;
}