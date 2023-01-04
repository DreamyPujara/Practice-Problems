#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    
    if (97 <= n <= 122)
    {
        cout<< " Lower Case Alphabet "<<endl;
        
    }
    else if(65 <= n <= 90)
    {
        cout<< "Upper Case Alphabet "<<endl;
    }
    else if(48 <= n <= 57)
    {
        cout<< "numerical digit"<<endl;
    }
    
}