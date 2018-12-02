//BANKERS ALGORITHM
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{int z=0,n;
cout<<"ENTER NO.of PROCESSES \n";
cin>>n;
int proc[n],reso[2];
int maxm[2],ma[2],need[2];
int avai[2];
cout<<"ENTER MAX RESOURCES \n";
for(int i=0;i<2;i++)
{
cin>>maxm[i];
}
cout<<"ENTER AVAILABLE RESOURCES \n";
for(int i=0;i<2;i++)
{
cin>>avai[i];
}

for(int y=0;y<n;y++)
{
cout<<"ENTER PROCESS NUMBER \n";
cin>>proc[y];
cout<<"ENTER MAX RESOURCE NEED \n";
for(z=0;z<2;z++)
{cin>>ma[z];} 
cout<<"ENTER RESOURCE ALLOCATTED \n";
for(z=0;z<2;z++){
cin>>reso[z];
need[z]=ma[z]-reso[z];
}
if(avai[0]>maxm[0]||avai[1]>maxm[1])
{
	avai[0]=maxm[0];
	avai[1]=maxm[1];
}


if(need[0]>avai[0]&&need[1]>avai[1])
	 {cout<<"UNSAFE!!!! \n";}
else
     {
      cout<<"EXECUTED \n";
     
for(z=0;z<2;z++)
{
	avai[z]+=reso[z];
}}
}
}

