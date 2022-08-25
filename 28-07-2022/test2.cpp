#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

class matrix{
 int a;
 int b;
int n,m;
int **A;

 public:
  void readmatrix();
  void displaymatrix();
};

void matrix::readmatrix()
{

cout<<"Enter the rows and column\n"<<endl;
    cin>>m>>n;
 A=(int **)malloc((m*n)*sizeof(int));     
 for(int i=0;i<m;i++)
 {
  for(int j=0;j<n;j++)
  {
   cout<<"A["<<i<<"]["<<j<<"] : ";
   cin>>A[i][j];
  }
 }
  for(int i=0;i<m;i++)
 {
  for(int j=0;j<n;j++)
  {
   cout<<" "<<A[i][j];
  }
  cout<<endl;
 }
}

void matrix::displaymatrix()
{
 for(int i=0;i<=n;i++)
 {
  for(int j=0;j<=n;j++)
  {
   cout<<" "<<A[i][j];
  }
  cout<<endl;
 }
}

int main()
{
 matrix m;
 m.readmatrix();
 m.displaymatrix();
 getch();
 return 0;
}