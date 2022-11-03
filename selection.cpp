#include <bits/stdc++.h>
using namespace std;


int getmax(int start,int end,vector<int> arr){
    int max=start;
    for (int  i = 0; i <= end; i++){
        if(arr[max] < arr[i]){
            max=i;
        }
    }
    return max;
    
}

int main(){
    vector<int> arr={5,4,3,2,1};

    for(int i=0;i<arr.size();i++){
        int end=arr.size()-i-1;
        int max= getmax(0,end,arr);

        int temp =arr[end];
        arr[end]=arr[max];
        arr[max]=temp;

        cout<<"max"<<max<<" ";
    for (int  i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<"\n";
    }



}