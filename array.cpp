#include<iostream>
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Array elements are:"<<endl;
    for(int j=0;j<size;j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
}