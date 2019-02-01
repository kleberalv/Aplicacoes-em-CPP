#include <iostream>

using namespace std;

/*
 * Agregados s�o uma cole��o de tipos de dados.
 * Se a cole��o tem os mesmos tipos de dados, chamamos de agregados homog�neos;
 * Se a cole��o tem diferentes tipos de dados, chamamos de agregados heterog�neos;
 */

//agregado homog�neo;
int vetor[100]; //Vetor com 100 posi��es

//agregado heterog�neo;
struct registro { //registro � um tipo e n�o uma vari�vel
    int codigo;
    char nome[60];
    int idade;
};

//funcao para gerar id automatico
int geradorID(){
    static int id=1;
    return id++;
}

registro dados;//dados � a vari�vel que representa o registro

int main()
{
    cout << "Lendo os dados do registro"<<endl;
    dados.codigo = geradorID();
    cout << "Digite um nome: ";
    cin.getline(dados.nome,60); //getline para ler o nome
    cout << "Digite uma idade: ";
    cin >> dados.idade;

    cout << "Os valores digitados para o registro s�o: "<<endl;
    cout << "C�digo: "<<dados.codigo<<endl;
    cout << "Nome: "<<dados.nome<<endl;
    cout << "Idade: "<<dados.idade<<endl;

    return 0;
}

