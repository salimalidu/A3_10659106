#include <iostream>

using namespace std;


int main(){
	
	int results;
	
	cout<<"enter your mark please"<<endl;
	cin>>results;
	
	if (results>=80 && results<=100){
		
		cout<<"You had A"<<endl;
	}
	
	else if(results>=75 && results<=79){
		
		cout<<"You had B+"<<endl;
	}
	
	else if(results>=70 && results<=74){
		
		cout<<"You had B"<<endl;
	}
	
	else if(results>=65 && results<=69){
		
		cout<<"You had C+"<<endl;
	}
	
	else if(results>=60 && results<=64){
		
		cout<<"You had C"<<endl;
	}
	
	else if(results>=55 && results<=59){
		
		cout<<"You had D+"<<endl;
	}
	
	else if(results>=50 && results<=54){
		
		cout<<"You had D"<<endl;
	}
	
	else if(results>=45 && results<=49){
		
		cout<<"You had E"<<endl;
	}
	
	else if(results>=0 && results<=44){
		
		cout<<"You had F"<<endl;
	}
	
	else{
		cout<<"Invalid results"<<endl;
	}
	
	return 0;

}
	
	

