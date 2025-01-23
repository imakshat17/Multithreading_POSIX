#include<iostream>
#include<thread>
using namespace std;
//int main(){
  // using lambda function
//      auto fun = [](int x){
  //                    while(x-- > 0){
    //                     cout<<x<<endl;
      //                          }
        //                  };




//             thread t ([](int x){while(x-- >0){cout<<x<<endl;}},10);
   //             t.join();

// passing function from a class to a thread
  
      //       class Base{
        //      public:
          //          void run(int x){
            //          while(x-- >0){
              //                  cout<<x<<endl;}
                //                  }    };
             class Base{
               public:
                  static void run (int x){
                               while(x-- >0){
                                       cout<<x<<endl;}
                                           }
                                         };
 //                 };
int main(){
  //Base b;
   thread t(&Base::run,10);
   t.join();
return 0;
}
//return 0;}
