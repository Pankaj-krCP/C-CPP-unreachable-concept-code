#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// helper function 1
void printx2(int a)
{
 cout << a * 2 << " ";
 if(a%2==0){
     throw a;
 }
}
// helper function 2
// object type function30
struct Class2
{
 void operator() (int a)
 {
 cout << a * 3 << " ";
 if (a%2==0)
 {
    throw a;
 }
 
 }
} ob1;
int main()
{
 
 // initializing array
 int arr[5] = { 1, 5, 2, 4, 3 };
 
 cout << "Using Arrays:" << endl;
 
 // printing array using for_each
 // using function
 cout << "Multiple of 2 of elements are : ";
 
 try{
    for_each(arr, arr + 5, printx2);
 }catch(int i){
     cout<<"\nthe exception element is "<<i;
 }
 cout << endl;
 
 // printing array using for_each
 // using object function
 cout << "Multiple of 3 of elements are : ";

 try{
    for_each(arr, arr + 5, ob1);
 }catch(int i){
    cout<<"\nthe exception element is "<<i;
 }
 cout << endl;
 
 // initializing vector
 vector<int> arr1 = { 4, 5, 8, 3, 1 };
 
 cout << "Using Vectors:" << endl;
 
 
 // printing array using for_each
 // using function
 cout << "Multiple of 2 of elements are : ";

 try{
    for_each(arr1.begin(), arr1.end(), printx2);
 }catch(int i){
     cout<<"\nthe exception element is "<<i;
 } 
 cout << endl;
 
 // printing array using for_each
 // using object function31
 cout << "Multiple of 3 of elements are : ";

 try{
    for_each(arr1.begin(), arr1.end(), ob1);
 }catch(int i){
     cout<<"\nthe exception element is "<<i;
 }
 cout << endl;

 return 0;
 
}