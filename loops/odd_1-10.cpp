#include<iostream>
using namespace std;
    int main(){
        int n;
        cout<<"Enter a number: ";
        cin>>n;
        cout<<"The odd numbers from 1 to "<<n<<" are: ";
        for(int i=1;i<=n;i+=2){
            cout<<i<<" ";
        }
    }