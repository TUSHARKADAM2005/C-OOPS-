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

#include<iostream>
#include<climits>
#include<cstring>
using namespace std;

int main(){
    char name[100];
    cout<<"Enter Name : "; cin.getline(name,100);
    cout<<name<<'\n';
    cout<<"String Length : "<<strlen(name);
    return 0;
}
