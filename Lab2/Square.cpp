#include<simplecpp>
main_program{
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){  
        if (i==1 || i==n || j==1 || j==n){
            cout<<"* ";
        }
        else if ((i+j)%2==0){cout<<"- ";}
        else{cout<<"+ ";}
        
      }
      cout<<endl;
    }
}
