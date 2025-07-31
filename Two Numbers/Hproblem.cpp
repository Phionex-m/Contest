#include <iostream>
#include <cmath>

using namespace std; 

int main() {
    
    double A = 10;
    double B = 4;
    double div = A/B;
    
    double floorResult = floor(div);
    double roundResult = round(div);
    double ceilResult = ceil(div);
    
    cout<<"floor""\t"<<A<<"/"<<B<<"="<<floorResult<<"\n"; 
    cout<<"round""\t"<<A<<"/"<<B<<"="<<roundResult<<"\n"; 
    cout<<"ceil""\t"<<A<<"/"<<B<<"="<<ceilResult<<"\n"; 
    
    
system("pause "); 

    return 0;
}