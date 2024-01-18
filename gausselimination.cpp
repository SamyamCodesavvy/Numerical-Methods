// // #include<iostream>
// // #include<cmath>
// // using namespace std;
// // int main()
// // {
// //     int n;
// //     float mat[20][20], c, x[10], sum=0.0;
// //     cout<<"Enter the order of the matrix: ";
// //     cin>>n;
// //     cout<<endl<<"Enter the elements of augmented matrix row-wise:"<<endl;
// //     for (int i=1; i<=n; i++){
// //         for (int j=1; j<=(n+1); j++)
// //         {
// //             cout<<"mat["<<i<<"]"<<"["<<j<<"]: ";
// //             cin>>mat[i][j];
// //         }
// //     }
// //     for (int j=1; j<=n; j++){
// //         for (int i=1; i<=n; i++){
// //             if (i>j){
// //                 c = mat[i][j]/mat[j][j];
// //                 for (int k=1; k<=n; k++)
// //                 {
// //                     mat[i][k]=mat[i][k]-c*mat[j][k];
// //                 }
// //             }
// //         }
// //     }
// // x[n]=mat[n][n+1]/mat[n][n];
// // for (int i=n-1; i>=1; i--)
// // {
// //     sum=0;
// //     for(int j=i+1; j<=n; j++)
// //     {
// //         sum = sum+mat[i][j]*x[j];
// //     }
// //     x[i]=(mat[i][n+1]-sum)/mat[i][i];
// // }
// // cout<<"The solution is: "<<endl;
// // for(int i=1; i<=n; i++)
// // {
// //     cout<<x[i]<<endl;
// // }
// // return 0;
// // }
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
//     int n;
//     float mat[20][20], c, x[10], sum=0.0;
//     cout<<"Enter the order of the matrix: ";
//     cin>>n;
//     cout<<endl<<"Enter the elements of augmented matrix row-wise:"<<endl;
//     for (int i=1; i<=n; i++){
//         for (int j=1; j<=(n+1); j++)
//         {
//             cout<<"mat["<<i<<"]"<<"["<<j<<"]: ";
//             cin>>mat[i][j];
//         }
//     }
//     for (int i=1; i<=n-1; i++){
//         if (mat[i][i]==0){
//             cout<<"Mathematical Error!"<<endl;
//             return 0;
//         }
//         for (int j=i+1; j<=n; j++){
//             c=mat[j][i]/mat[i][i];
//             for (int k=1;k<=n-1;k++)
//             {
//                 mat[j][k]=mat[j][k]-c*mat[i][k];
//             }
//         }
//     }
//     for (int i=n-1; i>=1; i--){
//         x[i]=mat[i][n+1];
//         for (int j=i+1; j<=n; j++){
//             x[i]=x[i]-mat[i][j]*x[j];
//         }
//         x[i]=x[i]/mat[i][i];
//     }
//     cout<<"The solution is: "<<endl;
//     for (int i=1; i<=n; i++){
//         cout<<x[i]<<"\t";
//     }
//     return 0;
// }
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