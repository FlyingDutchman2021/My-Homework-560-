#include <iostream>
#include <vector>

using namespace std;



int main(){


    int quantity=0, target=0, tempData=0;
    bool continueOrNot = true;
    vector <int> vector;


    while (continueOrNot == true){
   
        cin>> quantity;
        
        if (quantity == -1){
            continueOrNot = false;
        }else{
           
            cin>> target;

            for (int i = 0; i < quantity; i++)
            {
                cin>>tempData;
                vector.push_back(tempData);
            }
            cout<<endl;
        
            for (int i=0; i< vector.size(); i++){
                if (vector.at(i)>= target){
                    vector.erase(vector.begin() + i);
                    i--;

                }
            }


            for (int counter1=0; counter1<vector.size(); counter1 ++){
                for (int counter2 = counter1+1; counter2<vector.size(); counter2 ++){
                    if (vector.at(counter1)+vector.at(counter2)==target)
                    {
                        cout<<vector.at(counter1)<<" + "<<vector.at(counter2)<<" = "<<target<<endl<<endl;
                    }
                    
                }
            }

            vector.clear();

            


        }

        
    }

    



    return 0;
}