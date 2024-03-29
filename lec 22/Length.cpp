#include <iostream>
#include <string>
using namespace std;
int getlenght(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[20]; // when you enter name between space they break the eg: dipu kumar print the only(dipu); dipukumar(then print dipukuamr);
    cout << "Enter your name:" << endl;
    cin >> name;

    // name[2] = '\0'; // break the program in the 2nd index.
    cout << "your name is  " << name << endl;
    cout << "Total char in you name is " << getlenght(name) << endl;
}