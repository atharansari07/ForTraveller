#include<iostream>
#include<cstring>
using namespace std;
class Travel
{ 
   char code[10];
   int No_of_Adult;
   int No_of_Childre;
   int totalfare;
   char Distance;
   int fare;
   public:
   Travel()
   {
    strcpy(code,"NULL");
    No_of_Adult=0;
    No_of_Childre=0;
    Distance=0;
    totalfare=0;
   }
   void enter()
   {
    cout<<"Enter the Code of Traveller=";
    cin>>code;
    cout<<"Enter the No of Children =";
    cin>>No_of_Childre;
    cout<<"Enter the No of Adult=";
    cin>>No_of_Adult;
    cout<<"Enter the Distance =";
    cin>>Distance;
       Assignfare();
  
   }
    void Show()
   {
    cout<<"Code "<<"\t\t"<<"Children"<<"\t\t"<<"Adult"<<"\t\t "<<"Distance"<<"\t\t"<<"Amount"<<endl;
    cout<<code<<"\t\t  "<<No_of_Childre<<"\t\t\t "<<No_of_Adult<<" \t\t  "<<Distance<<"\t\t\t"<<totalfare;
 
   }
   void Assignfare()
   {
     if(Distance>=1000)
     {
        fare=No_of_Childre *500 + No_of_Adult*1000;
     }
     else if(Distance<500)
     {
        fare=No_of_Childre*300+ No_of_Adult*500;
     }
     else
     {
        fare=No_of_Childre*150+No_of_Adult+300;
     }
     totalfare=fare;
   }
  
};

int main(){
    char ch;
    do{
    Travel object;
    object.enter();
    object.Assignfare();
    object.Show();
    cout<<"\nContinue the process !"<<endl;
    cin>>ch;
    }
    while(ch=='y'||ch=='Y');
return 0;
}