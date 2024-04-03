#include<bits/stdc++.h>
using namespace std;
int primenumber(int n){
    int count = 0;
    vector<bool> primebo(n+1, true);
    primebo[0] = primebo[1] = false;
    for(int i = 2; i<n; i++){
        if(primebo[i]){
            count++;
            for(int j = 2*i; j<n; j++){
                primebo[j] = 0;
            }
        }
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter the n:";
    cin>>n;
    cout<<"your n is "<< n<<endl;
    int prime = primenumber(n);
    cout<<prime;


    // the code was not working properly;
}