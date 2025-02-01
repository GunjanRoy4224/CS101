#include<simplecpp>
main_program{
    int m;
    int n;
    cin>>m;
    cin>>n;
    int a=m;
    int b=n;
    while(b>0){
           int x = a%b;
        a=b;
        b=x;
    }
    int LCM =(m*n)/a;
    cout<<LCM;
    }
