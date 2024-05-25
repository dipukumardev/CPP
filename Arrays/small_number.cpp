


// 1st approch;


/*


#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,5,7,89,9};
    int ans = INT8_MAX;
    for(int i = 0; i<5; i++){
        if(arr[i]<ans){
            ans = arr[i];
        }
    }
    cout<<ans;
}


*/


// 2nd approch



#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,5,7,89,9};
    int ans = arr[0];
    for(int i = 0; i<5; i++){
        if(arr[i]<ans){
            ans = arr[i];
        }
    }
    cout<<ans;
}