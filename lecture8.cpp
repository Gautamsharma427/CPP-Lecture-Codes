#include <iostream>
using namespace std;
int main(){
    int marks[5]={20,50,90,19,23};
    // cout << "hello world";
    // cout << marks[7];//index value = 23
    
    // Finding the smallest value of the array
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int marks_size = 6;

    for (int i = 0; i < marks_size-1; i++)
    {
        //comparing :
        smallest = min(smallest,marks[i]);
       
    }
    cout<<"smallest Value is: "<<smallest<<endl;
    
    int targetvalue = smallest;
    for (int i = 0; i < marks_size; i++)
    {
        if (targetvalue == marks[i])
        {
            cout<<"and Its Index is:"<<i;
            break;
        }
        
    }

    //Finding the largest value of the Array
    for (int i = 0; i < marks_size-1; i++)
    {
        largest = max(largest,marks[i]);
    }
    cout<<endl<<"THE LARGEST VALUE IS "<<largest;
    targetvalue = largest;
    for (int i = 0; i < marks_size-1; i++)
    {
        if (targetvalue == marks[i])
        {
            cout<<endl<<"INDEX OF LARGEST VALUE IS : "<< i;
        }
        
    }
    
    // 2 Pointer Approach
    int arr[]={1,2,3,4,5,6,7,8};
    int st_Pointer = 0;
    int stop_Pointer = 7;
    cout<<endl<<"BEFORE : ";
    int len_arr = 8;
    for (int i = 0; i < stop_Pointer; i++)
    {
        cout<<arr[i]<<" ";

    }
    
    while (st_Pointer<stop_Pointer)
    {
        swap(arr[st_Pointer],arr[stop_Pointer]);
        st_Pointer++;
        stop_Pointer--;
    }
    cout<<endl<<"AFTER : ";
    for (int i = 0; i < len_arr; i++)
    {
        cout<<arr[i]<<" ";

    }
    
    return 0;
}