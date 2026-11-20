//////////////////////////////-------------------------------   2-D Array  ------------------------------/////////////////////////////////////


// Print the 2d Array coloumn wise

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[3][2]={{10,20},{30,40},{50,60}};

//     for (int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[j][i]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//________________________________________________________________________________________________________________________________________________________________

// Write a Program to Initialize a 2 - D array and Print the sum of all of its elements .

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[][4]={{10,20,30,40},{50,60,70,80},{90,100,110,120}};

//     int sum = 0;
    
//     for(int i=0;i<3;i++){
//         for(int j = 0 ; j<4 ; j++){
//             sum+=arr[i][j]; 
//         }
//     }

//     cout<<"The Sum of array elements are : "<<sum;
//     return 0;
// }



//____________________________________________________________________________________________________________________________________________


// Write a program to print the largest Element of 2-D Array

// #include<iostream>
// #include<bits\stdc++.h>
// using namespace std;

// int main(){
//     int arr[][4]={{10,20,30,40},{50,60,340,80},{90,100,110,120}};

//    int largest = INT_MIN;
    
//     for(int i=0;i<3;i++){
//         for(int j = 0 ; j<4 ; j++){
//             if(arr[i][j]>=largest){
//                 largest = arr[i][j];
//             } 
//         }
//     }

//     cout<<"The largest element of array is : "<<largest;
//     return 0;
// }


//___________________________________________________________________________________________________________________________________________________


// Write a Program to print the sum of Elements if 2-D Array Row wise .


// #include<iostream>
// using namespace std;

// int main(){

//     // Taking input of the given array from the user
//     int arr[3][3];
//     cout<<"Enter the values of array row wise : ";

//     for(int i=0; i<3; i++){
//         cout<<"\nEnter "<<i<<" th row elements : ";
//         for(int j=0; j<3;j++){
//             cin>>arr[i][j];
//         }     
//     }

//     // printing the array
//        for(int i=0; i<3; i++){
//         for(int j=0; j<3;j++){
//             cout<<arr[i][j]<<" ";
//         }   
//         cout<<endl;  
//     }

//     // printing the row wise sum;
//     for (int i=0; i<3; i++){
//         int sum=0;
//         for(int j=0;j<3;j++){
//             sum+=arr[i][j];
//         }
//         cout<<"\nRow "<<i<<" : "<<sum;
//     }

//     return 0;
// }

//_______________________________________________________________________________________________________________________________________________________


// Same question but this time print the sum coloumn wise 


// #include<iostream>
// using namespace std;

// int main(){

//     // Taking input of the given array from the user
//     int arr[3][3];
//     cout<<"Enter the values of array column wise : ";

//     for(int i=0; i<3; i++){
//         cout<<"\nEnter "<<i<<" th column elements : ";
//         for(int j=0; j<3;j++){
//             cin>>arr[j][i];
//         }     
//     }

//     // printing the array
//        for(int i=0; i<3; i++){
//         for(int j=0; j<3;j++){
//             cout<<arr[j][i]<<" ";
//         }   
//         cout<<endl;  
//     }

//     // printing the row wise sum;
//     for (int i=0; i<3; i++){
//         int sum=0;
//         for(int j=0;j<3;j++){
//             sum+=arr[j][i];
//         }
//         cout<<"\nColumn "<<i<<" : "<<sum;
//     }

//     return 0;
// }


//_______________________________________________________________________________________________________________________________________


// Write a Program to Print all the diagional elements: 


// #include<iostream>
// using namespace std;

// int main(){

//     // Taking input of the given array from the user
//     int arr[3][3];
//     cout<<"Enter the values of array Row wise : ";

//     for(int i=0; i<3; i++){
//         cout<<"\nEnter "<<i<<" th Row elements : ";
//         for(int j=0; j<3;j++){
//             cin>>arr[i][j];
//         }     
//     }

//     // printing the array
//        for(int i=0; i<3; i++){
//         for(int j=0; j<3;j++){
//             cout<<arr[i][j]<<" ";
//         }   
//         cout<<endl;  
//     }

//     cout << endl<<endl;

//     // printing diagonal elements
//     for (int i=0; i<3; i++){
//         for(int j=0;j<3;j++){
//             if(i==j){
//                 cout<<arr[i][j];
//             }
//         }
//         cout<<"\t";
//     }

//     return 0;
// }


// _________________________________________________________________________________________________________________________________________________


// Write a Peogram to Transpose a square Matrix 
/* input -              output -   
  
      20  7  9                 20   6   1 
      6  15  11                7    15  13
      1  13  8                 9    11   8
*/


// #include<iostream>
// using namespace std;

// int main(){

//     // Taking input of the given array from the user
//     int arr[3][3];
//     cout<<"Enter the values of array Row wise : ";

//     for(int i=0; i<3; i++){
//         cout<<"\nEnter "<<i<<" th Row elements : ";
//         for(int j=0; j<3;j++){
//             cin>>arr[i][j];
//         }     
//     }

//     // printing the array
//        for(int i=0; i<3; i++){
//         for(int j=0; j<3;j++){
//             cout<<arr[i][j]<<" ";
//         }   
//         cout<<endl;  
//     }

//     cout << endl<<endl;

//     // Transpose of the Array
//     for (int i=0; i<3; i++){
//         for(int j=i+1;j<3;j++){    //  j  = i+1 is the core logic here
//                   swap (arr[i][j], arr[j][i]);
//         }
//         i++;
//     }


//       // Printing Transpose of the array;
//       cout<<"Transpose of the array is :\n";
//        for(int i=0; i<3; i++){
//         for(int j=0; j<3;j++){
//             cout<<arr[i][j]<<" ";
//         }   
//         cout<<endl;  
//     }

//     return 0;
// }


//_________________________________________________________________________________________________________________________________________________-



//////////////////////////////////-------------------------   POINTERS  --------------------------------------///////////////////////////////////


#include<iostream>
using namespace std;

int main(){
    int a=10;
     
  // Printing the value of a

  cout<<a<<"\t";

  // Printing the address of variable a

  cout<<&a<<"\t";


  // Storing the address of variable a in Pointer

  int *p = &a;

  // Printing the Value of P

  cout<<p<<"\t";

  return 0;
}

