#include<iostream>
#include<math.h>
using namespace std;
int main()
  {
   float n,x[10],y[10],xsum=0,ysum=0,xY_sum=0,xSqrSum=0,Ysum=0;
   cout<<"enter n"<<endl;
   cin>>n;
   cout<<"enter the values of x"<<endl;
   for(int i=0;i<n;i++)
   cin>>x[i];
   cout<<"enter the values of y"<<endl;
   for(i=0;i<n;i++)
   cin>>y[i];
   cout<<"\txi\tyi\tYi\txi*Yi\txi^2"<<endl;
   for(i=0;i<n;i++)
   { 
      xsum=xsum+x[i];
      ysum=ysum+y[i];
      Ysum=log10(y[i])+Ysum;
       //xy_sum=
      xY_sum=xY_sum+(x[i]*log10(y[i]));
      xSqrSum=xSqrSum+(x[i]*x[i]);
      cout<<"\t"<<x[i]<<"\t"<<y[i]<<"\t"<<Ysum[i]<<"\t"<<xY_sum<<"\t"<<x[i]*x[i]<<endl;
   }
    cout<<"-------------------------------------------------------------------------------------------------------------\n";

    cout<<"\t"<<xsum<<"\t"<<ysum<<"\t"<<Y_sum<<"\t"<<xY_sum<<"\t"<<xSqrSum<<endl;