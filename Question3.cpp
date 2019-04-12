#include<iostream>
#include<string>
using namespace std;
class Publication{
    protected:
        string Name;
    public:
        Publication(string Name){
            this->Name = Name;
        }
        virtual void show() = 0;
        ~Publication(){

        }
};
class Library{
    Publication * publications[100];  //所有馆藏，假设馆藏上限为100
    static int total;                //实际馆藏数
public:
    Library(){
        for(int i =0;i<100;i++)
        {
            *(publications+i) = NULL;
        }
    }
    void add(Publication * p){
        *(publications+total) = p;
        total++;
    }      //添加新馆藏（此函数需完成）
    void show(){                 //输出所有馆藏的相应信息
	        for(int i=0;i<total;i++)
	        publications[i]->show();
    
}
int Library::total = 0;

	 // show()函数可用于输出所有馆藏的相应信息
     // 如：    C++   zhengli
     //         Thames     2010/1/1
     //         DuZhe      2011/5/1  第10期
     //注意不同种类出版物会输出不同种类的信息。
     ~Library(){

     }
    };


class Book:public Publication{
    private:
        string Author;
    public:
        Book(string Name,string Author):Publication(Name){
            this->Author = Author; 
        }
        ~Book(){}
    void show(){
            cout<<"The Book's Name is "<<Name<<"."<<endl;
            cout<<"The Author's Name is "<<Author<<"."<<endl;
    }
};
class Newspaper:public Publication{
    protected:
        string Date;
    public:
        Newspaper(string Name,string Date):Publication(Name){
            this->Date = Date;
        }
        ~Newspaper(){}
        void show(){
cout<<"The Newspaper's Name is "<<Name<<"."<<endl;
cout<<"The Date is "<<Date<<"."<<endl;
        }
};
class Magazine:public Newspaper{
    protected:
        int period_number;
    public:
        Magazine(string Name,string Date,int period_number):Newspaper(Name,Date){
            this->period_number = period_number;
        }
        ~Magazine(){}
        void show(){
cout<<"The Magazine's Name is "<<Name<<"."<<endl;
cout<<"The Date is "<<Date<<"."<<endl;
cout<<"The Nummber of Period is NO. "<<period_number<<"."<<endl;
        }
};
int main()
{
    Library *library = new Library;
    Book *b1 = new Book("C++","zhengli");
    Newspaper *n1= new Newspaper("Thames","2010/1/1");
    Magazine *m1= new Magazine("Duzhe","2011/5/1",10);
    library->add(b1);
    library->add(n1);
    library->add(m1);
    library->show();
    return 0;
}