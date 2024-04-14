#include<iostream>
using namespace std;
int main(){
    int arr[10] = {1,2,4,56};
    cout<<"Arrays first block the "<< arr <<endl;
    cout<<"Arrays first block the "<< &arr[1] <<endl;
    cout<<"Value of the first is :"<< *arr <<endl;
    cout<<"Value of the first is :"<< *(arr + 1) <<endl;

    // find the size of the array in different possition;
}