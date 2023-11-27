#include <iostream> //header file
using namespace std;
class Addno //class declaration
{
    int a,b;   //private variables
    public:
    void input()
    {
        cout<<"Enter a";
        cin>>a;
          cout<<"Enter b";
        cin>>b;
    }
    friend void display(Addno s ); //friend function declaration
};
void display(Addno s ) //friend function definition 
{
    int c;
    c=s.a+s.b;
    cout<<c;
}
int main() { // main function 
    Addno s;     //object declaration 
    s.input();    
    display(s);   //calling friend function

    return 0;
}
