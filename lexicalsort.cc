#include<iostream>
#define max 100
using namespace std;
string lower(string);
int lex(string,string);
int main()
{
    string a[max];
    int i,j,min,n;
    cout<<"-----input n---\n";
    cin>>n;
    cout<<"-----input array----\n";
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<endl;
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
            if(lex(a[j],a[min])) //a[j]<a[mid]
                min=j;
        swap(a[i],a[min]);
    }
    cout<<"------sorted array-----\n";
    for(i=0;i<n;i++)
        cout<<a[i]<<"\t";
    cout<<endl;
    return 0;
}
int lex(string a,string b)
{
    a=lower(a);
    b=lower(b);
    int i=0,f=0;
    while(!f)
    {
        
        if(a[i]<b[i]){
            f=1;
            break;
            
        }
        else if(a[i]==b[i])
        {
            i++;
        }
        else{
            f=0;
            break;
            
        }
        
    }
    return f;
}
string lower(string a)
{
    int len=a.length();
    string b=a;
    a="";
    for(int i=0;i<len;i++)
    {
        a.push_back(tolower(b[i]));
    }
    return a;
}
