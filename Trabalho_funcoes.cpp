#include <iostream>
#include <conio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
using namespace std;

//  Trabalho funções  //
int num,numeroSequencia,resultado;
char menu();
int multiploTree();
int consecutivo();
int somatoria(int x);
int fatorial();
int fibonacci(int x);
char Sair();

int main(){
	setlocale(LC_ALL, "portuguese");
	char opcao='N';
	while (opcao != 'S'){
		opcao=menu();
		switch (opcao) {
			case '1' : { multiploTree();  break;}
		
			case '2' : { consecutivo();   break;}
			
			case '3' : { system("cls"); 
			             cout<<"\n\nDigite um valor : ";
	                     cin>>num;
			             cout<<"\n\nA somatoria do numero é : "<<somatoria(num);
						 getch(); 
						                  break;}
						                  
			case '4' : { fatorial();      break;}
			
			case '5' : {system("cls"); 
                        cout << "\n\nInforme um valor: ";
                        cin >> numeroSequencia;
                        cout << "\n\nSequencia de Fibonacci: " << numeroSequencia << " elementos:" << endl;
                        for (int i=0;i<numeroSequencia;i++){
                        resultado = fibonacci(i);
                        cout << resultado << " - ";
                        
						                     }
                        cout << "\n\nFinal da Sequencia!";
                        getch();		 
						                  break;}
			
			case '6' : { opcao = Sair();  break;}
			
			default : { cout<<"\n\nOpcao invalida. Tecle algo para continuar..."; getch(); }
						
			}
		}
	}
	
char menu(){
char op;
system("cls"); 
cout<<"\t\tOpções:\n\n";
cout<<"\t\t\t1 - Ver se um Numero é multiplo de 3\n\n";
cout<<"\t\t\t2 - Ler 10 numeros e fazer a media,soma e maior e manor numero deles\n\n";
cout<<"\t\t\t3 - Fazer a somatoria de um numero digitado\n\n";
cout<<"\t\t\t4 - Fazer o fatorial de um numero digitado\n\n";
cout<<"\t\t\t5 - Calcular a sequencia de Fibonacci de um numero digitado \n\n";
cout<<"\t\t\t6 - Sair do programa\n\n";
cout<<"\t\tEscolha a opção: ";
op=toupper(getche());
	return op;
}	

char Sair(){
	char sair='N';
	cout<<"\n\nDeseja encerrar o programa? (S/N) : ";
	sair=toupper(getche());
	if (sair=='S') {
		cout<<"\n\nSaindo do programa...";
		getch();
		system("cls");
	} 
	return sair;
}

int multiploTree(){
	system("cls"); 
	int mult;
	cout<<"\n\n\tDigite um numero : ";
	cin>>mult;
	if(mult % 3 == 0){
		cout<<"\n\n\tEsse numero é multiplo de 3! ";
	}
	else {
		cout<<"\n\n\tEsse numero não é multiplo de 3!";
	}
	cout<<"tecle algo para retornar..";
	getch();
	
}

int consecutivo(){
	system("cls");
	int x[10],i = 0,cont = 0;
	int media = 0, soma = 0;
	for (i = 0 ; i < 10 ; i ++){
		cout<<"Digite um valor : ";
		cin>>x[i];
		soma += x[i];
		media+= x[i];
		cont ++;
		if (x[i] == x[i-1]+1){
		   cont = i;
           i = 10;
		}
	}
	cout<<"\n\n A soma é : "<<soma;
	cout<<"\n\n A media é : "<<media/cont;
	
	int menor = x[0];
	int maior = menor;
		for(int i = 0 ; i < cont ; i++ ){
			if(x[i] > maior ) maior = x[i];
			if(x[i] <= menor ) menor = x[i];
		}
		cout<<"\n\n o maior numero sera: "<<maior;
		cout<<"\n\n o menor numero sera: "<<menor;
	getch();	
}

int somatoria(int x){	
    if (x == 1) {
        return 1;
    } else {
        return x + somatoria(x - 1);
    }
    
}

int fatorial(){
	system("cls");
	int a, result=1;
    cout << "\n\nInforme um valor: ";
    cin >> a;
    for (int x=a; x>1; x--)
        result = result * x;
    cout << "\n\nFatorial de " << a << " = " << result;
    getch();
}

int fibonacci(int x){
	if ((x == 0)|| (x == 1))
       return (x);
    else
       return ((fibonacci(x-1) + fibonacci(x-2)));

}





