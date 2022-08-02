#include<iostream>
using namespace std;
class building
{
protected :
    int floors;
    int rooms;
    double footage;
};
class house : public building
{
    int bedrooms;
    int bathrooms;
public :
    house(int f, int r, double ft, int br, int bth)
    {
        floors = f; rooms = r; footage = ft; bedrooms = br; bathrooms = bth;
    }
    void show()
    {
        cout << "floors : " << floors << endl;
        cout << "rooms : "<< rooms << endl;
        cout << "footage : " << footage << endl;
        cout << "bedrooms : " << bedrooms << endl;
        cout << "bathrooms : " << bathrooms << endl;
    }

};
class office  : public building
{
    int phones;
    int extinguishers;
    public :
        office(int f, int r, double ft , int p, int ext )
        {
            floors = f; rooms = r; footage = ft; phones = p; extinguishers = ext;
        }
        void show()
        {
            cout << "floors : " << floors << endl;
            cout <<"rooms : " << rooms << endl;
            cout << "footage : " << footage << endl;
            cout << "telephones : " << phones << endl;
            cout << "fire extinguishers : " << extinguishers << endl;
        }
};
int main()
{
    house h_ob(2, 12, 5000, 6, 4);
    office o_ob(4, 25, 12000, 30, 8);
    cout << "house : "<< endl;
    h_ob.show();
    cout << "\noffice : \n " ;
    o_ob.show();
    return 0;
}
