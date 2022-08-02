#include<iostream>
using namespace std;
 class Box{

      int i, j, k;
  public:
    void set_box(int m, int n, int o);
    int  show();
    int show2();
    int show3();
 };

 class area:public Box{

 public:
    int cal_area();
 };

 void Box::set_box(int m,int n,int o)
 {
     i=m;
     j=n;
     k=o;
 }
 //Box :: Show(int)
 int Box::show()
 {
     int m = i;
 }
  int Box::show2()
 {
     int n = j;
 }
  int Box::show3()
 {
     int o = k;
 }

 int area::cal_area()
 {
     return show()*show2()*show3();
 }
 int main()
 {
     area ob;
     ob.set_box(2,3,5);
     //ob.cal_area();
     cout<<ob.cal_area()<<endl;
     return 0;
 }
