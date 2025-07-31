#include <iostream>
using namespace std;

int main() {

    int N =5;
    double result =1;

     if (N==0||N==1)
{
     result = 1;
    cout<< result<<"\n";
    
    }
     
    else if (N>0)
{

 for (int i =1; i<=N ; ++i)

 {
 result *= i;

}

cout << result<<"\n";

}

    else
{

 cout<<"Negative number not have factorial";

 }
 
    
    
    
    system("pause");

    return 0;
}