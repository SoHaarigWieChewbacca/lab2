/*
 *	Carola Dieregsweiler	
 * 	Jennifer Nastola
 * 	Paul (Bambi)
 */

#include <iostream>
using namespace std;

int main() {
  
  int N = 1000;
  
  
  for(double r=0; r<=4; r+=0.01) {
    double x = 0.5;

    for(int i=1; i<=100; i++) {
      x = x*r*(1-x);
    }
    for(int i=100; i<=N; i++) {
      x = x*r*(1-x);
      cout << r << " " << x << endl;
    }
    
  }
  
  return 0;
}