#include <simplecpp>

main_program{
    int n;
    cin>>n;
    turtleSim();
    repeat(n){
        forward(50); left(360/n); wait(0.5);
   forward(50); right(720/n); wait(0.5);
   
    }
    getClick();
}