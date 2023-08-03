#include<iostream>
using namespace std;
main()
{
    int i,j,rm,rm1,cm,cm1;
    cout<<"Enter the number of rows for matrix 1: "<<endl;
    cin>>rm;
    cout<<"Enter the number of columns for matrix 1: "<<endl;
    cin>>cm;
    cout<<"Enter the number of rows for matrix 2: "<<endl;
    cin>>rm1;
    cout<<"Enter the number of columns for matrix 2: "<<endl;
    cin>>cm1;
    int m2d[rm][cm];
    int m12d[rm1][cm1];
    cout<<"Enter Matrix 1"<<endl;
    for(i=0;i<rm;i++){
        for(j=0;j<cm;j++){
            cout<<"Enter element "<<i<<j<<" - ";
            cin>>m2d[i][j];
        }
    }
    cout<<"Enter Matrix 2"<<endl;
    for(i=0;i<rm1;i++){
        for(j=0;j<cm1;j++){
            cout<<"Enter element "<<i<<j<<" - ";
            cin>>m12d[i][j];
        }
    }
    if(rm==rm1 && cm==cm1)
    {
        for(i=0;i<3;i++)
    {
        cout<<endl;
        for(j=0;j<5;j++)
        {
            cout<<m2d[i][j]+m12d[i][j]<<"\t";
        }
    } 
    }
   else
   {
    cout<<"These two can't be added";
   }
}