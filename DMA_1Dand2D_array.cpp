// WAP TO DEMONSTRATE DYNAMICALLY ALLOCATION OF THE 1D AND 2D ARRAY
#include <iostream>

using namespace std;


int main()
{
    /****************** dynamic memory allocation in normal array *********************************/

    int *a,i,size;
    cout<<"Enter the size of 1D array"<<endl;
    cin>>size;

    a=new int [size];

    for(i=0;i<size;i++)
    {
        a[i]=rand()%100;
    }
    for(i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }

    delete []a;

    cout<<endl<<endl<<endl;
    /************************** dynamic memory allocation in 2D array *****************************/
    int **p,j,row,col;//col
    cout<<"Enter the no of rows and columns respectively"<<endl;
    cin>>row>>col;
    p=new int *[row];

    for(i=0;i<row;i++)
    {
        p[i]= new int[col];
    }
    for(i=0;i<row;i++)
        {
        for(j=0;j<col;j++)
        {
            p[i][j]=rand()%100;
        }
    }
    for(i=0;i<row;i++)
        {
        for(j=0;j<col;j++)
        {
            cout<<p[i][j]<<"\t";
        }
        cout<<endl<<endl;
    }

    for(i=0;i<row;i++)
    {
        delete p[i];
    }
    delete []p;
}
