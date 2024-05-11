#include <iostream>
using namespace std;

//  make a function to find the sum;

int getsum(int *arr, int n)
{ // we can write a arrays in the form of pointer;
   int sum = 0;
   for (int i = 0; i < n; i++)
   {
      sum += arr[i];
   }
   return sum;
}

int main()
{
   int n;
   cin >> n;
   int *arr = new int[n];

   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }

   int ans = getsum(arr, n);
   cout << ans;
}

//  get a big error