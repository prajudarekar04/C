#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    getline(cin,s);// input string.
    // string s="learn CPP";// init string.
    cout<<s<<endl;

    cout<<"Length of string : "<<s.length()<<endl;// string length

    string s1=s;//copy string
    cout<<s1<<endl;

    string s2="Sangli";
    string s3=s1.append(s2);// append or concadinate string
    // string s3=s1+s2;// concadinate string
    cout<<s3<<endl;

    cout<<"The char.'c'is at pos. : "<<s3.find('c')<<endl;// find pos. of specific char. from string

    string s4=s3.substr(0,8); // substring
    cout<<"My Substing is : "<<s4<<endl;

    string s5="zufa";
    sort(s5.begin(),s5.end()); // sort string
    cout<<s5<<endl;

    string s6="pot";
    reverse(s6.begin(),s6.end()); // reverse string
    cout<<s6<<endl;

    return 0;
}