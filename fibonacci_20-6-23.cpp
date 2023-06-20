#include<iostream>
using namespace std;
class FIB
{
private:
    int n;
public:
    int fib(int n);
};
int FIB::fib(int n)
{
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}
int main()
{
    int n;
    cout<<"Fibonacci series"<<endl;
    cout<<"enter the number of terms"<<endl;
    cin>>n;
    int i=0,res;
    FIB obj;
    for(i=1;i<=n;i++)
    {
        res=obj.fib(i);
        cout<<res<<"\t";
    }
}
