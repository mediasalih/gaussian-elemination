#ifndef subtraction
#define subtraction
using namespace std;

void sub(){

  int i,j,r,c;         // defining  variables 
  double s[10][10],B[10][10],A[10][10];         // defining arrays 

std::cout<<"\n";
for (int i=0;i<r;i++){
  for (int j=0; j<c;j++){
s[i][j]= A[i][j]-B[i][j];            // subtracting the two arrays 
  }
}
std::cout<<"Matrix A - B =\n";
for (int i=0;i<r;i++){
  for (int j=0; j<c;j++){            // printing out the difference of the two matrices
std::cout<<s[i][j]<<"   ";
  }
  std::cout<<"\n";
}
#endif
}


