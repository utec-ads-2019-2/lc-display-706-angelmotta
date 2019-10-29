#include <cstdio>
#include <string>

using namespace std;

void print(int &s, int& n);
void printNumber(char &digit,int &fila, int &cols);
void print_1(int &fila, int &cols);
void print_0(int &fila, int &cols);

int main(){
	int s,n;
	while(scanf("%d %d",&s,&n) != EOF){
		if(s == 0 && n == 0) break;
		print(s, n);
		//printf("Ingresaste:%d\n",s);
	}
	return 0;
}

void print(int &s, int& n){
	int rows = 2 * s + 3;
	int cols = s + 2;
	string num = to_string(n);
	/*for(int index=0; index<num.length();++index){
		//printf("%c ", num[index]);
		printNumber(num[index], rows, cols);
	}*/
	for(int i=0; i<rows; ++i){
		for(int index=0; index<num.length();++index){
			//printf("%c ", num[i]);
			printNumber(num[index], i, cols);
		}
	}
}

void printNumber(char &digit,int &fila, int &cols){
	switch(digit){
		case '0': print_0(fila, cols); break;
		case '1': print_1(fila, cols); break;
	}
}

void print_0(int &fila, int &cols){
	printf("cero \n");
	for(int i=0; i<fila; ++i){
		for(int j=0; j<cols; ++j){
			if(i == 0 || i == fila-1){
				if(j == 0 || j == cols-1){
					printf(" ");
				}
				else printf("-");
			}
			else if(i != fila/2){
				if(j == 0 || j == cols-1) printf("|");
				else printf(" ");
			}
			else printf(" ");
		}
		printf("\n");	// endl for the next row
	}
}

void print_1(int &fila, int &cols){
	printf("uno \n");
	for(int i=0; i<fila; ++i){
		for(int j=0; j<cols; ++j){
			if(j == cols - 1){
				if(i == 0 || i == fila/2 || i == fila-1){
					printf(" ");
				}
				else printf("|");
			}
			else printf(" ");
		}
		printf("\n");	// endl for the next row
	}
}
