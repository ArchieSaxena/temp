// #include <iostream>
// using namespace std;
// class center
// {
//     int x,y;
//     public:
//     center()
//     {
//         x=0;
//         y=0;
//     }
//     center(int a,int b)
//     {
//         x=a;
//         y=b;
//     }
//     void printit()
//     {
//         cout<<x<<" "<<y<<endl;
//     }
// };
// class circle
// {
//     int r;
//     center c;
//     public:
//     circle(int x,int y,int z):c(x,y)
//     {
//         r=z;
//     }
//     void printcircle()
//     {
//         c.printit();
//         cout<<"radius is"<<r;
//     }
// };
// int main()
// {
//     circle c1(4,5,20);
//     c1.printcircle();
// }

// #include <iostream>
// using namespace std;
// class account
// {
//     int accno;
//     char *acctype;
//     public:
//     account(int a,char *at)
//     {
//         accno=a;
//         acctype=new char[strlen(at)+1];
//         strcpy(acctype,at);
//     }
//     void printit()
//     {
//         cout<<"ACCOUNT NO "<<accno<<"ACC TYPE"<<acctype;
//     }
// };
// class person
// {
//     char *name;
//     int age;
//     account *acc;
//     public:
//     person(char* n,int o)
//     {
//         name=new char(strlen(n)+1);
//         strcpy(name,n);
//         o=age;
//         acc=NULL;
//     }
//     void addaccount(int accno,char *acctype)
//     {
//         acc=new account(accno,acctype);
//     }
//     void printdetails()
//     {
//         cout<<name<<age;
//         if(acc!=NULL)
//         {
//             acc->printit();
//         }
//     }
// };
// int main()
// {
//     person p("archie",10);
//     p.printdetails();
//     p.addaccount(45,"savings");
//     p.printdetails();
// }


// #include <iostream>

// using namespace std;
// class student
// {
//     int eno;
//     float cgpa;
//     public:
//     student(int en,float c)
//     {
//         eno=e;
//         cgpa=c;
//     }
//     void printdetails()
//     {
//         cout<<"eno"<<eno<<"cgpa"<<cgpa;
//     }
// };
// class faculty
// {
//     int empid;
//     char *name;
//     student *s[5];
//     int no;
//     public:
//     faculty(int id,char *n)
//     {
//         empid=id;
//         name=new char[strlen(n)+1];
//         strcpy(name,n);
//         no=0;
//     }
//     void addstudent(student *s1)
//     {
//         if(no>3)
//         {
//             cout<<"cant have more than 3 studenta";
//             return;
//         }
//         s[no]+=s1;
//     }  
// }

//0 to 1
// #include <iostream>
// #include <cstring>
// using namespace std;
// class account
// {
//     public:
//     int acno;
//     char *actype;
//     account(int an,char *at)
//     {
//         acno=an;
//         actype=new char[strlen(at)+1];
//         strcpy(actype,at);
//     }
//     void printit()
//     {
//         cout<<"acc no"<<acno<<" "<<"actype"<<actype<<endl;
//     }
// };
// class person
// {
//     public:
//     int age;
//     char *name;
//     account *acc;
//     person(int a,char *n)
//     {
//         age=a;
//         name=new char[strlen(n)+1];
//         strcpy(name,n);
//         acc=NULL;
//     }
//     void addaccount(int acno,char *actype)
//     {
//         acc=new account(acno,actype);
//     }
//     void print()
//     {
//         cout<<"name"<<name<<" "<<"age"<<age<<endl;
//         if(acc!=NULL)
//         {
//             acc->printit();
//         }
//     }
// };
// int main()
// {
//     person p(10,"archie");
//     p.print();
//     p.addaccount(34,"saving");
//     p.print();
// }

//1
// #include <iostream>
// #include <cstring>
// using namespace std;
// class account
// {
//     public:
//     int acno;
//     char *actype;
//     account(int an,char *at)
//     {
//         acno=an;
//         actype=new char[strlen(at)+1];
//         strcpy(actype,at);
//     }
//     void printit()
//     {
//         cout<<"acc no"<<acno<<" "<<"actype"<<actype<<endl;
//     }
// };
// class person
// {
//     public:
//     int age;
//     char *name;
//     account *acc;
//     person(int a,char *n)
//     {
//         age=a;
//         name=new char[strlen(n)+1];
//         strcpy(name,n);
//         acc=NULL;
//         //addaccount(34,"saving");
//     }
//     void addaccount(int acno,char *actype)
//     {
//         acc=new account(acno,actype);
//     }
//     void print()
//     {
//         cout<<"name"<<name<<" "<<"age"<<age<<endl;
//         acc->printit();
//     }
// };
// int main()
// {
//     person p(10,"archie");
//     p.addaccount(34,"saving");
//     p.print();
// }

