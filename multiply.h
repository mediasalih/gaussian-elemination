#ifndef multiply
#define multiply
using namespace std;


void mul(){

  int i,j,r,c;            // defining variables 

double A[10][10],B[10][10],m[10][10];  // defining arrays 


std::cout<<"\n"; 
for (int i=0;i<r;i++){
  for (int j=0; j<c;j++){
m[i][j]= A[i][j]*B[i][j];         // multiplying the matrices 
  }
}
std::cout<<"Matrix A * B =\n";
for (int i=0;i<r;i++){
  for (int j=0; j<c;j++){             // printing out the product of the matrices 
std::cout<<m[i][j]<<"   ";
  }
  std::cout<<"\n";


  
}

#endif
}