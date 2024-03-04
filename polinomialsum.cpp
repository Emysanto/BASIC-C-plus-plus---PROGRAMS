\\write a program to add and multiply two polynomial numbers



#include <iostream>
#include<string>
using namespace std;
class polynomial
{ 
    public:
        void addition(int sum)
        {
            cout<<"sum is:"<<sum<<"+";
        }
        void addition1(int ss)
        {
            cout<<ss<<"x"<<endl;
        }
        void multiplication(int mm)
        {cout<<"product is:"<<mm<<"+";
        }
        void multiplication1(int hh)
        {cout<<hh<<"x+";
        }
        void multiplication3(int oo)
        {cout<<oo<<"x^2";}
        
        };
        
int main()
{    polynomial myobj;
    string a,b;
    int first,first1;

    string firsthalf,secondhalf,firsthalf11,secondhalf11;
    cout<<"Enter 2 polynomial numbers";
    cin>>a>>b;
    int a1=a.size();
    int b1=b.size();
    for(int i=0;i<a1;i++)
    {if(a[i]=='+')
        {first=i;}}
          for(int i=0;i<b1;i++)
    {if(b[i]=='+')
        {first1=i;}}
        for(int j=0;j<first;j++)
        {firsthalf=firsthalf+a[j];}
          for(int j=0;j<first1;j++)
        {firsthalf11=firsthalf11+b[j];}
        int sum=stoi(firsthalf)+stoi(firsthalf11);
          myobj.addition(sum);
          int z=first+1;
          int zz=first1+1;
          string bb,cc;
          while(a[z]!='x')
         {bb=bb+a[z];
            z++;
          }
           while(b[zz]!='x')
         {cc=cc+b[zz];
            zz++;
          }
          int yy=stoi(bb)+stoi(cc);
          myobj.addition1(yy);
          int mm=stoi(firsthalf)*stoi(firsthalf11);
          myobj.multiplication(mm);
          int hh=(stoi(firsthalf)*stoi(cc))+(stoi(firsthalf11)*stoi(bb));
          myobj.multiplication1(hh);
          int oo=stoi(cc)*stoi(bb);
          myobj.multiplication3(oo);
          
          
}
