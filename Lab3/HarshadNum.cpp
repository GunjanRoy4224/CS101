#include<simplecpp>
main_program{
    int N;
    cin>>N;
    int K = N;
    int sum = 0;
    if(N>=1 && N<=100000){
     while(K>0){
        sum+= K%10;
        K=K/10;
     }
     if(N%sum==0){
        cout<<"YES";
     }
     else{
        cout<<"NO";
     }
}
}