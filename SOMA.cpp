#include <iostream>

int main () {
	int n,x,soma; 
	std::cin>>n; 
	if((n<=50) && (n>=0)){
		soma=0;
		for(int i = 0; i < n; i++){
			std::cin>>x; 
			if ((x>5000) || (x<-5000)) {
				return 0;
			}
			soma += x;
		}	
		std::cout<<soma;
	}
	return 0;
}
