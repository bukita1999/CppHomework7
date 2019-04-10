#include<iostream>
using namespace std;
class Vehicle{
    protected:
        int wheelnumber;
        bool Can_Drive_Or_Not;
    public:
        Vehicle(int wheelnumber,bool Can_Drive_Or_Not){
            this->wheelnumber = wheelnumber;
            this->Can_Drive_Or_Not = Can_Drive_Or_Not;
        }
        ~Vehicle();
        virtual void show() = 0;
};
class Car:public Vehicle{
        public:
        Car(int wheelnumber,bool Can_Drive_Or_Not):Vehicle(wheelnumber,Can_Drive_Or_Not){
        
        }
        ~Car();
        void show(){
        
        cout<<"I have "<<wheelnumber<<" wheels. "
    ;
    cout<<"My status is"<<Can_Drive_Or_Not<<endl;
        cout<<"Guess what i am?"<<endl;
        cout<<"I am the Car"<<endl;
        }
    };
class Truck:public Vehicle{
    public:
        Truck(int wheelnumber,bool Can_Drive_Or_Not):Vehicle(wheelnumber,Can_Drive_Or_Not){
        
        }
        ~Truck();
        void show(){
cout<<"I have "<<wheelnumber<<" wheels. ";
cout<<"My status is"<<Can_Drive_Or_Not<<endl;
cout<<"Guess what i am?"<<endl;
cout<<"I am the Truck"<<endl;
        }
    }; 
    class Boat:public Vehicle{
    public:
        Boat(int wheelnumber,bool Can_Drive_Or_Not):Vehicle(wheelnumber,Can_Drive_Or_Not){
        
        }
        ~Boat();
        void show(){
cout<<"I have "<<wheelnumber<<" wheels. ";
cout<<"My status is"<<Can_Drive_Or_Not<<endl;
cout<<"Guess what i am?"<<endl;
cout<<"I am the Boat"<<endl;
        }
    };
int main()
{
    
    Vehicle *c = new Car(4,1);
    Vehicle *t = new Truck(8,1);
    Vehicle *b = new Boat(0,1);
    c->show();
    t->show();
    b->show();
    return 0;
}