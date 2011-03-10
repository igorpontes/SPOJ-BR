#include <iostream>
int main () {
	int n,f=1; 
	std::cin>>n; 
	if(n<=12 && n>=0){
		if(n==0){
			f=1;
		}else{
			for(int i = 1; i <= n; i++){
				f = f * i;
			}
		}
		std::cout<<f;
	}
	return 0;
}
