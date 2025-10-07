#include <iostream>
using namespace std;

// Function printHello
int printHello(){
    cout<<"Print Hello";
    return 0;
}

// Function sum 
int sum(int a, int b){// HERE A AND B ARE PARAMETERS;
    int s = a+b;
    return s;
}
int factorial(int n){
   int fact = 1;
   for (int i = 1; i <= n; i++){
    fact = fact*i;
   }
   return fact;
}

int NCR(int n,int r){
    int nfact = factorial(n);
    int rfact = factorial(r);
    int n_rfact = factorial(n-r);

    int ncr = nfact/(rfact*n_rfact); 
    return ncr;
}
int main(){
    printHello();
    cout<< printHello();
    cout<<sum(2.32,3);// HERE 2.32 AND 3 ARE ARGUMENTS
    cout<<"Factorial is: "<<factorial(5);
    cout<<"NCR for n=6 and r=3 : "<<NCR(6,3);
    return 0;
}