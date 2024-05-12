
/*

// when we are make 2-d arrays whan same row and col;

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int** arr = new int*[n];
    for(int i = 0; i<n;i++){
        arr[i] = new int[n];
    }
// creating done

// taking input
    for(int i = 0; i<n; i++){
        for(int j =0; j<n; j++){
            cin>> arr[i][j];
        }
    }

    // get the output
    for(int i = 0; i<n; i++){
        for(int j =0; j<n; j++){
            cout<< arr[i][j]<<" ";
        } cout<< endl;
    }
    return 0;
}

*/


#include<bits/stdc++.h>
using namespace std;
int main(){
    int row, col;
    cin>> row >> col;

    int** arr = new int*[row];
    // creating a dynamic allction;
    for(int i = 0; i<row; i++){
        arr[i] = new int[col];
    }

    // take  a input;
    for(int i =0; i<row; i++){
        for(int j = 0; j<col; j++){
            cin>> arr[i][j];
        }
    }

    // output of the hole define;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout<< arr[i][j] <<" ";
        }
        cout<<endl;
    }


    //  relassing memeory
    for(int i = 0; i<row; i++){
        delete [] arr[i];
    }
    delete []arr;
    return 0;
}