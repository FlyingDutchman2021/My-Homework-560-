#include <iostream>
using namespace std;


void print(int number){

    for (int row = 1; row <= number; row ++)
    {
        for (int column = 1; column <= (number - row); column ++)
        {
            cout<<".";
        }

        for (int column = number - row; column < number; column ++)
        {
            cout<<"*";
        }

        cout<<endl;
        
        
    }
    cout<<endl;
    
}


int main(){

bool continueOrNot = true;
int number;

while (continueOrNot == true){
    cin >> number;
    if (number == -1){
        continueOrNot = false;
    }else {
        print(number);
    }
}



    return 0;
}