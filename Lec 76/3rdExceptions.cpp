#include <bits/stdc++.h>
using namespace std;
int main()
{
    try
    {
        int *p = new int[1000000000000000];
        cout << "Memory Allocation is Sucesfull!";
        delete[] p;
    }
    catch (const exception &e)
    {
        cout << "Exception is Occure in line Number 9" << e.what() << endl;
    } // how to define Defult Catch
    catch (...)
    {
        cout<<"Defult Catch(...)";
    }
}

// cout << "Dipu Singh😒";
// This code get the Error in my pc but when i run the code in the online compilr is run Good and get the proper ans;


// Read the upper line is imp***;