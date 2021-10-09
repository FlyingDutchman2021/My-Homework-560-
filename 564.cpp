#include <iostream>
#include <iomanip>

using namespace std;

double hourlyWorkersSalary(double base, double time){
    double salary=0;
    salary = base * time;
    if (time > 40)
    {
        salary += (time-40)*base*0.5;
    }
    return salary;
    
}

double pieceWorkersSalary(double base, int pieces){
    return base * pieces;
}

double commissionWorkersSalary(double grossSales){
    return 250 + 0.057*grossSales;
}







int main(){

    int salaryCode=0;
    double input1=0,input2=0;
    bool continueOrNot = true;

    while (continueOrNot == true)
    {
       cin>>salaryCode;

        switch (salaryCode){

            case 1:
                cin>>input1;
                cout<<showpoint<<fixed<<setprecision(2);
                cout<<"The manager's pay is $"<<input1<<endl;
                break;
            case 2:
                cin>>input1>>input2;
                cout<<showpoint<<fixed<<setprecision(2);
                cout<<"Worker's pay is $"<<hourlyWorkersSalary(input1, input2)<<endl;
                break;
            case 3:
                cin>>input1;
                cout<<showpoint<<fixed<<setprecision(2);
                cout<<"Commission worker's pay is $"<<commissionWorkersSalary(input1)<<endl;
                break;
            case 4:
                cin>>input1>>input2;
                cout<<showpoint<<fixed<<setprecision(2);
                cout<<"Pieceworker's pay is $"<<pieceWorkersSalary(input2,input1)<<endl;
                break;
            case -1:
                continueOrNot = false;
                break;
            default:
                cout<<"Invalid pay code."<<endl;
                break;



        }
    }
    




    return 0;
}