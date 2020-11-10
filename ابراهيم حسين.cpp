#include<iostream.h>
#include<conio.h>
int i, j;
float g;
int v,sum=0;
int c[10];
int a[10];
void input()
{
for(i=0;i<10;i++)
{
cout<<" user name"<<endl;
cin>>a[i];
cout<<"Enter the total score of students in all eight courses\n";
cin>>c[j];

}
}
void external()
{
for(j=0;j<10;j++)
sum=sum+c[j];
cout<<"Total scores of students in the eight courses= :"<<sum<<endl;
v=sum/10;

cout<<"Average scores of students in the eight courses =  :"<<v<<endl;

if(v<50)
cout<<"the level of all student is bad"<<endl;
else
if(v>=50&&v<75)
cout<<"the level of all student is good"<<endl;
else
if(v>=75&&v<=85)
cout<<"the level of all student is very good"<<endl;
else
if(v>85&&v<=100)
cout<<"the level of all student is excellent"<<endl;
else
if(v<1&&v>100)
cout<<"something went wrong"<<endl;
}

main()
{
cout<<"enter the all students  user names and scores one by one"<<endl;
 input();
 external();
getch();
}
