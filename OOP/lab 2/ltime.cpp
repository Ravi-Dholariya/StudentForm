#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--)
    {
        int x , y;
        cin>>x>>y;
        if( x%2!=0 && y%2!=0)
        {
            cout<<"-1"<<endl;
        }
        else if(x%2==0 && y%2==0)
        {
                int i=x/2;
                int j = y;
                while(i!=0)
                {
                    cout<<"a";
                    i--;
                }
                while(j!=0)
                {
                    cout<<"b";
                    j--;
                }
                i = x/2;
                while(i!=0)
                {
                    cout<<"a";
                    i--;
                }
                i = y/2;
                while(i!=0)
                {
                    cout<<"b";
                    i--;
                }
                while(j!=0)
                {
                    cout<<"a";
                    j--;
                }
                i = y/2;
                while(i!=0)
                {
                    cout<<"b";
                    i--;
                }
        }
        else if(x%2==0 && y%2!=0)
        {
                int i=x/2;
                int j = y;
                while(i!=0)
                {
                    cout<<"a";
                    i--;
                }
                while(j!=0)
                {
                    cout<<"b";
                    j--;
                }
                i = x/2;
                while(i!=0)
                {
                    cout<<"a";
                    i--;
                }

                i = y/2;
                j=  x/2;
                while(i!=0)
                {
                    cout<<"b";
                    i--;
                }
                while(j!=0)
                {
                    cout<<"a";
                    j--;
                }
                cout<<"b";
                j = x/2;
                while(j!=0)
                {
                    cout<<"a";
                    j--;
                }
                i = y/2;
                while(i!=0)
                {
                    cout<<"b";
                    i--;
                }
        }
        else {

            int i=y/2;
                int j = y;
                while(i!=0)
                {
                    cout<<"b";
                    i--;
                }
                while(j!=0)
                {
                    cout<<"a";
                    j--;
                }
                i = y/2;
                while(i!=0)
                {
                    cout<<"b";
                    i--;
                }

                i = x/2;
                j=  y/2;
                while(i!=0)
                {
                    cout<<"a";
                    i--;
                }
                while(j!=0)
                {
                    cout<<"b";
                    j--;
                }
                cout<<"a";
                j = y/2;
                while(j!=0)
                {
                    cout<<"b";
                    j--;
                }
                i = x/2;
                while(i!=0)
                {
                    cout<<"a";
                    i--;
                }
        }
    }
    return 0;
}
