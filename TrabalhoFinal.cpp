#include <iostream>
#include <string>
using namespace std;

#define MaxClientes 3

typedef struct{ //Struct para lanches
    string pao;
    string carne;
    string queijo;
    string hortaliça;
} Lanche;

typedef struct{ // Struct para pedidos
    Lanche comida;
    string bebida;
    string acompanhamento;
    string observação;
}Pedidos;

typedef struct{ // Struct para clientes;
    string nome;
    string telefone;
    string endereco;
    Pedidos pedido;
} Cliente;

int Cadastros = 0;
void Cadastrar(Cliente *NovoCliente, int C){
    cin.ignore();
    cout << "<== Insira o nome do cliente: ==>" << endl;
    getline(cin, NovoCliente[C].nome); 
    while(NovoCliente[C].nome.empty()){
        cout << "<== O nome nao pode ser vazio. Tente novamente: ==>" << endl;
        getline(cin, NovoCliente[C].nome);
    }

    cout << "<== Insira o telefone do cliente: ==>" << endl;
    getline(cin, NovoCliente[C].telefone); 
    while(NovoCliente[C].telefone.empty()){
        cout << "<== O telefone nao pode ser vazio. Tente novamente: ==>" << endl;
        getline(cin, NovoCliente[C].telefone);
    }

    cout << "<== Insira o endereco do cliente: ==>" << endl;
    getline(cin, NovoCliente[C].endereco); 
    while(NovoCliente[C].endereco.empty()){
        cout << "<== O endereco nao pode ser vazio. Tente novamente: ==>" << endl;
        getline(cin, NovoCliente[C].endereco);
    }
    cout << "<== Cliente cadastrado com sucesso! ==>" << endl;
    Cadastros++;
}

int BinarySearch(Cliente *NovoCliente, const string& NomeCliente, int NumCliente){ // Busca binaria
    int ini = 0;
    int fim = NumCliente - 1;
    while(ini<=fim){
        int meio = ((ini+fim)/2);
        if(NovoCliente[meio].nome == NomeCliente){
            return meio;
        }
        if(NovoCliente[meio].nome < NomeCliente){
            ini = meio+1;
        }
        else{
            fim = meio-1;
        }
    }
    cout << "<== Cliente nao encontrada, verifique se as entradas estao corretas ==>" << endl;
    return -1;
}

void Anotar(Cliente *NovoCliente, string NomeCliente, int NumClientes){
    char confirmacao, i;
    string observação;
    i = BinarySearch(NovoCliente, NomeCliente, NumClientes);
    cout << "Escolha o pao: " << endl;
    cout << "1 - Pao brioche" << endl << "2 - Pao australiano" << endl << "3 - Pao de Hamburguer" << endl;
    cin >> confirmacao;
    if(confirmacao != '1' && confirmacao != '2' && confirmacao != '3'){
        cout << "<== Opcao invalida, por favor escolha uma das opcoes acima ==>" << endl;
    }
    if(confirmacao == '1'){
        NovoCliente[i].pedido.comida.pao = "pao brioche";
    }
    if(confirmacao == '2'){
        NovoCliente[i].pedido.comida.pao = "pao australiano";
    }
    if(confirmacao == '3'){
        NovoCliente[i].pedido.comida.pao = "pao de hamburguer";
    }


    cout << "Escolha a carne:" << endl;
    cout << "1 - Gado" << endl << "2 - Porco" << endl << "3 - Frango" << endl;
    cin >> confirmacao;
    if(confirmacao != '1' && confirmacao != '2' && confirmacao != '3'){
        cout << "<== Opcao invalida, por favor escolha uma das opcoes acima ==>" << endl;
    }
    if(confirmacao == '1'){
        NovoCliente[i].pedido.comida.carne = "gado";
    }
    if(confirmacao == '2'){
        NovoCliente[i].pedido.comida.carne = "porco";
    }
    if(confirmacao == '3'){
        NovoCliente[i].pedido.comida.carne = "frango";
    }


    cout << "Escolha o queijo:" << endl;
    cout << "1 - Mussarela" << endl << "2 - Cheddar" << endl << "3 - Provolone" << endl;
    cin >> confirmacao;
    if(confirmacao != '1' && confirmacao != '2' && confirmacao != '3'){
        cout << "<== Opcao invalida, por favor escolha uma das opcoes acima ==>" << endl;
    }
    if(confirmacao == '1'){
        NovoCliente[i].pedido.comida.queijo = "mussarela";
    }
    if(confirmacao == '2'){
        NovoCliente[i].pedido.comida.queijo = "cheddar";
    }
    if(confirmacao == '3'){
        NovoCliente[i].pedido.comida.queijo = "provolone";
    }


    cout << "Escolha a hortalica:" << endl;
    cout << "1 - Cebola" << endl << "2 - Alface" << endl << "3 - Tomate" << endl;
    cin >> confirmacao;
    if(confirmacao != '1' && confirmacao != '2' && confirmacao != '3'){
        cout << "<== Opcao invalida, por favor escolha uma das opcoes acima ==>" << endl;
    }
    if(confirmacao == '1'){
        NovoCliente[i].pedido.comida.hortaliça = "cebola";
    }
    if(confirmacao == '2'){
        NovoCliente[i].pedido.comida.hortaliça = "alface";
    }
    if(confirmacao == '3'){
        NovoCliente[i].pedido.comida.hortaliça = "tomate";
    }


    cout << "Escolha a bebida:" << endl;
    cout << "1 - Refrigerante" << endl << "2 - Suco de Laranja" << endl << "3 - Agua" << endl;
    cin >> confirmacao;
    if(confirmacao != '1' && confirmacao != '2' && confirmacao != '3'){
        cout << "<== Opcao invalida, por favor escolha uma das opcoes acima ==>" << endl;
    }
    if(confirmacao == '1'){
        NovoCliente[i].pedido.bebida = "refrigerante";
    }
    if(confirmacao == '2'){
        NovoCliente[i].pedido.bebida = "suco de laranja";
    }
    if(confirmacao == '3'){
        NovoCliente[i].pedido.bebida = "agua";
    }


    cout << "Escolha o acompanhamento" << endl;
    cout << "1 - Batata Frita" << endl << "2 - Onion Rings" << endl << "3 - Batata Rustica" << endl;
    cin >> confirmacao;
    if(confirmacao != '1' && confirmacao != '2' && confirmacao != '3'){
        cout << "<== Opcao invalida, por favor escolha uma das opcoes acima ==>" << endl;
    }
    if(confirmacao == '1'){
        NovoCliente[i].pedido.acompanhamento = "batata frita";
    }
    if(confirmacao == '2'){
        NovoCliente[i].pedido.acompanhamento = "onion rings";
    }
    if(confirmacao == '3'){
        NovoCliente[i].pedido.acompanhamento = "batata rustica";
    }

    cout << "Deseja fazer alguma observacao? (N/S)" << endl;
    cin >> confirmacao;
    if (confirmacao != 'N' && confirmacao != 'S' && confirmacao != 'n' && confirmacao != 's') {
        cout << "<== Opcao invalida, responda com (N/S) ==>" << endl;
    }
    if(confirmacao == 'S' || confirmacao == 's'){
        cout << "<== Insira a informacao: (Ex: 'Sem cebola') ==>" << endl;
        cin.ignore();
        getline(cin, observação);
        NovoCliente[i].pedido.observação = observação;
    }
    if(confirmacao == 'N' || confirmacao == 'n'){
    }
}

