#include<simplecpp>
main_program{
    int Y;
    cin>>Y;
    if(Y%400==0){
        cout<<"Century Leap Year";
    }
    else if(Y%4==0 && Y%100!=0){
        cout<<"Leap Year";

    }
    else{
        cout<<"Not a Leap Year";
    }
    
}
