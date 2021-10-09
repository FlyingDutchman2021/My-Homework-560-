#include <iostream>
#include <iomanip>
using namespace std;

double returnValue(int input){
    if ( input % 2 == 0)
    {
        return 1;
    }else{
        return -1;
    }
    
}


int main(){




    bool continueOrNot = true;
    int time=0;
    double result=0;
    

    while (continueOrNot == true)
    {
        cin>>time;

        if (time == -1){
            continueOrNot=false;

        }else{
            result = 0;
            for(double i=0; i<time; i++){
                result += returnValue(i)*4/(1+2*i);
        
                cout<<fixed<<showpoint<<setprecision(8)<<result<<endl;
            }
        }
        cout<<endl;
    }
    
    

    






    return 0;
}