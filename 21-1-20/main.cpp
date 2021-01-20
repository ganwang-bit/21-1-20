//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    cout << "Hello world!" << endl;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//
////void fun(int& a)
////{
////    cout<<"fun()"<<" "<<a<<endl;
////}
////void fun(const int& a)
////{
////    cout<<"fun() const"<<" "<<a<<endl;
////}
//void fun(int a,int=0);
//void fun(int a=10,int)
//{
//    cout<<"fun(int a)"<<endl;
//}
//int main()
//{
//    const int a=10;
//    int b=20;
//    fun(a,b);
//    fun(b,a);
//    return 0;
//}
//#include<iostream>
//using namespace std;
//#define PI 3.14
//class circle
//{
//public:
//    circle();
//    double getzhou();
//    double getmian();
//    ~circle(){}
//private:
//    double r;
//};
//circle::circle()
//{
//    cout<<"请输入圆的半径:"<<endl;
//    cin>>r;
//}
//double circle::getzhou()
//{
//    cout<<"圆的周长:";
//    return 2*PI*r;
//}
//double circle::getmian()
//{
//    cout<<"圆的面积:";
//    return PI*r*r;
//}
//int main()
//{
//    circle c;
//    cout<<c.getzhou()<<endl;
//    cout<<c.getmian();
//    return 0;
//}
//#include<iostream>
//using namespace std;
//#include<string>
//class student
//{
//private:
//    string name;
//    string Id;
//public:
//    student();
//    ~student(){}
//    void getId();
//    void getname();
//};
//student::student()
//{
//    cout<<"请输入姓名";
//    cin>>name;
//    cout<<"请输入学号";
//    cin>>Id;
//}
//void student::getId()
//{
//    cout<<"学号: " <<Id<<endl;
//}
//void student::getname()
//{
//    cout<<"姓名: "<<name<<endl;
//}
//int main()
//{
//    student s;
//    s.getId();
//    s.getname();
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class A
//{
//    int i;
//};
//struct B
//{
//    int i;
//};
//int main()
//{
////    B b;
////    A a;
////    a.i;
////    b.i;
//
//    return 0;
//}
//#include<iostream>
//using namespace std;
//#include<string>
//class Person
//{
//private:
//    string name;
//    int age;
//    string lover;
//public:
//    void setname(string name)
//    {
//        this->name=name;
//    }
//    string getname()
//    {
//        return name;
//    }
//    int getage()
//    {
//        return age;
//    }
//    void setage(int age)
//    {
//        if(age<=0||age>=100)
//        {
//            cout<<"年龄不合法"<<endl;
//            age=0;
//        }
//        else
//        {
//            this->age=age;
//        }
//    }
//};
//int main()
//{
//    Person p;
//    p.setname("张三");
//    p.setage(18);
//    cout<<p.getname()<<endl;
//    cout<<p.getage()<<endl;
//
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class C
//{
//private:
//    double h;
//    double l;
//    double w;
//public:
//    void setl(double l)
//    {
//        this->l=l;
//    }
//    double getl()
//    {
//        return l;
//    }
//    void setw(double w)
//    {
//        this->w=w;
//    }
//    double getw()
//    {
//        return w;
//    }
//    void seth(double h)
//    {
//        this->h=h;
//    }
//    double geth()
//    {
//        return h;
//    }
//    double getmian()
//    {
//        return l*h*2+l*w*2+2*h*w;
//    }
//    double gettiji()
//    {
//        return l*h*w;
//    }
//};
//int main()
//{
//    C c;
//    c.seth(10);
//    c.setl(10);
//    c.setw(10);
//    cout<<"面积:"<<c.getmian()<<endl;
//    cout<<"体积:"<<c.gettiji();
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class point
//{
//public:
//    point(int x,int y){this->x=x;this->y=y;}
//    ~point(){}
//    int getx(){return x;}
//    int gety(){return y;}
//private:
//    int x;
//    int y;
//};
//class circle
//{
//public :
//    circle(int x,int y,int r):c(x,y),r(r){}
//    int getr(){return r;}
//    int getx(){return c.getx();}
//    int gety(){return c.gety();}
//    ~circle(){}
//private:
//    int r;
//    point c;
//};
//bool pan(circle&c,point&p)
//{
//    if(c.getr()*c.getr()>=(p.getx()-c.getx())*(p.getx()-c.getx())+(p.gety()-c.gety())*(p.gety()-c.gety()))
//        return true;
//    else
//        return false;
//}
//int main()
//{
//    circle c(1,1,1);
//    point p(1,1);
//    if(pan(c,p))
//        cout<<"点在圆上或圆内"<<endl;
//    else
//        cout<<"点在圆外"<<endl;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class A
//{
//private:
//    int i;
//public:
//    A(int y):i(y){}
//};
//int main()
//{
//    A a(10);
//    return 0;
//}
