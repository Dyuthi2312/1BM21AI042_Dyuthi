#include<iostream>
using namespace std;

class mergesort
{
private:
    int a[20],n;
public:
    void input();
    void split(int,int,int);
    void merge(int,int);
    void output();
};

void mergesort::input()
{
    cout<<"Enter the number of elements\n ";
    cin>>n;
    cout<<"Enter the elements\n ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    merge(0,n-1);
}

void mergesort::split(int low,int mid,int high)
{
    int i=low;
    int j=mid+1,pos=low;
    int temp[20],k;
    while((i<=mid)&&(j<=high))
    {
        if(a[i]<a[j])
        {
            temp[pos]=a[i];
            i++;
        }
        else
        {
            temp[pos]=a[j];
            j++;
        }
        pos++;
    }
    if(i>mid)
    {
        while(j<=high)
        {
            temp[pos]=a[j];
            j++;
            pos++;
        }
    }
    else
    {
        while(i<=mid)
        {
            temp[pos]=a[i];
            i++;
            pos++;
        }
    }
    for(k=low;k<pos;k++)
    {
        a[k]=temp[k];
    }
}

void mergesort::merge(int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        merge(low,mid);
        merge(mid+1,high);
        split(low,mid,high);
    }
}

void mergesort::output()
{
    cout<<"The sorted array is\n ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    mergesort obj;
    obj.input();
    obj.output();
    return 0;
}

