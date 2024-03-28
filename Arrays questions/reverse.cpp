#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> v)
{
    int start = 0, end = v.size() - 1;
    while (start <= end)
    {
        swap(v[start], v[end]);
        start++;
        end--;
    }
    return v;
}

void print(vector<int> v){
    for(int i =0; i<=v.size()-1; i++){
        cout<<v[i] <<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> v;
    v.push_back(11);
    v.push_back(91);
    v.push_back(81);
    v.push_back(9);
    v.push_back(10);
    v.push_back(1);

    vector<int> ans = reverse(v);
    print(ans);
    return 0;
}