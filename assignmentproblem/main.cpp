#include <iostream>
#include <fstream>

using namespace std;

class information
{
public:
    string b[100]={"3456.txt","4567.txt","5678.txt"};
    string admin_username={"1234"};
    string admin_password={"1111"};
    void input();
    void admin();
    void staff(string );
};

void information::input()
{
    string username,password,member;
    cout<<"To which person you want to access : ";
    cin>>member;
    if(member=="admin")
    {
    cout<<"Enter Your User Name : ";
    cin>>username;
    cout<<"Enter Your Password : ";
    cin>>password;
    if(username==admin_username&&password==admin_password)
        {
            admin();
        }
        else
        {
            cout<<"Invalid user name or password\n";
        }
    }
    else
    if(member=="staff")
    {
    cout<<"Enter Your User Name : ";
    cin>>username;
    cout<<"Enter Your Password : ";
    cin>>password;
    if(username=="3456"&&password=="2222")
        {
            staff(username);
        }
        else
            if(username=="4567"&&password=="3333")
            {
                staff(username);
            }
        else
            if(username=="5678"&&password=="4444")
            {
                staff(username);
            }
            else
            {
                cout<<"Invalid user name or password";
            }
    }
    else
        cout<<"Invalid member type ";
}
void information::admin()
{
    fstream admincheck;
    char admchk[200];
    int k,l;
    for(k=0;k<3;k++)
    {
        admincheck.open(b[k].c_str(),ios::in);
        for(l=0;l<4;l++)
        {
            admincheck>>admchk;
            cout<<admchk<<endl;
        }
        admincheck.close();
    }
}
void information::staff(string x)
{
    fstream staffcheck;
    char stfchk[200];
    string ext=x+".txt";
    int i;
    staffcheck.open(ext.c_str(),ios::in);
    for(i=0;i<4;i++)
    {
        staffcheck>>stfchk;
        cout<<stfchk<<endl;
    }
}
int main()
{
    information obj;
    obj.input();
    return 0;
}
//codes end
