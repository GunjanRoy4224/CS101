#include <simplecpp>

main_program{
    int age;
    cin>>age;
    if(age>=2 && age<=3){
        cout<<"Pre-reader";
    }
    else if(age>=4 && age<=5){
        cout<<"Bigining reader";
    }
    else if(age>=6 && age<=7){
        cout<<"Intermidiate reader";
    }
    else if(age>=8 && age<=100){
        cout<<"Advanced reader";
    }
    else{
        cout<<"invalid";
    }
 
}