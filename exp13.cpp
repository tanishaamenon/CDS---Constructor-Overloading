# include<iostream>
using namespace std;

class room
{
    private:
    double l,b;

    public:
    room()
    {
        l = 1.2;
        b = 2.3;
    }
    room(double len, double bre)
    {
        l = len;
        b = bre;
    }
    room(double len)
    {
        l = len;
        b = 4.5;
    }
    double area()
    {
        return l*b;
    }

};
int main()
{
    room r1,r2(6.7,7.8),r3(9.1);
    cout<<"No parameter passed: "<<endl;
    cout<<"Area: "<<r1.area()<<endl;
    cout<<"Two parameters passed: "<<endl;
    cout<<"Area: "<<r2.area()<<endl;
    cout<<"One parameter passed: "<<endl;
    cout<<"Area: "<<r3.area()<<endl;
}
