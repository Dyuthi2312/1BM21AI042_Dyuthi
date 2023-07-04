#include<iostream.h>
using namespace std;
class sorting
{
private:
    int a[100], int n;
public:
    void input();
    void selection();
    void bubble();
    void output();
};
void sorting::input()
{
    int i=0;
    cout<<"enter the number of elements";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
void sorting::selection()
{
    cout<<"selection sort";
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++)
        {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
                min = j;
        }
        if (min != i)
        {
            temp=a[min];
            a[min]=a[i];
            a[i]=temp;
        }
        }
}
void sorting::bubble()
{
    cout<<"bubble sort";
      int i, j, temp;
    bool swapped;
    for (i = 0; i < n - 1; i++)
        {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
               temp=a[j+1];
    a[j+1]=a[j];
    a[j]=a[j+1];
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}
void sorting::output()
{
    int i;
    cout<<"sorted array is";
    for(i=0;i<n;i++)
        cout<<a[i];
}
void main()
{
    sorting obj1, obj2;
    obj1.input();
    obj1.selection();
    obj1.output();
    obj2.input();
    obj2.bubble();
    obj2.output();

}
