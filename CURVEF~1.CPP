#include<iostream>
using namespace std;
int main()
  {
   float n,x[10],y[10],xsum=0,ysum=0,xy_sum=0,xSqrSum=0;
   cout<<"enter n"<<endl;
   cin>>n;
   cout<<"enter the values of x"<<endl;
   for(int i=0;i<n;i++)
   cin>>x[i];
   cout<<"enter the values of y"<<endl;
   for(i=0;i<n;i++)
   cin>>y[i];
   cout<<"\txi\tyi\txi*yi\txi^2"<<endl;
   for(i=0;i<n;i++)
{
    xsum=xsum+x[i];
    ysum=ysum+y[i];
    xy_sum=xy_sum+(x[i]*y[i]);
    xSqrSum=xSqrSum+(x[i]*x[i]);
   cout<<"\t"<<x[i]<<"\t"<<y[i]<<"\t"<<x[i]*y[i]<<"\t"<<x[i]*x[i]<<endl;
}
   cout<<"-------------------------------------------------------"<<endl;
   cout<<"\t"<<xsum<<"\t"<<ysum<<"\t"<<xy_sum<<"\t"<<xSqrSum<<endl;
   //float b = ((n*xy_sum)-(xsum*ysum))/((n-1)*xSqrSum);
   //float a = (ysum-(b*xsum))/n;
     float b = ((xsum*ysum)-n*xy_sum)/((xsum*xsum)-n*xSqrSum);
     float a = (xy_sum-(b*xSqrSum))/xsum;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    if( a<0 || b<0  )
     {
       if(a<0 && b<0)
	{
cout<<"Equation of straight line of best fit for y = a + bx is : y = "<<a<<b<<"x"<<endl;
        }
else
      if(a<0)
        cout<<"Equation of straight line of best fit for y = a + bx is : y = "<<a<<" + "<<b<<"x"<<endl;
         else
        cout<<"Equation of straight line of best fit for y = a + bx is : y = "<<a<<b<<"x"<<endl;
     }
else
   cout<<"Equation of straight line of best fit for y = a + bx is : y = "<<a<<" + "<<b<<"x"<<endl;
   return 0;
  }
