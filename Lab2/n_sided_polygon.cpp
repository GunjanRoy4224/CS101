#include<simplecpp>
main_program{
    int n;
    cin>>n;
    turtleSim();
    repeat(n){
        forward(50); right(180*(n-4)/n);
        forward(50); left(180*(n-2)/n); 
    }
    getClick();

}