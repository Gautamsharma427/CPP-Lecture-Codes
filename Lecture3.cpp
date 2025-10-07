//lecture 3
#include <iostream>
using namespace std;
int main(){
    int g;
    cout<<"Enter a Number";
    cin>>g;
    // conditionals
    if(g>=0){
        cout<<"positive";
    }
    else if(g==0){
        cout<<"The Number is neither positive nor negative";
    }
    else{
        cout<<"negative";
    }
    // Loops
    // Never Add Infinite Loops in Program.
    
    int i = 1;
    while (i<=5)
    {
        cout<<i;
        i++;
    } 

    // Program to calculate Sum of 1 to N Numbers
    /*
    1. Get a Value of Variable N through a input(cin)
    2. Create a sum variable with initial value zero.
    3. Create a For Loop with a Variable J being updated by 1 everytime the loop runs;
    4. Now Update that Variable and add l<n;
    */
   int n;
   cout<<"Enter a Number to Which you want the Sum to: ";
   cin>>n;
   int sum=0;
   for (int l = 1; l <= n; l++)
   {
    sum = sum+l;
   }
   cout<<"Sum is: "<<sum;


   // Program to Find The Sum of Odd Numbers till H.
   /*
   1. Get Value of H through cin
   2. Get a Variable oddSum and set its initial Value to 0
   3. Check Some Conditions:
        * if counter variable value %2 != 0 then the Number is Odd and Should be added to oddSum
        * if counter variable value %2 == 0 then the Number is even and should not be added to oddSum
   4. Print the Value of Sum after the Loop Ends. 
   */
    int H;
    cout<<"Enter The Number till which you want to oddSum:";
    cin>>H;
    int oddSum = 0;
    for (int counter = 1; counter <= H; counter++)
    {
        if(counter%2 != 0){
            oddSum+=counter;
        }
    }
    cout<<"oddSum is: "<<oddSum;
    // Program to Check if a Number is Prime or Not
    /*
    1. Get a Input of a Number
    2. //...pending...
    */
   int num;
   cout<<"Enter a Prime Number";
   
    return 0;
}