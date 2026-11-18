// Character Array 

// #include<iostream>
// using namespace std;

// int main(){
//     char name[100];
//     cout<<"Enter Your Name : ";
//     cin>>name;
//     //cout<<name;

//     // case 1
//     //name[7]='K';
//     //cout<<name;

//     //case 2
//     //name[6] = 'x';
//     //cout<<name;
    
//     // case 3
//       name[2]='\0';
//       cout<<name;
   

//     return 0;
// }


//____________________________________________________________________________________________________


// Calculate the length of the String 

// #include<iostream>
// using namespace std;

// int main(){
//     char name[100];
//     cout<<"Enter Your Name : ";
//   //  cin>>name;       // It reads input only until the first whitespace (space, tab, or newline).  for input - Tushar kadam this statement is providing o/p = 6
//    cin.getline(name, 100);   // this line of code will give me the correct output for the input = " Tushar kadam" (including space)


//     int count=0;
//     int i=0;

//     while(name[i]!='\0'){
//         count ++;
//         i++;
//     }
//     cout<<"Total characters are : "<< count;
//     return 0;
// }


//_______________________________________________________________________________________________________


// Take 5 values of the array as input from the user , pass the array to the function 
// void updatearray() in that function increment each value by 2 and the again print the  updated array

// #include<iostream>
// using namespace std;

// void updatearray(int a[],int size){
//     for(int i=0; i<size; i++){
//         a[i]=a[i]+2;
//     }
// }

// int main(){
//     int arr[5];

//     cout<<"Enter 5 values : ";

//     for(int i=0; i<5; i++){
//         cin>>arr[i];
//     }

//     updatearray(arr,5);

//     cout<<"The Values of the Updated array are : ";

//        for(int i=0; i<5; i++){
//         cout << arr[i] <<"  ";
//     }

//     return 0;
// }


//____________________________________________________________________________________________________________________


// Write a Program to reverse a string



// #include<iostream>
// using namespace std;

// void revstr(char arr[]){

    // To apply the logic of swap we need to find the length of the string

//     int count=0;
//     int i=0;

//     while(arr[i]!='\0'){
//         count++;
//         i++;
//       }

//        int  first=0;
//        int last=count-1;
//        char temp;

//             while(first<last){
//              temp =  arr[first];
//              arr[first]=arr[last];
//              arr[last]=temp;
//              first ++;
//              last --;
//               }
//      }


// int main(){
// char str[100];
// cout<<"Enter the string : "; cin.getline(str,100);

// cout<<str<<"\n";

// revstr(str);

// cout<<"Updated String is : ";
// cout<<str;
//     return 0;
// }



////////------------------- USING IN-BUILT FUNCTIONS OF STRING-----------------------------------//////////////////////


// Find the length of string using In-built function.

// #include<iostream>
// #include<climits>
// #include<cstring>
// using namespace std;

// int main(){
//     char name[100];
//     cout<<"Enter Name : "; cin.getline(name,100);
//     cout<<name<<'\n';
//     cout<<"String Length : "<<strlen(name);
//     return 0;
// }



//_______________________________________________________________________________________________________________________________________________________________


// Write a program to compare two strings taken input from the user and check whether they are equal or not 

// #include<iostream>
// #include<bits\stdc++.h>
// #include<cstring>
// using namespace std;

// int main(){
//     char str1[100],str2[100];
//     cout<<"Enter the string 1 "; cin.getline(str1,100);
//     cout<<"\nEnter the string 2 "; cin.getline(str2,100);

//     // finding the highest length string 

//     int last = max(strlen(str1),strlen(str2));

//     int i = 0 ;
//     int flag = 1 ;

//     while (i<last){
//         if (str1[i]!=str2[i]){   // doubt yaha par direct character match kar rahe hai ya fir hum unki ascii value check kar rahe hai.
//                                  // we are directly comparing characters, but internally C++ compares their ASCII values (for standard ASCII characters).
//                                 // Important: You don't need to manually convert characters into ASCII values. C++ handles that automatically.
//             flag = 0;
//             break;
//         }
//         i++;
// }

