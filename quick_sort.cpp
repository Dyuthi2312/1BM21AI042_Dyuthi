#include<iostream>
using namespace std;

class quicksort
{
    int a[20],n;
    public:
        void input();
        int split(int,int);
        void quick(int,int);
        void output();
};

void quicksort::input()
{
    cout<<"Enter the number of elements \n";
    cin>>n;
    cout<<"Enter the elements \n";
    for(int i=0;i<n;i++)
        cin>>a[i];
    quick(0,n-1);
}

int quicksort::split(int low,int high)
{
    int x,i,j,temp;
    x=a[low];
    i=low;
    j=high+1;
    do
    {
        do
            i++;
        while(a[i]<x&&i<=high);
        do
            j--;
        while(x<a[j]);
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }while(i<j);
    a[low]=a[j];
    a[j]=x;
    return(j);
}

void quicksort::quick(int low,int high)
{
    int j;
    if(low<high)
    {
        j=split(low,high);
        quick(low,j-1);
        quick(j+1,high);
    }
}

void quicksort::output()
{
    cout<<"The sorted array is \n ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}

int main()
{
    quicksort obj;
    obj.input();
    obj.output();
    return 0;
}
