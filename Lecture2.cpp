// Lecture 2 Code
#include <iostream>
using namespace std;
int main(){
// Hello World Programme
cout<< "Apna College C++ Course" << endl;
cout<< "I am about to be a hacker in 2025 \n Greatest Hacker\n";

// Variables and Datatypes.
int age = 3; // occupies 4 bytes
char grade = 'A'; //occupies 1 byte
float PI = 3.14f;//occupies 4 bytes
bool A = true; // true translates to one and false translates to zero.
double price = 3302.123; // occupies 4 bytes.
cout<< "Gautam\nSharma\n%d",age;
cout<< "\n++++++++++++++++++++++++++\n";
cout<<"size is age is :"<< sizeof(age);

// Typeconversion and typecasting

/*

1. TypeConversion: Implicit : Automatically done by compiler.
2. typeCasting: Explicit : Forced by the programmer to the compiler.
*/
// Type Conversion
char a = 'A';
int value = a;//This Prints the ASCII value of A
cout<< value;

// Type Casting 
double ds = 2003.323;
int value2 = (int)ds;
cout << "\n"<< value2;

// Inputs in C++
int input;

cout<<"Enter the Age/Input:";
cin>>input;//cin is used for taking inputs.
cout<<input;

// Operators in C++
cout<< (input+age)<<endl;
cout << ((float)input/age)<<endl;
cout << (input*age)<<endl;
cout << ("inputage");
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

//SUM OF TWO NUMber Programme
int num1,num2;
cout<<"Enter two Numbers";
cin>>num1;
cin>>num2;
cout<<"Sum of two numbers is:";
cout<< (num1+num2)<<endl;
return 0;
}
//This is a Single Line Comment
/* This is a Multiline Comment*/
// ***********************************LECTURE CODE COMPLETED*************************************************************