// let assume you will give a 2D Array like: 1 2 3, 4 5 6, 7 8 9, i)find the diagonal a and b both. ii) sum of the A and B diagona. iii.)subtraction the common middle elemts present in the both dignol;

#include <iostream>
using namespace std;
int main()
{
    int arr1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    //   code for the first diagonal;
    int first = 0;
    for (int i = 0; i < 3; i++)
    {
        first += arr1[i][i];
    }

    // second diagonal code;
    int second = 0;
    
        int start = 0;
        int end = 2;
        while (end >= 0)
        {
            second += arr1[start][end];
            start++;
            end--;
        }
   
   cout<<"First diagonal is:"<<first<<" Second diagaon is :" <<second <<endl;
   cout<<"Sum is the first and second diagonal is :" << first + second;




// solve only 2 part question can you solve the third part of question. 👆 in the top provide the 3 part of the question.
}