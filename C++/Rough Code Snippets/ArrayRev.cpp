/*
An array is a type of data structure that stores elements of the same type in a contiguous block of memory. In an array, , of size , each memory location has some unique index,  (where ), that can be referenced as  or .

Reverse an array of integers.

Note: If you've already solved our C++ domain's Arrays Introduction challenge, you may want to skip this.

Example

Return .

Function Description

Complete the function reverseArray in the editor below.

reverseArray has the following parameter(s):

int A[n]: the array to reverse
Returns

int[n]: the reversed array
Input Format

The first line contains an integer, , the number of integers in .
The second line contains  space-separated integers that make up 
*/

#include <bits/stdc++.h>
using namespace std;
vector<int> solution(){
        int n;
        int i=0;
        cin>>n;
     std::vector<int> A(n);
    for(i=0;i<n;i++){
        cin>>A[i];
    }
    std::vector<int> b(n);
    int j=0;

    for(i=n-1;i>=0;i--){
        b[i]=A[j];
        j++;
    }
    for(i=0;i<n;i++){
        cout<<b[i]<<" ";
        
    }

 return b;


}
int main(){

   solution();
   


}