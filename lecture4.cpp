#include <iostream>
using namespace std;
// THIS LECTURE IS PENDING AND NEEDS REVISION
int main(){
    // Patterns 
    int total_lines = 5;
    for (int i = 0; i < total_lines; i++)
    {
        for (int i = 1; i <= total_lines; i++)
        {
            // cout<<"*";
            cout<<i;        
            }
        cout<<"\n";
        
    }
    int n=5;
    char lp = 'A';

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<lp;
            lp++;
        }
        cout<<"\n";
        
    }
    n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<"*";
        }
        cout<<"*";
        
    }
    
    
    
    return 0;
}