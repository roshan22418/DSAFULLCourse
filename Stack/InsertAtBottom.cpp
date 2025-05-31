#include<iostream>
#include<stack>

using namespace std;
// User function Template for C++

class Solution {
  public:
    void solve(stack<int>& st,int x){
        if(st.empty()){
            return st.push(x);
        }
        int temp = st.top();
        st.pop();
        solve(st,x);
        st.push(temp);
    }
  
    stack<int> insertAtBottom(stack<int> st, int x) {
        solve(st,x);
        return st;
    }
};

int main(){

}