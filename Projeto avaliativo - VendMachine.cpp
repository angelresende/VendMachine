#include <iostream> //biblioteca padrão
#include <clocale> // setlocale
#include <cstdlib> // system
#include <string> // Textos em geral

using namespace std;

#define N 11

  int main(){
    
    setlocale(LC_ALL, "Portuguese");

    string prod[N];
    int op, qnt[N]; //variável de entrada do modo de operação do programa
    float valor=0,valor2=0,vl_t_in=0, vunit[N],vt=0,vdif=0,troco=0,troco2=0,fat=0; // variaveis referentes ao valor (dinheiro)
    int qtd=0, cliente=0, menu, prodesc; //variáveis de código de quantidade de produto e clientes por loop
    char resp, resp2; //char resp [S],[s],[N],[n];
    
    //vetor informando os produtos  
    prod[1]="Refrigerante sabores";
    prod[2]="Salgadinhos sabores";
    prod[3]="Amendoim";
    prod[4]="Energético";
    prod[5]="Biotónico";
    prod[6]="Água tónica";
    prod[7]="Água mineral s/gás";
    prod[8]="Água mineral c/ gás";
    prod[9]="Bebida láctea";
    prod[10]="Chocolates sabores";

    //vetor informando os valores dos produtos
    vunit[1] = 4.50;
    vunit[2] = 3.75;
    vunit[3] = 2.95;
    vunit[4] = 6.90;
    vunit[5] = 5.75;
    vunit[6] = 5.00;
    vunit[7] = 2.00;
    vunit[8] = 2.65;
    vunit[9] = 2.40;
    vunit[10] = 3.25;

    //vetor informando a quantidade de cada produto
    qnt[1] = 10;
    qnt[2] = 10;
    qnt[3] = 10;
    qnt[4] = 10;
    qnt[5] = 10;
    qnt[6] = 10;
    qnt[7] = 10;
    qnt[8] = 10;
    qnt[9] = 10;
    qnt[10] = 10;

  //modo de entrada
  //necessário informar se será usuário ou adm
  //criar um loop para não precisar sair do sistema para acessar outro perfil e não perder as informações que o sistema dará no modo cliente
 
  cout << " ----- Modo de entrada ----- " << endl;
  cout << "\t1 - Usuário " << endl;
  cout << "\t2 - Administrador" << endl;
  cout << "\t0 - Sair" << endl;
  cout << "--------------------------" << endl;
  
  while (op<=2){
  cout << "Digite o modo de entrada do programa: ""\n";
  cin >> op;
    
    if (op==0){
      break;
    }
  
  if (op==1){
  //versão usuário
  cout << " ------------------------- MENU ------------------------------- " << endl;
          cout << "\t1 - Refrigerante sabores " <<" "<< "\tValor Unitário: R$ 4,50 " << endl;
          cout << "\t2 - Salgadinhos sabores " <<"  "<< "\tValor Unitário: R$ 3,75 " << endl;
          cout << "\t3 - Amendoim " <<" 	          "<< "\tValor Unitário: R$ 2,95 " << endl;
          cout << "\t4 - Energético " <<"           "<< "\tValor Unitário: R$ 6,90 " << endl;
          cout << "\t5 - Biotónico " <<"            "<< "\tValor Unitário: R$ 5,75 " << endl;
          cout << "\t6 - Água tônica " <<"          "<< "\tValor Unitário: R$ 5,00 " << endl;
          cout << "\t7 - Água mineral sem gás " <<" "<< "\tValor Unitário: R$ 2,00 " << endl;
          cout << "\t8 - Água mineral com gás " <<" "<< "\tValor Unitário: R$ 2,65 " << endl;
          cout << "\t9 - Bebida láctea " <<"        "<< "\tValor Unitário: R$ 2,40 " << endl;
          cout << "\t10 - Chocolates sabores" <<"   "<< "\tValor Unitário: R$ 3,25 " << endl;
          cout << "---------------------------------------------------------------" << endl;
 // criar um loop para inserir mais de um cliente
 // criar um loop para o cliente inserir os produtos desejados, qtd desejada, mostrar o valor que ficara ao final da seleção de cada cliente

  cout << "Quantidade de cliente: ";
  cin >> cliente;

  //começa o loop do cliente 1, efetua todo o processo e começa o do cliente 2 e assim por diante.
    for(int i=0; i<cliente; i++){
            
    cout << "Escolha uma opção do menu. Cliente "<< i+1<< " : ";
    cin >> prodesc;
    cout << "O produto escolhido foi " << prod[prodesc] << " e o preço é: R$ " << vunit[prodesc]<<endl;

  //iniciará o estoque com 10 unidades de cada produto, se a qtd passar disto informar que o produto possui x de estoque
    cout << "Informe quantas unidades você deseja do produto: ";
    cin >> qtd;
        
    //loop para acrescentar mais produtos para o cliente  
    cout << "Deseja mais algum produto. Informe 'S' caso sim, e 'N' caso não.: ";
    cin >> resp;

    vt = vunit[prodesc]*qtd;
    
    while ((resp=='s')||(resp=='S')){
    //Se resp == S ou s - então repete o loop
    //Se resp == N ou n - então encerra o loop e apresenta o valor da compra
    cout << "Escolha uma opção do menu:";
    cin >> prodesc;
    cout << "O produto escolhido foi " << prod[prodesc] << " e o preço é: R$ " << vunit[prodesc]<<endl;

  //iniciará o estoque com 10 unidades de cada produto, se a qtd passar disto informar que o produto possui x de estoque
    cout << "Informe quantas unidades você deseja do produto: ";
    cin >> qtd;

    vt += vunit[prodesc]*qtd;

    cout << "\n" "Deseja mais algum produto. Informe 'S' caso sim, e 'N' caso não.: ";   
    cin >> resp; 
     }
              
     if(prodesc==1){
      qnt[1] = qnt[1]-qtd;
      }if(qnt[1]<0){
        cout<<"Desculpe. Não temos essa quantidade disponível em estoque "<<endl;
      }else{

    if(prodesc==2){
      qnt[2] = qnt[2]-qtd;
      }if(qnt[2]<0){
        cout<<"Desculpe. Não temos essa quantidade disponível em estoque "<<endl;
        }else{
  
    if(prodesc==3){
      qnt[3] = qnt[3]-qtd;
      }if(qnt[3]<0){
        cout<<"Desculpe. Não temos essa quantidade disponível em estoque "<<endl;
      }else{
  
    if(prodesc==4){
      qnt[4] = qnt[4]-qtd;
      }if(qnt[4]<0){
        cout<<"Desculpe. Não temos essa quantidade disponível em estoque "<<endl;
      }else{
 
    if(prodesc==5){
      qnt[5] = qnt[5]-qtd;
      }if(qnt[5]<0){
        cout<<"Desculpe. Não temos essa quantidade disponível em estoque "<<endl;
      }else{
 
    if(prodesc==6){
      qnt[6] = qnt[6]-qtd;
      }if(qnt[6]<0){
        cout<<"Desculpe. Não temos essa quantidade disponível em estoque "<<endl;
    }else{
 
    if(prodesc==7){
      qnt[7] = qnt[7]-qtd;
      }if(qnt[7]<0){
        cout<<"Desculpe. Não temos essa quantidade disponível em estoque "<<endl;
    }else{
 
    if(prodesc==8){
      qnt[8] = qnt[8]-qtd;
      }if(qnt[8]<0){
        cout<<"Desculpe. Não temos essa quantidade disponível em estoque "<<endl;
    }else{
	
    if(prodesc==9){
      qnt[9] = qnt[9]-qtd;
      }if(qnt[9]<0){
        cout<<"Desculpe. Não temos essa quantidade disponível em estoque "<<endl;
    }else{
 
    if(prodesc==10){
      qnt[10] = qnt[10]-qtd;
      }if(qnt[10]<0){
        cout<<"Desculpe. Não temos essa quantidade disponível em estoque "<<endl;
      }
    }
    }
        
    cout << "O valor da compra é: R$ " << vt << endl;
      	
    cout << "Insira o valor: ";
    cin >> valor;

    cout << "O valor inserido foi: R$ "<< valor << endl;
  
  if (valor == vt){
	cout << "\n" "Agradecemos a preferência por nossos produtos" << endl;
	cout <<  "\n" "Volte sempre" << endl;
	}

  if (valor > vt){
  troco = valor - vt; 
  cout << fixed;
  cout.precision(2); //limitar duas casas decimais
 	cout << "Aguarde seu troco de R$ "<< troco << endl;
	cout << "\n""Agradecemos a preferência por nossos produtos" << endl;
	cout << "\n""Volte sempre" "\n" << endl;
  }

  if (valor < vt){
  vdif = vt - valor;
  cout << "O valor inserido é menor que o valor da compra" << endl;
	cout << "Insira o valor de R$ " << vdif << " para liberação dos seus produtos"<<"\n";

  cout << "Insira o valor: ";
  cin >> valor2;
  
  vl_t_in = valor + valor2;
  cout << "O valor total inserido foi: R$ "<< vl_t_in << endl;
  }

  if (vl_t_in == vt){
	cout << "Agradecemos a preferência por nossos produtos" << endl;
	cout << "Volte sempre" << endl;
	}
    
  if (vl_t_in > vt){
  troco2 = vl_t_in - vt; 
 	cout << "Aguarde seu troco de R$ "<< troco2 << endl;
	cout << "Agradecemos a preferência por nossos produtos" << endl;
	cout << "Volte sempre" << endl;
  }

  fat += vt;

  }}}}}}}}}
    
  if (op==2){
  //versão adm  
  //Após rodar os dados da versão usuário é necessário informar para o adm produtos faltantes, listar o estoque do prod e qtd, listar o quanto foi faturado e qto tem a faturar.	
  //criar uma faturamento total = soma o valor de tudo o que foi vendido
  //criar uma váriavel onde possa informar a quantidade atual dos produtos após somar todas as vendas da opção 1	
  //quando o produto ficar menor que uma quantidade, reponha-o com mais 10 unidades do produto
  cout << "Valor de vendas até o momento: R$ " << fat << endl;

    if(qnt[1]<1){
     cout<<"Estoque baixo de Refrigerantes Sabores. Reposição de 10 unidades"<<endl;
     qnt[1] = qnt[1] + 10;
    }
    if(qnt[2]<1){
     cout<<"Estoque baixo de Salgadinhos Sabores. Reposição de 10 unidades"<<endl;
     qnt[2] = qnt[2] + 10;
     }
    if(qnt[3]<1){
     cout<<"Estoque baixo de Amendoim. Reposição de 10 unidades"<<endl;
     qnt[3] = qnt[3] + 10;
    }
    if(qnt[4]<1){
     cout<<"Estoque baixo de Energético. Reposição de 10 unidades"<<endl;
     qnt[4] = qnt[4] + 10;
    }
    if(qnt[5]<1){
     cout<<"Estoque baixo de Biotónico. Reposição de 10 unidades"<<endl;
     qnt[5] = qnt[5] + 10;
    }
    if(qnt[6]<1){
     cout<<"Estoque baixo de Água tônica. Reposição de 10 unidades"<<endl;
     qnt[6] = qnt[6] + 10;
    }
    if(qnt[7]<1){
     cout<<"Estoque baixo de Água mineral sem gás. Reposição de 10 unidades"<<endl;
     qnt[7] = qnt[7] + 10;
    }
    if(qnt[8]<1){
     cout<<"Estoque baixo de Água mineral com gás. Reposição de 10 unidades"<<endl;
     qnt[8] = qnt[8] + 10;
    }
    if(qnt[9]<1){
     cout<<"Estoque baixo de Bebida Láctea. Reposição de 10 unidades"<<endl;
     qnt[9] = qnt[9] + 10;
    }
    if(qnt[10]<1){
     cout<<"Estoque baixo de Chocolate sabores. Reposição de 10 unidades"<<endl;
     qnt[10] = qnt[10] + 10;}
     
  cout<<"Deseja consultar o estoque atual? Responda 'S' para sim e 'N' para Não: "<<endl;
  cin >> resp2;

  if(resp2=='n' || resp2=='N'){
  break;
  }
  
  if (resp2 == 's' || resp2 == 'S'){
   cout << " ---------------------- ESTOQUE ATUAL ------------------------- " << endl;
          cout << "\tCód" <<"  "<< "\tDescrição" <<"           "<< "Quantidade Disponível" << endl;
          cout << "\t1" << "   " << "Refrigerante sabores " <<" "<< "\t"<< qnt[1] << " unidades" << endl;
          cout << "\t2" << "   " << "Salgadinhos sabores " <<"  " << "\t" << qnt[2] << " unidades"<< endl;
          cout << "\t3" << "   " << "Amendoim " <<" 	          "<< "\t"<< qnt[3] << " unidades"<< endl;
          cout << "\t4" << "   " << "Energético " <<"           "<< "\t"<< qnt[4] << " unidades"<< endl;
          cout << "\t5" << "   " << "Biotónico " <<"            "<< "\t"<< qnt[5] << " unidades"<< endl;
          cout << "\t6" << "   " << "Água tônica " <<"          "<< "\t"<< qnt[6] << " unidades"<< endl;
          cout << "\t7" << "   " << "Água mineral sem gás " <<" "<< "\t"<< qnt[7] << " unidades"<< endl;
          cout << "\t8" << "   " << "Água mineral com gás " <<" "<< "\t"<< qnt[8] << " unidades"<< endl;
          cout << "\t9" << "   " << "Bebida láctea " <<"        "<< "\t"<< qnt[9] << " unidades"<< endl;
          cout << "\t10" << "  " << "Chocolates sabores" <<"   "<< "\t"<< qnt[10] << " unidades"<< endl;
          cout << "---------------------------------------------------------------" << endl;
  }

    cout<<"Deseja consultar qual o valor a faturar com o estoque atual? Responda 'S' para sim e 'N' para Não: "<<endl;
    cin >> resp2;

  if(resp2=='n' || resp2=='N'){
  break;
  }
  
  if (resp2 == 's' || resp2 == 'S'){
   cout << " ---------------------- FATURAMENTO FUTURO ------------------------- " << endl;
          cout << "\tCód" <<"  "<< "\tDescrição" <<"          "<< "Quant. Disponível" <<"  "<< "Fat. possível"<< endl;
          cout << "\t1" << "    " << "Refrigerante sabores " <<" "<< "\t"<< qnt[1] << " unidades" <<"        "<< "R$ " << qnt[1]*vunit[1] << endl;
          cout << "\t2" << "    " << "Salgadinhos sabores " <<"  " << "\t" << qnt[2] << " unidades"<<"        "<< "R$ " << qnt[2]*vunit[2] << endl;
          cout << "\t3" << "    " << "Amendoim " <<" 	          "<< "\t"<< qnt[3] << " unidades"<<"        "<< "R$ " << qnt[3]*vunit[3] << endl;
          cout << "\t4" << "    " << "Energético " <<"           "<< "\t"<< qnt[4] << " unidades"<<"        "<< "R$ " << qnt[4]*vunit[4] << endl;
          cout << "\t5" << "    " << "Biotónico " <<"            "<< "\t"<< qnt[5] << " unidades"<<"        "<< "R$ " << qnt[5]*vunit[5] << endl;
          cout << "\t6" << "    " << "Água tônica " <<"          "<< "\t"<< qnt[6] << " unidades"<<"        "<< "R$ " << qnt[6]*vunit[6] << endl;
          cout << "\t7" << "    " << "Água mineral sem gás " <<" "<< "\t"<< qnt[7] << " unidades"<<"        "<< "R$ " << qnt[7]*vunit[7] << endl;
          cout << "\t8" << "    " << "Água mineral com gás " <<" "<< "\t"<< qnt[8] << " unidades"<<"        "<< "R$ " << qnt[8]*vunit[8] << endl;
          cout << "\t9" << "    " << "Bebida láctea " <<"        "<< "\t"<< qnt[9] << " unidades"<<"        "<< "R$ " << qnt[9]*vunit[9] << endl;
          cout << "\t10" << "   " << "Chocolates sabores" <<"   "<< "\t"<< qnt[10] << " unidades"<<"        "<< "R$ " << qnt[10]*vunit[10] << endl;
          cout << "---------------------------------------------------------------" << endl;
  }
return 0;
  }}}
