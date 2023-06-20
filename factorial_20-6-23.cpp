#include<iostream>
using namespace std;
class FACT
{
private:
    int n;
public:
    int fact(int n);
};
int FACT::fact(int n)
{
    if(n==1)
    return 1;
    else
    return n*fact(n-1);

}
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    FACT obj;
    int res=obj.fact(n);
    cout<<"factorial of "<<n<<" is "<<res;
}
