#include <iostream>
#include <array>
#include <math.h>
using namespace std;

int main(){

    int numbers[99], quantity=0, target=0;

    while(1){
        cin>>quantity;
        if (quantity == -1){
            break;
        }else{


            cin>>target;

            for (int i=0; i<quantity; i++){
                cin>>numbers[i];
            }

            for (int counter1=0; counter1<quantity; counter1 ++){
                for (int counter2=counter1+1; counter2 < quantity; counter2++){

                    if(numbers[counter1]+numbers[counter2] == target){
                        cout<<counter1<<" "<<counter2<<endl;
                    }

                }
            }
        }
    }

    return 0;
}