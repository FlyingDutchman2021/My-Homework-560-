#include <iostream>
using namespace std;

int main(){

    int count=0,input=0;
    bool continueOrNot=true;

    while (continueOrNot == true){
        cin>>input;

        if (input == -1){
            continueOrNot = false;
        }else{


            for (int counter1=1; counter1 <= input; counter1 ++){
                for (int counter2=1 + counter1; counter2 <= input; counter2++){
                    for (int counter3=1 + counter2; counter3 <= input; counter3 ++){
                        if (counter1*counter1 + counter2* counter2 == counter3 * counter3){
                            cout<<counter1<<" "<<counter2<<" "<<counter3<<endl;
                            count++;
                        }
                    }
                }
            }

            cout<<"A total of "<<count<<" triples were found."<<endl;
            count=0;
        }
    }



    return 0;
}