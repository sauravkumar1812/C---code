#include<iostream>
using namespace std;
int main(){
    int matchstick=21,personchoice,computerchoice;
    while(matchstick>=1){
      cout<<"Total matchsticks:"<<matchstick<<endl;
      cout<<"Choose matchstick between 1 to 4 : "<<endl;
      cin>>matchstick;
      while(matchstick>4){
          cout<<"you choose a wrong enter!"<<endl;
          break;
      }
      computerchoice = 5-personchoice;
      cout<<"Computer choice :"<<computerchoice<<endl;
      matchstick=matchstick-(personchoice+computerchoice);
      cout<<"matchstick:"<<matchstick<<endl;
      while(matchstick==1){
          cout<<"You loss the game!"<<"Better luck next time"<<endl;
          break;

      }

    }
    return 0;

}