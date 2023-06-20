#include<iostream>
using namespace std;
class search_
{
private:
    int n,key, a[200];
public:
    void input(int n);
    void linear(int key);
    void binary(int key);
};
void search_::input(int n)
{
     int i=0;
    cout<<"array is "<<endl;
    for(i=0;i<n;i++)
    {
        a[i]=rand();
        cout<<a[i]<<" ";
    }
}
void search_::linear(int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            cout<<"element found at "<<i;
            break;
        }
    }
    if(i==n)
        cout<<"unsuccessful"<<endl;

}
void search_::binary(int key)
{
   int low=0;
   int high=n-1;
   int mid=0;
   for (int i = 0; i < n; i++)
    {
    for (int j = 0; j < n - i; j++) {
      if (a[j] > a[j+1]) {
        int temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
      }
    }
  }
   while(low<=high)
   {
       mid=(low+high)/2;
       if(a[mid]==key)
        cout<<"element found at"<<mid+1;
        else if(a[mid]>key)
            high=high-1;
        else
            low=low+1;
   }
   if(low>high)
   {
       cout<<"unsuccessful";
   }
}
int main()
{
    int n,ch,key;
    cout<<"enter number of elements"<<endl;
    cin>>n;
    search_ obj;
    obj.input(n);
    cout<<"\nenter the element to be searched\n";
    cin>>key;
    cout<<"enter 1 for linear search or 2 for binary search"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1 : obj.linear(key);
        break;
        case 2: obj.binary(key);
        break;
        default : cout<<"invalid choice"<<endl;
    }

}
