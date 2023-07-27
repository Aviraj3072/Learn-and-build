// #include<iostream>
// #include<deque>
// using namespace std;


// void Show_DQ(deque<int> g)
// {
//     deque<int>::iterator it;
//     for(it = g.begin(); it != g.end(); ++it)
//     {
//         cout<<"\t"<<*it;
//     }
//     cout<<"\n";
// }

// int main()
// {
//     deque<int> dq;
//     dq.push_back(30);
//     dq.push_front(40);
//     dq.push_back(50);
//     dq.push_front(60);

//     Show_DQ(dq);
// }

//QUESTION '2' Implimataion of queue using one stack
#include<iostream>
#include<stack>
#include<stdlib.h>

using namespace std;

class Queue
{
    stack<int> s1, s2;
    public:
    void enqueue(int data)
    {
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(data);
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
        
    }
    int dequeue()
    {
        if(s1.empty())
        
    }
}