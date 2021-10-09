#include <iostream>
using namespace std;

void printLine(int level, int counter){
    
    //blanks
        for(int i = 0; i < level - counter; i ++){
            cout<<" ";
        }
        //stars
        for(int i = 0; i < (2*counter - 1); i++){
            cout<<"*";
        }
        //blanks
        for(int i = 0; i < level - counter; i ++){
            cout<<" ";
        }
        //end line
        cout<<"\n";

}



void print(int level){
    for (int counter=1 ; counter <= level; counter ++){
        printLine(level,counter);
    }

    for (int counter = level -1; counter >0; counter --){
        printLine(level,counter);
    }
    cout<<endl;
}




int main(){

    int level=0;
    while (true){
        cin>>level;
        if (level == -1){
            break;
        }

        print(level);
    }


    return 0;
}