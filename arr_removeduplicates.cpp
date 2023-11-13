#include<iostream>
#include<string>
using namespace std;
void removeduplicates(string arr[],int& size1){
    for(int i=0;i<size1;i++){
        for(int j=i+1;j<size1;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<size1-1;k++){
                    arr[k]=arr[k+1];
                }
                size1--;
                j--;
            }
        }
    }
}
int main(){
    int size1;
    string arr[100];
    cin>>size1;
    for(int i=0;i<size1;i++){
        cin>>arr[i];
    }
    removeduplicates(arr,size1);
    cout<<"after removing duplicates"<<endl;
    for(int i=0;i<size1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
