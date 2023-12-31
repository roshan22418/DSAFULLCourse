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
//check element present or not
int checkElement(int *arr,int n,int element,int index){

    if (index==n)
    {
        return 0; 
    }
    
    if (arr[index]==element)
    {       
        return 1;
    }
    return checkElement(arr,n,element,index+1);

    

}


//Print all array element 

void printArray(int arr[],int n,int index){
    if (n==index)
    {
        return ;
    }
    cout<<arr[index]<<endl;
    printArray(arr,n,index+1);
}


int main(){
    // cout<<fibonacciSeries(4)<<endl;
    // cout<<sum(10)<<endl;
    int array[] = {1,2,3,4,5,6,7};
    printArray(array,7,0);
    cout<<checkElement(array,7,9,0)<<endl;
    return 0;
}