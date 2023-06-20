#include<iostream>
using namespace std;
class GCD
{
 private :
     int a,b;
 public:
    int gcd(int a, int b);
};
int GCD :: gcd(int a, int b)
{
    while(a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    return a;
}
int main()
{
    int a,b,res;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    GCD obj;
    res=obj.gcd(a,b);
    cout<<"gcd is "<<res;
}
