#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char a[9];
        int x=0,o=0,k=0,m=0,n=0;
        for(int i=0;i<9;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<9;i++)
        {
            if(a[i]=='X')
             x++;
            else if(a[i]=='O')
             o++;
            else if(a[i]=='_')
             k++;
        }
        if(a[0]=='X' && a[1]=='X' && a[2]=='X')
         m++;
        else if(a[0]=='X' && a[4]=='X' && a[8]=='X')
         m++;
        else if(a[0]=='X' && a[3]=='X' && a[6]=='X')
         m++;
         else if(a[3]=='X' && a[4]=='X' && a[5]=='X')
         m++;
          else if(a[6]=='X' && a[4]=='X' && a[2]=='X')
         m++;
          else if(a[6]=='X' && a[7]=='X' && a[8]=='X')
         m++;
          else if(a[1]=='X' && a[4]=='X' && a[7]=='X')
         m++;
          else if(a[2]=='X' && a[5]=='X' && a[8]=='X')
         m++;
        
        
        
        
        
         if(a[0]=='O' && a[1]=='O' && a[2]=='O')
         n++;
        else if(a[0]=='O' && a[4]=='O' && a[8]=='O')
         n++;
        else if(a[0]=='O' && a[3]=='O' && a[6]=='O')
         n++;
         else if(a[3]=='O' && a[4]=='O' && a[5]=='O')
         n++;
          else if(a[6]=='O' && a[4]=='O' && a[2]=='O')
         n++;
          else if(a[6]=='O' && a[7]=='O' && a[8]=='O')
         n++;
          else if(a[1]=='O' && a[4]=='O' && a[7]=='O')
         n++;
          else if(a[2]=='O' && a[5]=='O' && a[8]=='O')
         n++;
         
          if(k==0)
        {
            if(x==5 && o==4 && m==1)
            {
            cout<<"1"<<endl;
            }
            else if(x==5 && o==4 && n==1)
            {
            cout<<"1"<<endl;
            }
            else if(x==5 && o==4 && m==0 && n==0)
            {
            cout<<"1"<<endl;
            }
            else if(x==5 && o==4 && m=2)
            {
                cout<<"1"<<endl;
            }
            else
            {
                cout<<"3"<<endl;
            }
        }
        if(k!=0)
        {
            if(k%2==0)
            {
                if(x==o+1 && m==1 && n==1)
                 cout<<"3"<<endl;
                else if(x==o+1 && (m==1 || n==1))
                 cout<<"1"<<endl;
                else if(x==o+1)
                 cout<<"2"<<endl;
                else 
                 cout<<"3"<<endl;
            }
             if(k%2==1)
            {
                if(x==o && m==1 && n==1)
                 cout<<"3"<<endl;
                else  if(x==o && (m==1 || n==1))
                 cout<<"1"<<endl;
                else if(x==o)
                 cout<<"2"<<endl;
                else 
                 cout<<"3"<<endl;
            }
        }
    }
    return 0;
}