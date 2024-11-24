#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World";
    // cout << s.size() << endl;
    // cout << s.max_size() << endl;
    // cout<<s.capacity()<<endl;
    // s.clear();
    // if(s.empty()==true)
    // {
    //     cout<<"Empty"<<endl;
    // }
    // else
    // {
    //     cout<<"NotEmpty"<<endl;
    // }

    

    s.resize(15,'s');
    cout << s << endl;
    return 0;
}