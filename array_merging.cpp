#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int merge_arr[100];
    int merge_size=0;
    for(int i=0;i<num;i++){
        int n1;
        cin>>n1;
        int arr[100];
        for(int j=0;j<n1;j++){
            cin>>arr[j];
        }
        for(int j=0;j<n1;j++){
            merge_arr[merge_size]=arr[j];
            merge_size++;
        }
    }
    cout << "Merged array: ";
    for (int i = 0; i < merge_size; i++) {
        cout << merge_arr[i] << " ";
    }
    cout << endl;

}
