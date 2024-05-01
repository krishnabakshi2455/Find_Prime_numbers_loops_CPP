#include <iostream>
using namespace std;

int main(){
    
    int num;
    cin>>num;
    int prime = 0;
    for (int i = 1; i <=num; i++)
    {
        if (num % i ==0)
        {
            prime++;

        }
        
    }
    if (prime > 2)
    {
        cout<<"not prime" << num;
    }else{
        cout<<"prime number" << num;
    }
    

    



    return 0;
}