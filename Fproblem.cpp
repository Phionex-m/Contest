#include <iostream>
using namespace std;

int main() {
    int N =50;
    int M = 45;
    
  if (N&&M <10){
    int sum = N+M ; 
        cout <<sum<<"\n";
    }
  else {
    double lastnum1  = N%10;
    double lastnum2  = M%10;
    double sum2= lastnum1 + lastnum2;
    cout << sum2<<"\n";
    }
    
    
    
    system("pause");

    return 0;
}