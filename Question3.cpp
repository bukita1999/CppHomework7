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
};
class Library{
    Publication * publications[100];  //所有馆藏，假设馆藏上限为100
    static int total;                //实际馆藏数
public:
    void add(Publication & p);      //添加新馆藏（此函数需完成）
    void show(){                 //输出所有馆藏的相应信息
	        for(int i=0;i<total;i++)
	        publications[i]->show();
}
	 // show()函数可用于输出所有馆藏的相应信息
     // 如：    C++   zhengli
     //         Thames     2010/1/1
     //         DuZhe      2011/5/1  第10期
     //注意不同种类出版物会输出不同种类的信息。
    };

class Book:public Publication{
    private:
        string Author;
    public:
        Book(string Name,string Author):Publication(Name){
            this->Author = Author; 
        }
        ~Book();
    void show(){

    }
};
class Newspaper:public Publication{
    protected:
        string Date;
    public:
        Newspaper(string Name,string Date):Publication(Name){
            this->Date = Date;
        }
        ~Newspaper();
        void show(){

        }
};
class Magazine:public Newspaper{
    protected:
        int 
    public:
        Magazine(string Name,string Date,)
}