//       if(flag==1){
//          cout<<"Strings are equal ";
//         }
//       else{
//         cout<<"Strings are not equal ";
//       }

//       return 0;

//     }

/* Problem and solution  :- In this code we are checking whether the characters entered by the user are equal or not , but this is the half part of the question .
We are asked that whether the two strings are equal or not , Thus If two strings are equal then their lenght should be same */

// #include<iostream>
// #include<bits\stdc++.h>
// #include<cstring>
// using namespace std;

// int main(){
//     char str1[100],str2[100];
//     cout<<"Enter the string 1 "; cin.getline(str1,100);
//     cout<<"\nEnter the string 2 "; cin.getline(str2,100);

//     int flag = 1 ;

//      // checking string lengths are equal or not.

//     if(strlen(str1)!=strlen(str2)){
//         flag = 0;
//     }
//     else{
//          int i = 0 ;
    
//     while (str1[i]!='\0'){
//         if (str1[i]!=str2[i]){   // doubt yaha par direct character match kar rahe hai ya fir hum unki ascii value check kar rahe hai.
//                                  // we are directly comparing characters, but internally C++ compares their ASCII values (for standard ASCII characters).
//                                 // Important: You don't need to manually convert characters into ASCII values. C++ handles that automatically.
//             flag = 0;
//             break;
//         }
//         i++;
// }
//     }

//       if(flag==1){
//          cout<<"Strings are equal ";
//         }
//       else{
//         cout<<"Strings are not equal ";
//       }

//       return 0;

//     }

//_____________________________________________________________________________________________________________________________________________________________


// Write a program to concatenate two strings

/*  I/P - str1="abc"
          str2="def"

    O/P - str1="abcdef"
          str2="def"
 */

 /* My logic
   1) find the length of both string ,str1 and str2;
   2) strlen() will give us the length excluding '\0'
   3) overwrite '\0' of str1 by new values of str2 till the last excluding '\0'
   4) again add null character at the end of str1.
 */


// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){

//     char str1[100],str2[100];
//         cout<<"Enter the string 1 "; cin.getline(str1,100);
//         cout<<"\nEnter the string 2 "; cin.getline(str2,100);

        
//         cout<<"\nstring 1 before updation ::-> "<<str1;
//         cout<<"\nstring 2 before updation ::-> "<<str2;

//         int len1 = strlen(str1);
//         int len2 = strlen(str2);

//         for(int i = len1; i<=len1+len2; i++){
//             str1[i]=str2[i-len2];
//         }

//       //  str1[len1+len2]='\0'; // actually we do no have need to put this character her because it automatically gets copied from the str2
         
//         cout<<"\nstring 1 after updation ::-> "<<str1;
//         cout<<"\nstring 2 after updation ::-> "<<str2;

//         return 0;
// }


// ______________________________________________________________________________________________________________________________________________________________


// Write a program to Print all the prefix of a string

/*

  I/P - "abcd"          O/P - a
                              ab
                              abc
                              abcd 

*/

// #include<iostream>
// #include<cstring>
// using namespace std;

// int main(){

//     char str[100]="abcd";
//     int len = strlen(str);

//     for(int i=0; i<=len ; i++){    // for(int i=0; str[i]!='\0'; i++)  we can use this also instead calculating the length of string .
//         for(int j=0; j<i; j++){
//             cout<<str[j];
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//_______________________________________________________________________________________________________________________________________________________________________

#include<iostream>
#include<cstring>
using namespace std;
void revstr(char arr[]);

int main(){

    char str1[100];
    cout<<"Enter string : "; 
    cin.getline(str1,100);
    
    char str2[100];
    strcpy(str2,str1);
    revstr(str1);

    if(strcmp(str2,str1)==0){
        cout <<"Palindrome  ";
    }
    else
        cout<<"Not Palindrome ";

    return 0;
}

void revstr(char arr[]){
    int first =0;
    int last = strlen(arr)-1;  // -1 is done to exclude the null character during swapping

    while(first<last){
        arr[first]=arr[first]+arr[last];
        arr[last]=arr[first]-arr[last];
        arr[first]=arr[first]-arr[last];

        first++;
        last--;
    }
    return;
}




