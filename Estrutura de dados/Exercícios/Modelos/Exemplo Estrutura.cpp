#include <iostream>

using namespace std;

/*
 * Exemplo usando estrutura
 */
struct dados {
    char nome[60];
    int idade;
};

dados registros[5];
/*
 * Passando estruturas de dados como parâmetro
 */

void lerRegistros(dados registros[],int quantidade){
    for (int i=0; i < quantidade; i++){
        cout << "Digite o registro "<<(i+1)<<endl;
        cout << "Digite o nome: ";
        cin.getline(registros[i].nome,60);
        cout << "Digite uma idade: ";
        cin >> registros[i].idade;
        cin.ignore();
    }
}

void escreverRegistros(dados registros[], int quantidade){
    for (int i=0; i < quantidade; i++){
        cout << "Conteúdo do registro "<<(i+1)<<endl;
        cout << "Nome: "<< registros[i].nome << endl;
        cout << "Idade: "<< registros[i].idade << endl << endl;
    }
}

int main()
{
    cout << "Registros" << endl;
    lerRegistros(registros,5);
    escreverRegistros(registros,5);
    return 0;
}
