#ifndef ELEC2110CAA
#define ELEC2110CAA

using namespace std;

void getDimensions(){
  int i,j,r,c;
  

double A[10][10]; 
double B[10][10];
std::cout<< "Enter a number for the rows of the matrices:\n";       // asking user for the number of rows
std::cin>>r;           // lettinf usinf inout number for rows 
std::cout<<"Enter a number for the colum of the matrices:\n";        // askinf user for the number of columns 
std::cin>>c;       // letting the user inout a number for the column

if (r!=c){
  std::cout<<"Try other values for rows and columns so that it is a m by m matrix!\n";
  return getDimensions();        // if the number for row doesnt equal the number of columns the user has to try again 
}
 }

#endif