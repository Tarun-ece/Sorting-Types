#include <bits/stdc++.h>

using namespace std;
void printsort(int *arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void quicksort(int *arr, int low, int high){
    int s=low;
    int e=high;
    int mid=(s+e)/2;
    int pivot=arr[mid];
    while(s<=e){
        while(arr[s]<pivot){
            s++;
        }
        while(arr[e]>pivot){
            e--;
        }
        if(s<=e){
            int temp=arr[s];
            arr[s]=arr[e];
            arr[e]=temp;
            s++;
            e--;
        }
    }
    if(e>low){
        quicksort(arr,low,e);
    }
    if(s<high){
        quicksort(arr,s,high);
    }
    
}
int main()
{
    int arr[]={10, 7, 8, 9, 1, 5 };
    int n=sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,n);
    printsort(arr,n);
    return 0;
}
