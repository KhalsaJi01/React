
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
stack<int>s;//Createion of stack using  STL As we know stack works on the LIFO(Last in first out) principle complexity wise all operation happens in o(1)
s.push(10);//pushing the element in stack
s.emplace(12);//second way to push the element in stack
s.push(11);
int topItemInStack=s.top();// keeps the track of the top element this top() function returns the value of topmost element in the stack
cout<<topItemInStack;//output is 11
s.pop();// it will remove the topmost element;
bool isEmpty=s.empty(); //this empty() function is used to check whether stack is empty or still contains the values this function retuns the boolean value true or flase if stack is empty then it returns true oterwise false 
cout<<isEmpty;// output is 0(false)
stack<int>s1,s2;
s1.swap(s2);//it swap the values of s1 and s2
    return 0;
}