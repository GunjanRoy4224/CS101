#include<simplecpp>
#include<cstdlib>
main_program{
    int N;
    cin>>N;
    N = abs(N);
    int sum=0;
    if(N>=-1000 && N<=1000){
    while(N>0){
        int digit = N % 10 ;
        sum+=digit;
        N = N/10;
    }
}
cout<<sum;
}
