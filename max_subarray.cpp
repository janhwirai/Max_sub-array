#include<iostream>
using namespace std;

int main(){
    int n,sum1=0,sum2=0,max_left,max_right,left_sum=0,right_sum=0;
    cout<<"Enter no. of elements\n";
    cin>>n;
    cout<<"Enter elements\n";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=n/2;i>0;i--){
        sum1+=arr[i];
        if(sum1>left_sum){
            left_sum=sum1;
            max_left=i;
        }
    }
    for(int j=(n/2)+1;j<n;j++){
        sum2+=arr[j];
        if(sum2>right_sum){
            right_sum=sum2;
            max_right=j;
        }
    }
    cout<<max_left<<endl;
    cout<<max_right<<endl;
    cout<<"Maximum Sum in a sub-array: "<<left_sum+right_sum<<endl;
    return 0;
}