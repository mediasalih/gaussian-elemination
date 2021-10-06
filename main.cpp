#include <iostream>
#include "ELEC2110CAA.h"
#include "addition.h"
#include "subtraction.h"
#include "multiply.h"
#include "solution.h"



 
int main(int argc, char **argv ) {
    int i,j,r,c,n;             // defining the variables that will be used
double A[10][10];              // defining an array 
double B[10][10];              // defining an array 
getDimensions();               // calling function getDimensions

add();                         // calling function add
sub();                         // calling function sub
mul();                         // calling function mul
sol();                         // calling function sol

void LU(double [][10],double [][10],double [][10],int n);    
void out(double [][10], int );                        // void function for the output 
double F[10][10],L[10][10],U[10][10];                 // Defning arrays for the matrices 
std::cout<<"To Perform LU decompostion to find the inverse of matrix F, Enter the size of the square matrix \n"; // Printing to screen 
std::cin>>n;              // Letting the user input the size of the matrix 

for (int i=0;i<n;i++){        
  for (int j=0; j<n;j++){
     std::cout<<"Enter your matrix values for F"<<i+1<<j+1<<"\n";      // Printing and letting user input matrix values 
std::cin>>F[i][j];
  }
}
std::cout<<"Your entered matrix is: \n";          // printing out the entered matrix 
 for ( i=0;i<n;i++){
     for ( j=0; j<n;j++){
       std::cout<<F[i][j]<<"\t"; 
     }
     std::cout<<"\n";
     }

    LU(F,L,U,n);                                    // calling the void fucntion LU 
    std::cout<<"The L decompostion:\n";           // printing to screen 
    out(L,n);                                     // calling the void function out (for output of L)
    std::cout<<"The U Decomposition:\n";          // printing to screen 
    out(U,n);                                     // calling the void function out( for the out put of U)

 
}

  
void LU(double F[][10], double L[][10], double U[][10], int n)         // void function
{
int i,j,k;                              // defining varaibles 
for (i=0; i<n;i++){     
  for (j=0;j<n;j++){
    if (j<i)                         
    L[j][i] =0; 
    else {
      L[j][i] = F [j][i];
    for (k=0;k<i;k++){
      F[j][i]=  F[j][i] - F[j][k] * U[k][i];
    }
    }
  }
  for (j=0; j<n ;j++){
if (j<i)
  U[i][j]=0; 
  else if (j==i)
  U[i][j]= 1;
  else {
    U[i][j]= F[i][j]/ L[i][j]; 
    for (k=0;k<i;k++){
      U[i][j] = U[i][j] - ((L[i][k]* U[k][j])/L[i][i]);
    }
  }

}

}
  }
  void out(double w[][10], int n){
    int i,j; 
    for (i=0; i<n; i++){ 
      for (j=0; j<n;j++){
      printf("%f", w[i][j]);
    }
    std::cout<<"\n";
  }


  }


