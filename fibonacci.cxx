#include <iostream>

using namespace std;

int main() {
  
  cout << "Bitte geben Sie an, welche Fibonacci-Zahl Sie aufrufen möchten! ";
  int a;
  cin >> a;
  
  int f0 = 0;
  int f1 = 1;
  int f;
  
  if (a==0){
    f = 0;
  }
  else if (a==1){
    f = 1;
  }
  else {
    
    for(int i=1;i<a;i++){
    
      f = f0 + f1;
      
      f0 = f1;
      f1 = f;
      
    }
  }
  
  cout << "Die " << a << ". Fibonacci-Zahl ist " << f << "." << endl;   
  
  return 0;
}
