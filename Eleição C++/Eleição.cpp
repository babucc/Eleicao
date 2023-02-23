#include <iostream>

using namespace std;

void menu(){
	cout<<"	ELEIÇÃO "<<endl;
	cout<<"1 - Candidato X"<<endl;
	cout<<"2 - Candidato Y"<<endl;
	cout<<"3 - Candidato Z"<<endl;
	cout<<"4 - Apuração dos Votos"<<endl;
	cout<<"5 - Finalizar"<<endl<<endl;
}

int main (){
	setlocale(LC_ALL,"portuguese");
	int x, y, z, op, totalx, totaly, totalz;
	
	do{
		menu();
		cout<<"Escolha a opção desejada: ";
		cin>>op;
		
		system("cls");
		
			switch(op){
		case 1:
			x = x + 1;
			break;
		case 2:
			y = y + 1;	
			break;
		case 3:
			z = z + 1;
			break;
		case 4:	
			totalx = x++;
			totaly = y-1;
			totalz = z++;
			
			cout<<"Total de votos Candidato X: "<<totalx <<endl;
			cout<<"Total de votos Candidato Y: "<<totaly <<endl;
			cout<<"Total de votos Candidato Z: "<<totalz <<endl;
	
			if (x > y && x > z){
				cout<<"Vencedor: Candidato X"<<endl<<endl;
			}else if (y > x && y > z){
				cout<<"Vencedor: Candidato Y"<<endl<<endl;
			}else if (z > x && z > y){
				cout<<"Vencedor: Candidato Z"<<endl<<endl;
			}else {
				cout<<"Apuração: Empate"<<endl<<endl;
			}
		}			
	}while (op != 5);
	
	cout<<"Votação Finalizada!";	
}
