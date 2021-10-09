#include <iostream>
#include <vector>
using namespace std;





int main(){

vector<int> vectr{
    1,2,3,4,5
};
vector<int>::iterator iterator=vectr.begin();

vectr.erase(iterator+1, iterator+2);


cout<<vectr.at(0)<<endl<<endl;

for (int output : vectr){
    cout<< output<<endl;
}



    return 0;
}