// #include <iostream>
// #include <cstring>
// using namespace std;
// class account
// {
//     public:
//     int acno;
//     char *actype;
//     account(int an,char *at)
//     {
//         acno=an;
//         actype=new char[strlen(at)+1];
//         strcpy(actype,at);
//     }
//     void printit()
//     {
//         cout<<"acc no"<<acno<<" "<<"actype"<<actype<<endl;
//     }
// };
// class person
// {
//     public:
//     int age;
//     char *name;
//     account *acc;
//     person(int a,char *n)
//     {
//         age=a;
//         name=new char[strlen(n)+1];
//         strcpy(name,n);
//         acc=NULL;
//         //addaccount(34,"saving");
//     }
//     void addaccount(int acno,char *actype)
//     {
//         acc=new account(acno,actype);
//     }
//     void print()
//     {
//         cout<<"name"<<name<<" "<<"age"<<age<<endl;
//         acc->printit();
//     }
// };
// int main()
// {
//     person p(10,"archie");
//     p.addaccount(34,"saving");
//     p.print();
// }

// #include <iostream>
// using namespace std;
// class base
// {
//     public:
//     void print()
//     {
//         cout<<"base class";
//     }
// };
// class derived:public base
// {
//     public:
//     void print()
//     {
//         cout<<"derived class";
//     }
// };
// int main()
// {
//     derived d;
//     // base b;
//     d.print();
// }

// #include <iostream>
// using namespace std;
// class shape
// {
//     public:
//     int width;
//     int height;
//     shape()
//     {
//         width=0;
//         height=0;
//     }
//     shape(int w,int h)
//     {
//         width=w;
//         height=h;
//     }
//     virtual int area()
//     {
//         cout<<"area of base shape class";
//         return 0;
//     }
// };
// class rectangle:public shape
// {
//     public:
//     rectangle()
//     {
//         width=0;
//         height=0;
//     }
//     rectangle(int w,int h)
//     {
//         width=w;
//         height=h;
//     }
//     int area()
//     {
//         cout<<endl;
//         return(width*height);
//     }
// };
// class triangle:public shape
// {
//     public:
//     triangle()
//     {
//         width=0;
//         height=0;
//     }
//     triangle(int w,int h)
//     {
//         width=w;
//         height=h;
//     }
//     int area()
//     {
//         cout<<endl;
//         return(0.5*width*height);
//     }
// };
// int main()
// {
//     shape *shape;
//     rectangle r(5,4);
//     triangle t(5,2);
//     shape=&r;
//     cout<<shape->area();
//     shape=&t;
//     cout<<shape->area();
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n1,n2,r;
//     cin>>n1;
//     cin>>n2;
//     try
//     {
//         {
//             if(n2==0)
//             {
//                 throw n2;
//             }
//             else if(n2<1)
//             {
//                 throw 'a';
//             }
//             else{
//                 r=n1/n2;
//                 cout<<r;
//             }
//         }
//     }
//     catch(int x)
//     {
//         cout<<"den is 0";
//     }
// }

// #include <iostream>
// using namespace std;
// class distance
// {
//     private:
//     int feet;
//     float inches;
//     public:
//     distance()
//     {
//         feet=0;
//         inches=0;
//     }
//     distance(int f,float in)
//     {
//         feet=f;
//         inches=in;
//         if(in>=12)
//         {
//             throw "inches too large";
//         }
//         void getlist()
//         {
//             cout<<"enter feet";
//             cin>>feet;
//             cout<<"enter inches";
//             cin>>inches;
//             if(inches>=12)
//             {
//                 throw "inches value too largeee";
//             }

//         }
//     }
// }

// #inlcude <iostream>
// using namespace std;
// class center
// {
//     int x,y;
//     center()
//     {
//         x=0;
//         y=0;
//     }
//     center(int a,int b)
//     {
//         x=a;
//         y=b;
//     }
//     void printit()
//     {
//         cout<<x<<" "<<y;
//     }
// };
// class circle
// {
//     int radius;
//     center c;
//     circle(int x,int y,int z):c(x,y)
//     {
//         radius=z;
//     }
//     void printcircle()
//     {
//         c.printit();
//         cout<<radius;
//     }
// };
// void main()
// {
//     circle c1(4,5,20);
//     c1.printcircle();
// }

// #inlcude <iostream>
// #include <string>
// using namespace std;
// class account
// {
//     int acno;
//     char *acctype;
//     account(int ano,char *at)
//     {
//         acno=ano;
//         acctype=new char[strlen(at)+1];
//         strcpy(acctype,at);
//     }
// }

