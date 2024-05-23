#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;//here we have created a empty vector . Vector is a dynamic array wich can change the size of the array 
    //according to the requirement so you dont have take any tension about declaring the sizeb like you do in array. 
    v.push_back(10);
    v.push_back(20);
    cout<<v.size()<<endl;//output is 2 this .size() tell us the size of the vector. how many entries are there
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;//output is 10 20
    }
    for (auto itr : v) // i have created the iterartor which will iterate and print the value in this i have used the short hand notation .auto is used so the it can auto detect the datatype and iterate over it
    {
        cout<<itr<<endl; // simply gives the same output 10 20
    }
    v.pop_back(); //.pop_back is used to remove the last element inside the vector
    for (auto itr : v)
    
    {
        cout<<itr<<endl; // it gives output 10
    }
    v.push_back(20);
    int itr = v.front();//it returns the first element of the vector
    int itr1 = v.back();// it returns the last element of the vector
    cout<<itr<<endl;// output is 10
    cout <<itr1<<endl;//output is 20
    v.clear();// empty the vector
    cout<<v.size()<<endl;
    bool isEmpty=v.empty();// this function is used to check wheter the vector is empty or not it return 1 when empty and 0 when not empty
    cout<< isEmpty;
    vector<int> v1(v);//it is used to copy the content of the v in v1
    vector<int> v2(n,0); // this means ehre n is the size of the array we want to initialize the vector of n size and value will be 0 for every array value 
    
    return 0;
}