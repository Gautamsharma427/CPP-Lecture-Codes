#include <iostream>
#include <vector> //or <bits/c++>(but not recommended)
using namespace std;
int main(){

    // Declaring a integer type vector (Method 1)
    vector<int> vec={90,23,3,4,5,0,3};
    cout<<vec[3];
    // Using Foreach loop to interate the vector
    for (int values:vec)
    {
        cout<<values<<endl;
    }

    vector <char> vec2(3,'a');//3-> Length, a -> value

    for(char i:vec2){
        cout<<"i is "<<i;
        cout<<endl;
    }
    cout<<vec.size();//prints size of vector
    vec.push_back(43);//pushes 3 at the back of the vector vec
    cout<<endl<<vec.back();//prints the last element of the vector vec
    cout<<endl<<vec.front();//prints the first element of the vector vec
    vec.pop_back();//would remove the last element of the vector vec
    cout<<endl<<vec.capacity();//returns the capacity of the vector

    //Problem Number 136 (Leetcode)
    vector <int> vect = {1,2,1,2,3};
    int j = 0;
    for(int i:vect){
       j = j^i;
    }
    cout<<endl<< j;
}