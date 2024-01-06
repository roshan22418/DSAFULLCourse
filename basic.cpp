#include<iostream>
#include<limits.h>
#include <vector>
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

void minElement(int *arr, int n,int index,int &min){
    if(n==index){
        return; 
    }
    if (arr[index]<min)
    {
        min= arr[index];
    }
    index++;
    
    minElement(arr,n,index,min);
    


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

void insertElement(int *arr,int n,int index, vector<int> &ans){
    cout<<"enter in first stage"<<endl;

    if(n==index){
        cout<<"enter in final return"<<endl;
        return;
    }
    if (arr[index]%2==0)
    {
       
        ans.push_back(arr[index]);
        cout<<"enter in if condition"<<endl;
    }
    index++;
    insertElement(arr,n,index,ans);
    

            
}


int main(){
    // cout<<fibonacciSeries(4)<<endl;
    // cout<<sum(10)<<endl;
    int min = INT_MAX;
    int array[] = {9,2,3,4,-5,6,7};
    int n = sizeof(array)/sizeof(array[0]);
    // printArray(array,7,0);
    // cout<<checkElement(array,7,9,0)<<endl;
    // minElement(array,n,0,min);
    // cout<<min<<endl;
    vector<int> finalAns ;
    insertElement(array,n,0,finalAns);
    int length = finalAns.size();
    for (int i = 0; i < length; i++)
    {
        cout<<finalAns[i];
    }
    

    return 0;
}