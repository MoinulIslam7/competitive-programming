#include <iostream>
using namespace std;
class Building {
   public:
      int floor,room,area;
      void display1(int a,int b,int c)
      {
         floor= a;
         room = b;
         area = c;
         cout << "floor = " << floor << endl;
         cout << "Room = " << room << endl;
         cout << "Area = " << area << endl;
      }
};
class House : public Building
{
      public:

      int bedroom,bathroom;

      void display2(int a,int b)
      {
         bedroom= a;
         bathroom= b;
         cout << "Bedroom = " << bedroom << endl;
         cout <<  "Bathroom = " << bathroom << endl;
      }
};
class Office : public House{
   public:
      int window;
      void display3(int a)
      {
         window = a;
         cout << "Window = " << window << endl;
      }
};
int main(void) {
   Office ob;

    ob.display3(5);
    ob.display2(20,30);
    ob.display1(10,20,30);

   return 0;
}
