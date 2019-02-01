#include <iostream>

using namespace std;

/*
 * Agregados são uma coleção de tipos de dados.
 * Se a coleção tem os mesmos tipos de dados, chamamos de agregados homogêneos;
 * Se a coleção tem diferentes tipos de dados, chamamos de agregados heterogêneos;
 */

//agregado homogêneo;
int vetor[100]; //Vetor com 100 posições

//agregado heterogêneo;
struct registro { //registro é um tipo e não uma variável
    int codigo;
    char nome[60];
    int idade;
};

//funcao para gerar id automatico
int geradorID(){
    static int id=1;
    return id++;
}

registro dados;//dados é a variável que representa o registro

int main()
{
    cout << "Lendo os dados do registro"<<endl;
    dados.codigo = geradorID();
    cout << "Digite um nome: ";
    cin.getline(dados.nome,60); //getline para ler o nome
    cout << "Digite uma idade: ";
    cin >> dados.idade;

    cout << "Os valores digitados para o registro são: "<<endl;
    cout << "Código: "<<dados.codigo<<endl;
    cout << "Nome: "<<dados.nome<<endl;
    cout << "Idade: "<<dados.idade<<endl;

    return 0;
}

