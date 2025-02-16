// In this code Read , write and so many opration and use in the file;

// This code is help of create a files and write the files data;

// #include <iostream>
// #include <fstream>

// using namespace std;
// int main()
// {
//     ofstream file;
//     file.open("Dipu.txt");
//     // ager file nahi ho ga to wo new file Create kar degaa;

//     file << "Hii Dipu Singh";

//     file.close();
//     return 0;
// }

// This code helps to the Read the files;

// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
//     ifstream read;
//     // file open is same;
//     read.open("Dipu.txt");
//     // file ko read karo;

//     char c;
//     // read >> c; // for space;
//     c = read.get();
//     while (!read.eof())
//     {
//         cout << c;
//         // read >> c;
//         c = read.get();
//     };
//     read.close();
// }

// Vector

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
int main()
{
    vector<int> arr(5);
    cout << "Enter the Input:";

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    // file open

    ofstream ve; // ve file name;
    ve.open("vector.txt");

    for (int i = 0; i < 5; i++)
    {
        ve << arr[i]  <<" ";
    };

   ve.close();
}