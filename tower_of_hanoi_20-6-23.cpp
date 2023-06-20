#include<iostream>
using namespace std;
class TOH
{
private :
    int a,b,c,n;
public :
    void toh(int n, int a, int b, int c);
} ;
void TOH :: toh(int n,int a, int b, int c)
{
    if(n>0){
toh(n-1,a,c,b);
cout<<"moving disc from tower "<<a<<" to "<<c<<endl;
toh(n-1,b,a,c);
}
}
int main()
{
int n,a=1,b=2,c=3;
cout<<"Enter the number of discs";
cin>>n;
TOH obj;
obj.toh(n,a,b,c);
return 0;
}

