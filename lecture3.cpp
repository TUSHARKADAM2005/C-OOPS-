// Take 3 number input from the user and find the largest number among them
#include <iostream>
using namespace std;
int main() {
 /*  int a, b, c;
    cout<<"Enter 1st : "; cin>>a;
    cout<<"Enter 2nd : "; cin>>b;
    cout<<"Enter 3rd : "; cin>>c;

    int max = a;
    if(b>=max){
         max=b;    
     }
     if (c>=max){  // earlier i had used the else-if condition but, there is a problem, that if the (b>max) is true then else-if will not get executed, even when the c is the largest number.
        max=c;
     }

     cout<<"the maximum number is : "<<max;

     return 0
}
        */ 


// alternative code
/*

if((a>=b)&&(a>=c)){
    cout<<"Number: "<<a<<" is the largest";
}
else if ((b>=a)&&(b>=c)){
    cout<<"Number: "<<b<<" is the largest";
}
else{
    cout<<"Number: "<<c<<" is the largest";
}

    return 0;
}
    */

//_________________________________________________________________________________________________________________________________________________________________________________-

// Take an Character as input from the user and print whether it is in upper case or in lowercase.


/*
char ch;
 cout<<"Enter the character : "; cin>>ch;

int x = int(ch);  // Typecasting to get the ascii value of the character

if((x>=65)&&(x<=91)){
    cout <<" The character is in Uppercase ";
}
else if((x>=97)&&(x<=123)){
    cout<<"lowercase ";
}

else 
    cout<<"Entered another character ";

return 0;
}
*/  

// alternatively

/*
  char ch;
  cout<<"enter the character : " ; cin>>ch;
    
  if((ch>='A')&&(ch<='Z')){
    cout<<"Uppercase";
   }
  else if((ch>='a')&&(ch<='z')){
    cout<<"lowercase";
   }
  else
    cout<<"Invalid Alphabet";

  return 0;
}  
     
 */


 //___________________________________________________________________________________________________________________________________________________________________________


 // Given N , print sum of all even values form 1 to N

/*
int N;
    cout<<"Enter the value of N : "; cin>>N;
    int sum=0;
    for(int i=2; i<=N; i=i+2){
        sum=sum+i;
    }
    cout<<sum;
        
    return 0;
}
     */



//_____________________________________________________________________________________________________________________________________________________________________________

// Given N, find the sum of all digits of N

/*
int N;
 cout<< " Enter the number "; cin>>N;

 int lastdigit=0;
 int sum=0;

    while(N!=0){
        lastdigit=N%10;  // taking the last digit (Rightmost digit)
        N=N/10;  // decreasing the number
        sum+=lastdigit;  // adding the last digit to the sum
    }
    cout<<"The sum is :"<<sum;
    return 0;
}    */


// Here we have used the while loop because we dont know the number of iterations required in advanced, it totally depends on the users (Length of number entered by the user)

//__________________________________________________________________________________________________________________________________________________________________________________________


// Given N, Print the reverse of the number N.

/*
int N;
cout<<"Enter the number : "; cin>>N;

int rev=0;
int lastdigit=0;

 while(N!=0){
    lastdigit=N%10;
    N=N/10;
    rev=lastdigit;
    cout<<rev<<"";
 }

 return 0;
}  */

// the above code is just printing the number in reverse order but not making a reverse number 

int N;
cout<<"Enter the number : "; cin>>N;

int rev = 0;
int lastdigit = 0;

 while(N>0){

    lastdigit = N%10;
    N = N/10;
    rev = rev*10 + lastdigit;
    
 }
cout << rev;
 return 0;
}