void Alterar(Cliente *NovoCliente, const string& ClienteAlterar, int NumClientes){
    for(int i=0; i<NumClientes; i++){
        if(NovoCliente[i].nome == ClienteAlterar){
            cout << "<<== Cliente encontrado, insira os novos dados ==>" << endl;
            cout << "Insira o novo nome: ";
            cin.ignore();
            getline(cin, NovoCliente[i].nome);

            cout << "Insira o novo telefone: ";
            getline(cin, NovoCliente[i].telefone);

            cout << "Insira o novo endereco: ";
            getline(cin, NovoCliente[i].endereco); 

            cout << "<== Dados alterados com sucesso ==>" << endl;
            return;
        }
    }
    cout << "<== Cliente nao encontrado, verifique se o nome foi digitado corretamente ou se o cliente foi cadastrado (Opcao 4) ==>" << endl;
}

void Visu_Clientes(Cliente *NovoCliente, int NumClientes){
    for(int i=0; i<NumClientes; i++){
        cout << "<=== " << (i+1) << "* Cliente" << " ====>" << endl;
        cout << "Nome: " << NovoCliente[i].nome << endl;
        cout << "Telefone: " << NovoCliente[i].telefone << endl;
        cout << "Endereco: " << NovoCliente[i].endereco << endl;
        cout << endl;
    }
}

void Visu_Pedido(Cliente *NovoCliente, int opcao){
    int id = opcao+1;
    cout << "<== Pedido do cliente: " << NovoCliente[id].nome << " ==>" << endl;
    cout << "Prato principal:" << endl;
    cout << "- " << NovoCliente[id].pedido.comida.pao << endl;
    cout << "- Carne de " << NovoCliente[id].pedido.comida.carne << endl;
    cout << "- Queijo " << NovoCliente[id].pedido.comida.queijo << endl;
    cout << "- " << NovoCliente[id].pedido.comida.hortaliça << endl;
    cout << "- Bebida:" << endl;
    if(NovoCliente[id].pedido.bebida == "refrigerante"){
        cout << "- Uma coquinha bem gelada";
    }
    else if(NovoCliente[id].pedido.bebida == "suco de laranja"){
        cout << "- Um suco de laranja pra relaxar";
    }
    else{
        cout << "- Uma aguinha geladinha";
    }
    cout << endl;
    cout << "Acompanhamento:" << endl;
    cout << "Acompanha uma porcao de " << NovoCliente[id].pedido.acompanhamento << endl;
    cout << endl;
    cout << "Observacoes:" << endl;
    if(!NovoCliente[id].pedido.observação.empty()){
        cout << NovoCliente[id].pedido.observação << endl;
    }
    else{
        cout << "Nenhuma observacao" << endl;
    }
}

