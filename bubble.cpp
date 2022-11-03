#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"enter the number of elements to be sorted";
    cin>>n;


    int arr[n];
    for(int n1=0;n1<n;n1++){
        cin>>arr[n1];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp;

                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int p=0;p<n;p++){
        cout<<arr[p];
    }

    return 0;


}
