#include<iostream>
using namespace std;

int main()
{
    int c = 20;
    int w = c;

    while(w>=3)
    {
        c = c + w/3;
        w = w/3 + w%3;
        cout<<w<<endl;

    }
    cout<<c; 
}
