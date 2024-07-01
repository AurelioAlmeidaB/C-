#include <iostream>
#include <locale>
#include <cstring>

using namespace std;

int main(){

{
	char time;
  

    setlocale(LC_ALL, "Portuguese"); 
    
    

        {
        	string nome;
        	  cout << " ----------------------------------------- " << endl;
		cout << "\nAlo , aqui é o craque neto junto com edilson small evil e Souza , qual seu nome Zé ruela  ?\n ";
        getline(cin, nome);
        cout << "\nMuito obrigado pela sua participação, " << nome << ", é uma participação rapida e espero que goste \n";
          cout << " ----------------------------------------- " << endl;
    
        }
}

  
   
{
    char time;
  cout << " ----------------------------------------- " << endl;
    cout << " \nqual time vc torce??\n " << endl;
     cout << "digite 1 se torce para o Corinthians  " << endl;
      cout << "digite 2 se torce para o Sao Paulo " << endl;
         cout << "digite 3 se torce para o Palmeiras  " << endl;
          cout << "digite 4 se torce para o Santos  " << endl;
            cout << " ----------------------------------------- " << endl;
    cin >> time;

      switch (time) {
        case '1':
            cout << "QUE FASE TA MEU CURINTIA , MAIOR TIME DO PAIS , CASCÃO TOCA O HINO DO CURINTIA \n" << endl;
           
            break;
            
        case '2':
            cout << "MEU MAIOR FREGUES , TIME BAMBINO FRACO\n" << endl;
          
            break;
            
        case '3':
            cout << "EU NÃO TENHO NADA CONTRA O PARMEIRAS, SO TORÇO CONTRA O PARMEIRA. EU NÃO ODEIO O PARMEIRAS , SO QUERO QUE ACABE O PARMEIRAS , EU ODEIO O PARMEIRA \n" << endl;
          
       
            break;
        default:
            cout << "UMA VERGONHA A GESTÃO DO SANTOS , OQUE FIZERAM COM O SANTOS" << endl;
    }
   
}
{
	        char craque;
	          cout << " ----------------------------------------- " << endl;
        cout << "\nVocê eu CRAQUE NETO um verdadeiro craque ?\n  ";
        cout << "\nS para sim você, acha que sou um craque\n  ";
        cout << "\nN para não você , não acha que sou um craque\n  ";
          cout << " ----------------------------------------- " << endl;
        cin >> craque;
        if (craque == 's' || craque == 'S')
            cout << "\nSOU IDOLO DO CURINTIA , DO GUARANI E UNS DOS MAIORES DE TODOS OS TEMPOS . SOU UM VERDADEIRO CRAQUE\n" << endl;
        else if (craque == 'n' || craque == 'N')
            cout << "\nÉ SUA OPINIÃO RESPEITO , MAS SOU CRAQUE , JOGOU AONDE?? FEZ GOL EM QUEM ?? É IDOLO AONDE ??\n" << endl;
    
}
 
 {
 	char cassio;
 	  cout << " ----------------------------------------- " << endl;
 	  cout << "Você gostou da decisão do António Oliveira de deixar o Cassio no banco?  ";
 	    cout << "\nS para sim você, gostou da alteração \n  ";
        cout << "\nN para não você , não gostou da alteração\n  ";
          cout << " ----------------------------------------- " << endl;
        cin >> cassio;
        if (cassio == 's' || cassio == 'S')
            cout << "TA VELHO O CASSIO VAI ME DESCULPAR , É UM GRANDE GOLEIRO ALIAS COMO TRATOU BEM MEU FILHO NA FLORIDA CAMP , COMO TRATA BEM AS CRIANÇAS\n " << endl;
        else if (cassio == 'n' || cassio== 'N')
            cout << "CASSIO É IDOLO DO CURINTIA , ELE NÃO PODE FICAR NO BANCO , CONCORDO COM VOCÊ\n" << endl;
     
 }
 {
 	char litle;
 	  cout << " ----------------------------------------- " << endl;
 	    cout << "\nVocê acha que o Edilson Capetinha jogou mais que o neymar?\n ";
    cout << "\ns para sim\n" << endl;
    cout << "\nn para não\n" << endl;
      cout << " ----------------------------------------- " << endl;
    cin >> litle;

     if (litle == 's' || litle == 'S')
            cout << "\nPô Neymar! Tem tuíte, tem feicebuk, tem blog, tem joguin, tem todas essas modernidades pra se distrair e fica fazendo filho?! Vai ver site porno filho! Tem uns bons que o Ulisses me mostrou que eu te passou depois! Só pedir. Xis-Peladas com bêérre, como é, Ulisses?\n " << endl;
        else if (litle == 'n' || litle== 'N')
            cout << "\nEdilson Small Evil é craque!\n" << endl;
   

 }
 
 {
 		char b;
 		  cout << " ----------------------------------------- " << endl;
 	    cout << "O brasil tem chance de ganhar a copa america?\n ";
    cout << "\ns para sim\n" << endl;
    cout << "\nn para não\n" << endl;
      cout << " ----------------------------------------- " << endl;
    cin >> b;

     if (b == 's' || b == 'S')
            cout << "\nTEM QUE RESPEITAR OS PENTAS CAMPEÕES MUNDIAIS , TIME VELOZ QUE FINALIZA BEM É DIFICIL PARA O BRASIL , TA PARECENDO ATE MEU CURINTIA , E QUE FASE TA MEU CURINTIA!\n " << endl;
        else if (b == 'n' || b== 'N')
            cout << "\nCONCORDO, TIME PESADO DO BRASIL , FALTA TALENTO ,TIME NÃO É DIGNO DAS 5 ESTRELAS NO PEITO , PARECE ATE O VASCO DA GAMA!\n" << endl;
            
 }
 
 {
 	char s;
 	  cout << " ----------------------------------------- " << endl;
 	cout<< "penultima pergunta do programa de hoje"<< endl;
 	    cout << "Você acha possivel o São Paulo ser rebaixado?\n ";
    cout << "\ns para sim\n" << endl;
    cout << "\nn para não\n" << endl;
      cout << " ----------------------------------------- " << endl;
    cin >> s;

     if (s == 's' || s == 'S')
            cout << "\nOS BAMBIS ESTAO PASSANDO MAL !\n " << endl;
        else if (s == 'n' || s== 'N')
            cout << "\nCOM A MUDANÇA DE TREINADOR TEM GRANDES CHANCES DE NÃO SER REBAIXADO!\n" << endl;
 	
 }
 
 {
 	 char resposta;
    
    do {
    	  cout << " ----------------------------------------- " << endl;
        cout << "\nvocê gostou de participar do programa do donas da bola do craque neto??\n ";
          cout << " ----------------------------------------- " << endl;
        cin >> resposta;
    } while(resposta != 's' && resposta != 'S');
    
    if(resposta == 's' || resposta == 'S') {
        cout << "\nObrigado pela participação Zé Ruela, foi um prazer ter sua presença hoje e nos vemos na proxima\n  ";
    } else {
        cout << "Resposta invalida ";
 }
}
}
//professor deixando claro q sou são paulino e peguei muitas das frases dos programas dele , espero que goste !! e desculpa pelo CAPS ele so fala gritando kkkkkkkkkkkkkkkk


        
		
