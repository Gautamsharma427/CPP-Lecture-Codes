#include <iostream>

using namespace std;


int decimalToBinary(int decnum){
    int ans =0, pow = 1;
    while(decnum>0){
        int rem = decnum%2;
        decnum = decnum/2;
        ans = ans + (rem*pow);
        pow*=10;
        
    }
    return ans;

    }
    int binaryToDecimal(int binary){
        while(binary>0){
            int  rem = binary%10;
            
        }
    }
int main(){
    int a = 4, b = 8;
    cout<< (a & b) << "\n";
    cout<< (a | b) << "\n";
    cout<< (a ^ b);
    cout<< (10>>2);
    cout<<(12<<5);
    cout<<endl;
    cout<<decimalToBinary(50);
    return 0;
}
// Decimal Numbers to Binary Numbers
/*
Decimal to Binary
1. Find Factors of nunber which you want to convert
2. Write the Number backwards
3. 42 base 10= 101010 base 2
*/