void OrdenarClientes(Cliente *NovoCliente, int NumClientes){ // Bubble sort recursivo
    if(NumClientes==1){
        return;
    }
    for(int i=0; i<NumClientes-1; i++){
        if(NovoCliente[i].nome > NovoCliente[i+1].nome){
            swap(NovoCliente[i], NovoCliente[i+1]);
        }
    }
    OrdenarClientes(NovoCliente, NumClientes-1);
}

void Escolha(Cliente *NovoCliente, int C) {
    char opcao, confirmacao;
    string ClienteAlterar, ClientePedido, NomeCliente;
    int NumClientes=0;
    do {
        cout << "O que voce deseja fazer?" << endl;
        cout << "1 - Cadastrar cliente" << endl;
        cout << "2 - Anotar pedido" << endl;
        cout << "3 - Alterar cadastro" << endl;
        cout << "4 - Visualizar clientes" << endl;
        cout << "5 - Visualizar pedidos" << endl;
        cout << "6 - Sair" << endl;
        cin >> opcao;
        if(opcao != '1' && opcao != '2' && opcao != '3' && opcao != '4' && opcao != '5' && opcao != '6'){
            cout << "<== Opcao invalida, insira um valor entre 1 e 6 ==>" << endl;
        }
        if (opcao == '1') {
            cout << "<== Cadastre os seus clientes, digite 'N' quando terminar de cadastrar " << endl;
            do {
                if (C <= MaxClientes) {
                    Cadastrar(NovoCliente, C);
                    C++;
                } else {
                    cout << "Limite de clientes atingido." << endl;
                    break;
                }
                cout << "<== Deseja continuar cadastrando? (N/S) ==>" << endl;
                cin >> confirmacao;
                if (confirmacao != 'N' && confirmacao != 'S' && confirmacao != 'n' && confirmacao != 's') {
                    cout << "<== Opcao invalida, responda com (N/S) ==>" << endl;
                }
                NumClientes++;
            } while (confirmacao != 'N' && confirmacao != 'n' && C <= MaxClientes);
            OrdenarClientes(NovoCliente, NumClientes);
        }
        if (opcao == '2') {
            cout << "<== Monte o pedido do seu cliente, digite 'N' quando terminar de montar ==>" << endl;
            do {
                cout << "<== Para qual cliente voce deseja anotar o pedido? (Insira o nome do cliente) ==>" << endl;
                Visu_Clientes(NovoCliente, NumClientes);
                cin.ignore();
                getline(cin, NomeCliente);
                Anotar(NovoCliente, NomeCliente, NumClientes);
                cout << "<== Deseja anotar outro pedido? (N/S) ==>" << endl;
                cin >> confirmacao;
                if (confirmacao != 'N' && confirmacao != 'S' && confirmacao != 'n' && confirmacao != 's') {
                    cout << "<== Opcao invalida, responda com (N/S) ==>" << endl;
                }
            } while (confirmacao != 'N' && confirmacao != 'n');
        }
        if (opcao == '3') {
            do{
                cout << "<== Qual cliente deseja alterar? ==>" << endl;
                cin.ignore();
                getline(cin, ClienteAlterar);
                Alterar(NovoCliente, ClienteAlterar, NumClientes);
                cout << "<== Continuar alterando? (N/S) ==>" << endl;
                cin >> confirmacao;
                if (confirmacao != 'N' && confirmacao != 'S' && confirmacao != 'n' && confirmacao != 's') {
                    cout << "<== Opcao invalida, responda com (N/S) ==>" << endl;
                }
            }while(confirmacao != 'N' && confirmacao != 'n');
        }
        if(opcao == '4'){
            Visu_Clientes(NovoCliente, NumClientes);
        }
        if(opcao == '5'){
            cout << "<== Deseja visualizar o pedido de qual cliente? (Insira o numero do cliente) ==>" << endl;
            Visu_Clientes(NovoCliente, NumClientes);
            cin >> opcao;
            if(opcao < 0 || opcao > NumClientes){
                cout << "<== Opcao invalida, insira um valor entre 1 e " << NumClientes << " ==>" << endl;
            }
            else{
                Visu_Pedido(NovoCliente, opcao);
            }
        }
    } while (opcao != '6');
}

int main(){
    int C = 0;
    Cliente *NovoCliente = new(nothrow) Cliente[Cadastros+1]; // Alocação dinamica do vetor
    if(!NovoCliente){ // Verifica se a alocação foi bem sucedida
        cout << "<== Erro ao alocar memoria." << endl;
        return 1;
    }
    Escolha(NovoCliente, C);
    delete[] NovoCliente; // Deleta o vetor alocado dinamicamente
    return 0;
};