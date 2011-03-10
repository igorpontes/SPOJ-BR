#include <iostream>
int main () {
	int v=0,i=0,j=0,k=0,l=0,c=0; 
	std::cin>>v;
	while (v!=0 && v>=0 && v<=10000) {
		i=v/50;
		if (i>0) {
			v=v % 50;
		}
		j=v/10;
		if (j>0) {
			v=v % 10;
		}
		k=v/5;
		if (k>0) {
			v=v % 5;
		}
		l=v/1;
		c++;
		std::cout<<"Teste ";
		std::cout<<c;
		std::cout<<"\n";
		std::cout<<i;
		std::cout<<" ";
		std::cout<<j;
		std::cout<<" ";
		std::cout<<k;
		std::cout<<" ";
		std::cout<<l;
		std::cout<<"\n";
		std::cin>>v;
	}
	return 0;
}
