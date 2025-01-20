#include <simplecpp>
#include <iomanip>

 main_program{
    float C;
    cin>>C;
    if (C>=-100 && C<=100){
    float F = 1.8*(C)+32;
    cout << std::fixed << std::setprecision(2)<< F << endl;
    }
    else{
        cout<<"Tempreature is not in range";
    }

}