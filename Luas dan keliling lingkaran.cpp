#include <iostream>

using namespace std;

int main()

{

	int a;
  int b;
  int c;
  

  
    
	cout<<"Masukan jari-jari lingkaran = ";
	cin>>a;
	
  b = a%7;
  c = a+a;
    
  if (b==0){
    
        cout<<"Keliling = ";
        cout<<(22*a)/7;
      
        cout<<"cm"<<endl;
        cout<<"Luas = ";
        
        cout<<c*c*22/7/4;
    
}

    else {

        cout<<"Keliling = ";
        cout<<3.14*a;
      
        cout<<"cm"<<endl;
        cout<<"Luas = ";
        
        cout<<c*c*3.14/4;

}


}