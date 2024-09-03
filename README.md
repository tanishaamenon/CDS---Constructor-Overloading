# Experiment 13
**Aim:** <br>
To study and implement constructor overloading. <br>
<br>
**Theory:** <br>
<br>
Constructors are unique member functions of a class that are automatically called when an object of the class is created. When there are more than one constructor in a class with the same name is called as 
constructor overloading. The important point to keep in mind is that the list of arguments should be different for each of these constructors. The number of parameters acts as a differentiating factor between each of the constructors. <br>
The use case for constructor overloading are: <br>
&#8594; It allows flexibility in object creation. <br>
&#8594; It provides different ways to set up an object based on the input data. <br>
&#8594; It simplifies the code readability and maintenance by managing object initialization centrally within the constructors. <br>
&#8594; It provides multiple ways to instantiate objects depending on the situation <br>
<br>

**Code:** <br>
<br>

```
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

```
<br>

**Outputs:**  <br>
<br>
![exp13 output](https://github.com/tanishaamenon/CDS---Constructor-Overloading/blob/main/exp13.JPG) <br>
<br>

**Conclusion:** <br>
&#8594; We learnt about constructor overloading in C++. <br>
&#8594; We learnt the use case of constructor overloading in C++. <br>
*******
<br>

