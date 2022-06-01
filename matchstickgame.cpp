#include<iostream>
using namespace std;
int main(){
    int matchstick=21,personchoice,computerchoice;
    while(matchstick>1){
      cout<<"Total matchsticks:"<<matchstick<<endl;
      cout<<"Choose matchstick between (1-4): "<<endl<<"personchoice :";
      cin>>personchoice;
      if(personchoice>4){
          cout<<"you choose a wrong enter!"<<endl;
          break;
      } 
       computerchoice = 5-personchoice;
      cout<<"Computer choice :"<<computerchoice<<endl;
       matchstick=matchstick-personchoice-computerchoice;    
      while(matchstick==1){
          cout<<"You loss the game!"<<"Better luck next time"<<endl;    
            break;      
      } 
     
       }
    return 0;

}