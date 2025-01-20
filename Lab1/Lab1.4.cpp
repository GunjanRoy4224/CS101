#include <simplecpp>

main_program {
    int n;
    cin>>n;
    int i =1;
    repeat(n){
        repeat(n-i){
            cout<<"_";  
            }
        repeat(2*i-1){ 
            cout<<"*";  }
        repeat(n-i){
        cout<<"_";  }
        i++;
        cout<<endl;

    }


}