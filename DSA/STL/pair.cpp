#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
 pair<int,int> p={1,2};// In this i have created the pair of int where i can store 2 values of data type delared here pair<int,int>
 cout<<p.second;//this is the syntax to access the second value in pair output is 2
 cout<<p.first;//this is the syntax to access the first value in pair output is 1
 pair<int,pair<int,int>>p1={4,{5,6}};//this is way to create pair inside pair
 cout<<p1.first<<p1.second.first<<p1.second.second;//this is how we access the value the output is 4 5 6
 pair<int,int> arr[3]={{1,2},{2,3},{3,4}};//created a raay of pair<int,int>
 for(int i=0;i<3;i++)
 {
     cout<<arr[i].first<<arr[i].second;//this is the way to accesss the output is 1 2 2 3 3 4
 }
    return 0;
}