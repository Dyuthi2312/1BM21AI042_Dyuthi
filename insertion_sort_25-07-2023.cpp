#include<iostream>
using namespace std;
class insertion
{
private:
    int a[100];
    int n;
public:
    void input();
    void sort(int a[100]);
    void output();
};
void insertion::input()
{
    cout<<"enter the number of elements \n";
    cin>>n;
    int i=0;
    cout<<"enter the elements\n";
    for(i=0;i<n;i++)
        cin>>a[i];
        sort(a);
}
void insertion::sort(int a[100])
{
    int i,j,cur;
    for(i=1;i<n;i++)
    {
       cur=a[i];
       j=i-1;
       while(j>=0&&a[j]>cur)
       {
           a[j+1]=a[j];
           j--;
       }
       a[j+1]=cur;
    }
    output();
}
void insertion::output()
{
    int i;
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
}
int main()
{
    insertion obj;
    obj.input();
}
