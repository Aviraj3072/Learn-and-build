//#include<iostream>
//#include<queue>
//using namespace std;

//template <typename T>

void DispQ(queue<T> gq)
{
    queue<T> g = gq;
    while (!g.empty())
    {
        cout<< "\t" << g.front();
        g.pop();
    }
    cout<<"\n";
}

template <typename T>
void Check_Empty(queue<T> gq)
 { 
    queue<T> g=gq;
    if(g.empty())
    {
        cout << "True";

    }
    else{
        cout << "False";
    }
 }
template <typename T>
void Do_Swap(queue<T> q1,queue<T> q2)
{
    cout<<"Before Swap :-\n";
    DispQ(q1);
    cout<<"\n";
    DispQ(q2);
    cout<<"\n";
    
    q1.swap(q2);
    cout<<"After Swap :-\n";
    DispQ(q1);
    cout<<"\n";
    DispQ(q2);
} 

int main()
{
    queue<int> q1,q2;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q2.push(40);
    q2.push(50);
    q2.push(60);

    Do_Swap(q1,q2);

    queue<char> c1,c2;
    c1.push('a');
    c1.push('b');
    c1.push('c');
    c2.push('d');
    c2.push('e');
    c2.push('f');

    Do_Swap(c1,c2);
    // cout<<"The Queue is Demoq is : ";
    // DispQ(Demoq);
    // cout<< "\nDemoq.size() : "<<Demoq.size(); 
    // cout<< "\nDemoq.front() : "<<Demoq.front(); 
    // cout<< "\nDemoq.back() : "<<Demoq.back();
    // cout<< "\nDemoq.pop() : "; 
}

