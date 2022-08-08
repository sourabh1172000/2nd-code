#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"\n Input a size = ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"\n Your array is = ";
        cin>>arr[i];
    }
    int key;
    cout<<"\n Choose a number to find in array : ";
    cin>>key;
    cout<<"\n Your element positon is : "<<BinarySearch(arr,n,key)<<endl;
    return 0;
}