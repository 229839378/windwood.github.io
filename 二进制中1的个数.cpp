#include<iostream>
using namespace std;
inline int  lowbit(int &x){
return x&-x;

}
int main()
{
    int n,x;
    cin>>n;
    while(n--)
    {
        cin>>x;
        int res=0;
        while(x)
            x-=lowbit(x),res++;
        cout <<res<<" ";


    }
    return 0;
}