// #include<iostream>
// #include<cstring>
// using namespace std;
// class account
// { 
//     int acno;
//     char* actype;
//     public:
//     account(int an, char* at)
//     {
//         acno=an;
//         actype=new char[strlen(at)+1];
//         strcpy(actype,at);
//     }
//     void printdetails()
//     {
//         cout<<“\n acc no:"<<acno<<" \n type "<<actype;
//     }
// };
// class person
// {
//     int age;
//     char *name;
//     account *acc[10];
//     int no;
//     person(int a,char *n)
//     {
//         age=a;
//         name=new char[strlen(n)+1];
//         strcpy(name,n);
//         no=0;
//         acc[no]=new account(an,at);
//         no++;

//     }
//     void addacc()
//     {
//         if(no>9)
//         {
//             cout<<"more";
//         }
//         cin>>acno>>actype;
//         ac[no++]=new account(acno,actype)
//     }
// }

// #include <iostream>
// using namespace std;
// class shape
// {
//     public:
//     virtual void input()=0;
//     virtual int area()=0;
//     virtual int perimeter()=0;
// };
// class square:public shape
// {
//     public:
//     int side;
//     square()
//     {
//         side=0;
//     }
//     square(int s)
//     {
//         side=s;
//     }
//     void input()
//     {
//         cin>>side;
//     }
//     int area()
//     {
//         return(side*side);
//     }
//     int perimeter()
//     {
//         return(4*side);
//     }
// };
// class rectangle:public shape
// {
//     public:
//     int l;
//     int b;
//     rectangle()
//     {
//         l=0;
//         b=0;
//     }
//     rectangle(int a,int m)
//     {
//         l=a;
//         b=m;
//     }
//     void input()
//     {
//         cin>>l>>b;
//     }
//     int area()
//     {
//         return(l*b);
//     }
//     int perimeter()
//     {
//         return(2*(l+b));
//     }
// };
// int main()
// {
//     shape *s[2];
//     s[0]=new square;
//     s[1]=new rectangle;
//     for(int i=0;i<2;i++)
//     {
//         s[i]->input();
//         cout<<s[i]->area();
//         cout<<s[i]->perimeter();
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int age;
//     cout<<"enter age";
//     cin>>age;
//     try
//     {
//         if(age>18)
//         {
//             throw 1;
//         }
//         else
//         {
//             cout<<"ok age";
//         }
//     }
//     catch(int age)
//     {
//         cout<<"age is more than 18";
//     }
// }

// #include<iostream>
// #include<cstring>
// using namespace std;
// class A
// {
//     public:
//     int x;
//     void show();
// };
// class B
// {
//     public:
//     int x;
//     virtual void show();
// };
// int main()
// {
//     int a=sizeof(A);
//     int b=sizeof(B);
//     cout<<a<<" "<<b;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cout<<"enter the value of a : ";
//     cin>>a;
//     try
//     {
//         if(a==1)
//         {
//             throw 1;
//         }
//         else if(a==2)
//         {
//             throw 'A';
//         }
//         else
//         {
//             throw 5.6;
//         }
//     }
//     catch(int a)
//     {
//         cout<<"a=1";
//     }
//     catch(char ch)
//     {
//         cout<<"a==2";
//     }
//     catch(double f)
//     {
//         cout<<"a is ok";
//     }
// }

#include <iostream>
using namespace std;
class university
{
    public:
    university(){}
    virtual void print()
    {
        cout<<"university";
    }
};
class inst:public university
{
    public:
    inst(){};
    void print()
    {
        cout<<"inst";
    }
};
int main()
{
    try
    {
        try
        {
            throw inst();
        }
        catch(university &b)
        {
            cout<<"exception";
            b.print();
            throw b;
        }
    }
    catch(university &b)
    {
        cout<<"exception";
        b.print();
    }
}

// class A
// {
//     public:
//     A()
//     {
//         cout<<"1";
//     }
//     A(int x)
//     {
//         cout<<"2";
//     }
//     virtual void T2()
//     {
//         cout<<"A T2()";
//     }
//     ~A()
//     {
//         cout<<"a dead";
//     }
// };
// class E
// {
//     public:
//     E()
//     {
//         cout<<"3";
//     }
//     E(int x)
//     {
//         cout<<"4";
//     }
// };
// class B:virtual public A
// {
//     public:
//     B()
//     {
//         cout<<"5";
//     }
//     B(int x)
//     {
//         cout<<"6";
//     }
//     ~B()
//     {
//         cout<<"B DEAD";
//     }
// };
// class C:virtual public E
// {
//     public:
//     C()
//     {
//         cout<<"7";
//     }
//     C(int x)
//     {
//         cout<<"8";
//     }
// };
// class D:public C,public B
// {
//     public:
//     D():E(5),B(1)
//     {
//         cout<<"9";
//     }
//     D(int x):A(3),C(2)
//     {
//         cout<<"10";
//     }
//     void T2()
//     {
//         cout<<"D T2";
//     }
//     ~D()
//     {
//         cout<<"d dead";
//     }
// };
// int main()
// {
//     B* obj=new D(2);
//     obj->T2();
//     delete obj;
// }