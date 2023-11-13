
#include<iostream>
using namespace std;
int main(){
    int arr[100],index,size;
    cin>>index>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"original array is : "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=index;i<size;i++){
        arr[i]=arr[i+1];
    }
    size--;
    cout<<"\nupdated array: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}



#include<iostream>
using namespace std;
int main(){
    int arr[100],pos,size;
    cin>>pos>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"original array is : "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=pos-1;i<size;i++){
        arr[i]=arr[i+1];
    }
    size--;
    cout<<"\nupdated array: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

