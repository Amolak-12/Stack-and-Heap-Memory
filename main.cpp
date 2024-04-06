#include <iostream>
using namespace std;

class Sports{
  public:
   //Data Variables / Data Members
     string name;
     int numofplys;
   //Member Methods / Member Function
     void play() {
       cout << "The sport named " << name << " is being played." << endl;
     }

};
int main() {
  //Stack Memory
    int a = 10;
    int b = 20;
    int arr[10];
    cout << a << endl;
    cout << b << endl;
    cout << arr[0] << endl;

  //Making object in Stack Memory
    Sports s1;
    s1.name = "Cricket";
    s1.numofplys = 11;
    //Printing
      cout << "Name of the sport : " << s1.name << endl;
      cout << "No. of players are : " << s1.numofplys << endl;
    //Function Call
      s1.play();

  //Heap Memory
    int* ab = new int(10);
    int* ba = new int(20);
    int* ar = new int[10];
    cout << *ab << endl;
    cout << *ba << endl;
    cout << ar << endl;


}