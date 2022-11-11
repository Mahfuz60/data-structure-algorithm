#include<bits/stdc++.h>
#include"MYSTACK.h"
using namespace std;
/*
input:
5
1 2 3 4 5
output:
1 1 1 1 1

input:
7
1 6 43 1 2 0 5
output:
0 0 1 1 1 1 1

*/

int main( )
{
    int n;
    cout<<"Enter your Number:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
}

Stack <int> st;
Stack <int>minStack;
int min=INT_MAX;

for(int i=0;i<n;i++){
    if(arr[i]<=min){
        minStack.push(arr[i]);
        min=arr[i];
    }
    st.push(arr[i]);
}

while(!st.empty()){
    if(minStack.Top()!=st.Top()){
            st.pop();
    cout<<minStack.Top()<<" ";

    }
    else{
        cout<<minStack.Top()<<" ";
        minStack.pop();
        st.pop();

    }
}
cout<<endl
        <<endl;
return 0;
}

