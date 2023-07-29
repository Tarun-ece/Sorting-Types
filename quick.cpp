#include <iostream>
using namespace std;

void printArray(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\n";
    }
}

void quickSort(int *arr,int low,int high){

    int s=low;   //start
    int e=high;  //end
    int mid=(s+e)/2;
    int pivot=arr[mid];


    while(s<=e){
       // printArray(arr,5);
        while (arr[s]<pivot)
        {
            s++;
        }
        while (arr[e]>pivot)
        {
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
        quickSort(arr,low,e);
    }
    if(s<high){
        quickSort(arr,s,high);
    }



}

int main(){
    int ar[] = {10, 7, 8, 9, 1, 5 };
    int n = sizeof(ar)/sizeof(ar[0]);
    quickSort(ar,0,n);
    printArray(ar,n);
    return 0;
}
