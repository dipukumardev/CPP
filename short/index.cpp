#include<iostream>
using namespace std;
int main(){
    int arr[5] ={ 1,5,2,4,32};
    sort(arr.begin(), arr.end());
    cout<<arr[5]<<endl;
}