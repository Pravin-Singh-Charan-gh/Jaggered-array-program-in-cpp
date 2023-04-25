#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number of rows:";
    cin>>n;
    int *arre=new int[n];
    int **arr=new int*[n];
    for(int i=0; i<n; i++) {
        cout<<"enter number of elements of row "<<i<<":";
        cin>>arre[i];
        arr[i]=new int[arre[i]];

        cout<<"enter "<<arre[i]<<" elements of row "<<i<<" :\n";
        for(int j=0; j<arre[i]; j++)
            cin>>arr[i][j];
    }

    cout<<endl<<"Jaggered array:-\n";
    for(int i=0; i<n; i++) {
        for(int j=0; j<arre[i]; j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }

    for(int i=0; i<n; i++)
        delete[] arr[i];
    delete[] arr;
    delete[] arre;
    return 0;
}
