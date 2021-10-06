#ifndef addition
#define addition

using namespace std;

void add(){
int i,j,r,c;        // defining variables 
  double ad[10][10];     // defining array 

double A[10][10];  // defining array 
double B[10][10];   // defining array 

for (int i=0;i<r;i++){
  for (int j=0; j<c;j++){
     std::cout<<"Enter your matrix values for A"<<i+1<<j+1<<"\n";     
std::cin>>A[i][j];        // Letting user input the variables for Matrix A
  }
}
for (int i=0;i<r;i++){
  for (int j=0; j<c;j++){
     std::cout<<"Enter your matrix values for B"<<i+1<<j+1<<"\n";   
std::cin>>B[i][j];             // Letting the user input varaible for matrix B
  } 
}
std::cout<<"Your matrix A is:\n";
for (i=0;i<r;i++){
  for (j=0; j<c;j++){
     std::cout<<A[i][j]<<"\t";           // Printing the inputed matrix A
  }
  std::cout<<"\n";
}

 std::cout<<"\n"<<"Your matrix B is:\n";
for (i=0;i<r;i++){
  for (j=0; j<c;j++){
     std::cout<<B[i][j]<<"\t";           // Pringint the inputted matrix B 
  } 
  std::cout<<"\n";
}
std::cout<<"\n";
for (int i=0;i<r;i++){
  for (int j=0; j<c;j++){
ad[i][j]= A[i][j]+B[i][j];         // Adding the two matrices togther 
  }
}
std::cout<<"Matrix A + B =\n";
for (int i=0;i<r;i++){
  for (int j=0; j<c;j++){
std::cout<<ad[i][j]<<"   ";             // printing the sum of the two matrices 
  }
  std::cout<<"\n";
}

}

#endif