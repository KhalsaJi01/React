#include<bits/stdc++.h>
using namespace std;
int  main()
{
     list<int>l;
 l.push_back(10);//it is used to insert element at the back of the list
 l.emplace_back(50);//same as push_back but more optimised
 l.push_front(20);//it is used to insert element at the front of the list
 l.emplace_front(40);//same as push_front but more optimised
 for(auto itr: l)
 {
     cout<<itr<<endl;
 }
 //output is :
// 40
// 20
// 10
// 50
    return 0;
    //rest functions are similar to vexctor 
    //begin,end,size,rbegin,rend,clear,insert,swap;
}