// Given N, check whether it is Palindrome number or not.
#include<iostream>
#include<climits>

using namespace std;

void swap(int &a, int &b){
    a=a+b;
    b=a-b;
    a=a-b;   }

bool isprime(int a){
    for(int i=2; i<a; i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}


int fact(int a){
     int value=1;
    
    for(int i=2; i<=a;i++){
        value = value*i;
    }
    return value;
}

int main(){
 
 
 /*   int N;
    cout<<"Enter the Number : "; cin>>N;
    int temp=N;
    int lastdigit=0;
    int rev=0;

    while(N>0){
        lastdigit = N%10;
        N=N/10;
        rev = rev*10+ lastdigit;
    }

    if(temp==rev)
           cout<<"It is Palindrome number";
    else
           cout<<"It is Not Palindrome number";

    return 0;
}*/


//______________________________________________________________________________________________________________________________________________________________________


// Given N, count the number of set bits and print it.


/*
int N;
cout<<"Enter the Number : "; cin>>N;
int count=0;
int temp;
    
    while(N>0){
        temp = N&1;
         N = N>>1;      // updating the Number by shifting it to right.

        if(temp == 1 ){
            count= count + 1;
        }
    }
    cout<<"Set Bits are : "<<count;
    return 0;
}   
*/


// sirs way (without the use of if stmt)


/*
int N;
cout<<"Enter the Number : "; cin>>N;

int count=0;

 while(N>0){
    count +=(N&1);
    N=N>>1;
 }

  cout<<"Set Bits are : "<<count;
    return 0;
} */


//______________________________________________________________________________________________________________________________________________________


// Print the right angled tringle pattern for input N


/*
int N;
cout<<"Enter the Number : "; cin>>N;
int i=1;

while (i<=N){
    int j=1;
    while(j<=i){
        cout<<"* ";
        j++;
    }
    cout<<endl;
    i++;
}

return 0;
}
 */


//________________________________________________________________________________________________________________________________________________________________________________

// Print the sum of all values of the array , take all things as input from the user.


/*
int n;
cout<<"Enter the size of array : \n"; cin>>n;

int arr[n];

cout<<"\nEnter the values of array : \n";

for(int i=0; i<n; i++){
    cin>>arr[i];
}

int sum=0;

for(int i=0 ; i<n; i++){
    sum = sum + arr[i];
}

cout<<"The sum of all values of the array is : "<<sum;
return 0;
}
  */

//_____________________________________________________________________________________________________________________________________________________________________________


// find the largest element of the array take all the values as input from the user
// #inlclude<climits>


/*
int n;
cout<<"Enter the size of array : \n"; cin>>n;

int arr[n];
cout<<"\nEnter the values of array : \n";

// taking values
for(int i=0; i<n; i++){
    cin>>arr[i];
}

//Printing the values
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}

// finding the largest element
int largest =INT_MIN;

for(int i=0;i<n;i++){
    if(arr[i]>=largest){
        largest = arr[i];
    }
}
cout<<"The largest value of the array is : "<<largest;

return 0;

} */


// Write a program to swap two numbers


/*
int a,b;
cout<<"Enter the numbers : "; cin>>a>>b;

cout<<"\nThe numbers are : "<<a<<" "<<b;

 a = a+b; //  a=a^b;  this problem can also be evaluated using the xor operator (Bitwise operator)
 b = a-b; //  b=a^b;
 a = a-b; //  a=a^b;

 cout<<"\nThe numbers after swapping : "<<a<<" "<<b;

 return 0;
}
 */


 //____________________________________________________________________________________________________________________________________________________________________


// Write a Program to Print all the elements of the array in reverse order.

/*
int n;
cout<<"Enter the size of the array : "; cin>>n;

int arr[n];

cout<<"\nEnter array elements : ";
for(int i=0;i<n;i++){
    cin>>arr[i];
    cout<<" ";
}

cout<<"\nReverse order array elements : ";
for(int i=n-1;i>=0;i--){
    cout<<arr[i];
    cout<<" ";
}

return 0;
}
*/

//___________________________________________________________________________________________________________________________________________________


// Write a Program to reverse the actual array.


/*
int arr[]={4,8,9,7,3,6};
int size = sizeof(arr)/4;

int first = 0;        // first index 
int last = size -1;   // last index

 // logic of swapping two numbers
while(first<last){
    arr[first] = arr[first] +arr[last] ;
    arr[last] = arr[first] -arr[last] ;
    arr[first] = arr[first] -arr[last] ;

    first ++;
    last --;
}

// Printing reversed array

for(int i=0; i<size; i++){
    cout<<arr[i]<<"\t";
}

return 0;
}  
    */


//_____________________________________________________________________________________________________________________________________________________________________-

// Take two input from the user , Swap them with the help of function having void return type.


/*int a,b;
cout<<"Enter two values : "; cin>>a>>b;

cout<<"\nbefore swapping a : "<<a<<" b : "<<b;

swap(a,b);

cout<<"\nafter swapping a : "<<a<<" b : "<<b;
return 0;
}*/                                                   


// Mistake in this code 


/* 
C++ creates two copies of the original variables and passes them to the function.

For example:
- Original a = 10
- Original b = 20
- Function receives copies a = 10, b = 20.
Our function swaps these copies, not the original variables.

Therefore, the output remains:
before swapping a : 10 b : 20
after swapping a : 10 b : 20
*/


// correct code  ----->>>>>>

/*
int a;
int b;
cout<<"Enter two values : "; cin>>a>>b;

cout<<"\nbefore swapping a : "<<a<<" b : "<<b;

swap(a,b);

cout<<"\nafter swapping a : "<<a<<" b : "<<b;
return 0;
}

*/

//____________________________________________________________________________________________________________________________________________________________________________


// write a program to chek whether the given number is prime or not with the help of functions

/*
int n;
cout<<"Enter the number to check : ";cin>>n;
 
if(isprime(n)==true)
     cout<<"\nPrime";
else 
    cout<<"NotPrime";
return 0;
}   */


//_____________________________________________________________________________________________________________________________________________________________________________


// Write a Program to Print the factorial of a Number using functions

int x;
cout<<"Enter the number to find the factorial : ";cin>>x;

cout<<fact(x);
return 0;
}

