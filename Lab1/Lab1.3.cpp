#include <simplecpp>

main_program{
    int n;
    cin>>n;
    int f=1;
    if(n>=0 && n<=10){
    repeat(n){
        f*=n;
        n=n-1;
    }
    cout<<f;
    }
    else{
        cout<<"invalid";
}

}