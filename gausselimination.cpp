#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	 float mat[10][10], x[10], div;
	 int i,j,k,n;
     cout<< setprecision(5)<< fixed;
	 cout<<"Enter the size of matrix: ";
	 cin>>n;
	 cout<<"Enter the elements row-wise: "<< endl;
	 for(i=1;i<=n;i++)
	 {
		  for(j=1;j<=n+1;j++)
		  {
			   cout<<"mat["<< i<<"]["<< j<<"]= ";
			   cin>>mat[i][j];
		  }
	 }
	 for(i=1;i<=n-1;i++)
	 {
		  if(mat[i][i] == 0.0)
		  {
			   cout<<"Mathematical Error!";
			   exit(0);
		  }
		  for(j=i+1;j<=n;j++)
		  {
			   div = mat[j][i]/mat[i][i];

			   for(k=1;k<=n+1;k++)
			   {
			  		mat[j][k] = mat[j][k] - div*mat[i][k];
			   }
		  }
	 }
	 x[n] = mat[n][n+1]/mat[n][n];
	 for(i=n-1;i>=1;i--)
	 {
		  x[i] = mat[i][n+1];
		  for(j=i+1;j<=n;j++)
		  {
		  		x[i] = x[i] - mat[i][j]*x[j];
		  }
		  x[i] = x[i]/mat[i][i];
	 }
	 /* Displaying Solution */
	 cout<< endl<<"The required solution is: "<< endl;
	 for(i=1;i<=n;i++)
	 {
	  	cout<<"x["<< i<<"] = "<< x[i]<< endl;
	 }

	 return(0);
}
