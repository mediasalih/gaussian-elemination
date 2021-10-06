#ifndef solution
#define solution

using namespace std; 

void sol(){

int i,j,n,k;    // defining variablse 

  std::cout<<"Enter the number of equations to perfrom Gaussian elimination\n ";        
    std::cin>>n;           // allowing user to input number of equations 

double G[n][n+1];        // defining arrays 
double sol[n]; // defining arrays 
  
   for (i=0;i<n;i++){
     for (j=0; j<n+1;j++){
std::cout<<"Enter your matrix values for G"<<i+1<<j+1<<"\n";
       std::cin>>G[i][j];                     // letting user input the  values for matrix G
     }
     }
    std::cout<< "Your Inputed Augmented matrix is: \n";
  for ( i=0;i<n;i++){ 
     for ( j=0; j<n+1;j++){
       std::cout<<G[i][j]<<"\t";                     // Printing out what the user inputted 
     }
     std::cout<<"\n";
     }
 
for(i=0;i<n;i++) {                   
  for(j=i+1;j<n;j++){                     
     if(abs(G[i][i]) < abs(G[j][i])){
      for(k=0;k<n+1;k++){                   // swapping the rows for the matrix 
                    
      G[i][k]=G[i][k]+G[j][k];
      G[j][k]=G[i][k]-G[j][k];
      G[i][k]=G[i][k]-G[j][k];
     }
     }
     }
    }
for (i=0;i<n-1; i++){
  for (j=i+1; j<n; j++){                          // Gaussian elimination

    double s=G[j][i]/G[i][i]; 
    for (k=0;k<n+1;k++){
      G[j][k]= G[j][k]- s*G[i][k]; 
    }
  }
}


for (i=n-1;i>=0;i--){                // finding the unknown variables of the matrix 
  sol[i]=G[i][n];
  for (j=i+1; j<n;j++){
    if (i!=j){
      sol[i]=sol[i]-G[i][j]*sol[j];
    }
  }
sol[i]= sol[i]/G[i][i];
}

std::cout<<"\n"<<"The Values are:\n";   

for (i=0;i<n;i++){
  std::cout<<sol[i]<<"\n";               // printing out the final answers 
}
 
#endif

}