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
		cout << "\nAlo , aqui � o craque neto junto com edilson small evil e Souza , qual seu nome Z� ruela  ?\n ";
        getline(cin, nome);
        cout << "\nMuito obrigado pela sua participa��o, " << nome << ", � uma participa��o rapida e espero que goste \n";
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
            cout << "QUE FASE TA MEU CURINTIA , MAIOR TIME DO PAIS , CASC�O TOCA O HINO DO CURINTIA \n" << endl;
           
            break;
            
        case '2':
            cout << "MEU MAIOR FREGUES , TIME BAMBINO FRACO\n" << endl;
          
            break;
            
        case '3':
            cout << "EU N�O TENHO NADA CONTRA O PARMEIRAS, SO TOR�O CONTRA O PARMEIRA. EU N�O ODEIO O PARMEIRAS , SO QUERO QUE ACABE O PARMEIRAS , EU ODEIO O PARMEIRA \n" << endl;
          
       
            break;
        default:
            cout << "UMA VERGONHA A GEST�O DO SANTOS , OQUE FIZERAM COM O SANTOS" << endl;
    }
   
}
{
	        char craque;
	          cout << " ----------------------------------------- " << endl;
        cout << "\nVoc� eu CRAQUE NETO um verdadeiro craque ?\n  ";
        cout << "\nS para sim voc�, acha que sou um craque\n  ";
        cout << "\nN para n�o voc� , n�o acha que sou um craque\n  ";
          cout << " ----------------------------------------- " << endl;
        cin >> craque;
        if (craque == 's' || craque == 'S')
            cout << "\nSOU IDOLO DO CURINTIA , DO GUARANI E UNS DOS MAIORES DE TODOS OS TEMPOS . SOU UM VERDADEIRO CRAQUE\n" << endl;
        else if (craque == 'n' || craque == 'N')
            cout << "\n� SUA OPINI�O RESPEITO , MAS SOU CRAQUE , JOGOU AONDE?? FEZ GOL EM QUEM ?? � IDOLO AONDE ??\n" << endl;
    
}
 
 {
 	char cassio;
 	  cout << " ----------------------------------------- " << endl;
 	  cout << "Voc� gostou da decis�o do Ant�nio Oliveira de deixar o Cassio no banco?  ";
 	    cout << "\nS para sim voc�, gostou da altera��o \n  ";
        cout << "\nN para n�o voc� , n�o gostou da altera��o\n  ";
          cout << " ----------------------------------------- " << endl;
        cin >> cassio;
        if (cassio == 's' || cassio == 'S')
            cout << "TA VELHO O CASSIO VAI ME DESCULPAR , � UM GRANDE GOLEIRO ALIAS COMO TRATOU BEM MEU FILHO NA FLORIDA CAMP , COMO TRATA BEM AS CRIAN�AS\n " << endl;
        else if (cassio == 'n' || cassio== 'N')
            cout << "CASSIO � IDOLO DO CURINTIA , ELE N�O PODE FICAR NO BANCO , CONCORDO COM VOC�\n" << endl;
     
 }
 {
 	char litle;
 	  cout << " ----------------------------------------- " << endl;
 	    cout << "\nVoc� acha que o Edilson Capetinha jogou mais que o neymar?\n ";
    cout << "\ns para sim\n" << endl;
    cout << "\nn para n�o\n" << endl;
      cout << " ----------------------------------------- " << endl;
    cin >> litle;

     if (litle == 's' || litle == 'S')
            cout << "\nP� Neymar! Tem tu�te, tem feicebuk, tem blog, tem joguin, tem todas essas modernidades pra se distrair e fica fazendo filho?! Vai ver site porno filho! Tem uns bons que o Ulisses me mostrou que eu te passou depois! S� pedir. Xis-Peladas com b��rre, como �, Ulisses?\n " << endl;
        else if (litle == 'n' || litle== 'N')
            cout << "\nEdilson Small Evil � craque!\n" << endl;
   

 }
 
 {
 		char b;
 		  cout << " ----------------------------------------- " << endl;
 	    cout << "O brasil tem chance de ganhar a copa america?\n ";
    cout << "\ns para sim\n" << endl;
    cout << "\nn para n�o\n" << endl;
      cout << " ----------------------------------------- " << endl;
    cin >> b;

     if (b == 's' || b == 'S')
            cout << "\nTEM QUE RESPEITAR OS PENTAS CAMPE�ES MUNDIAIS , TIME VELOZ QUE FINALIZA BEM � DIFICIL PARA O BRASIL , TA PARECENDO ATE MEU CURINTIA , E QUE FASE TA MEU CURINTIA!\n " << endl;
        else if (b == 'n' || b== 'N')
            cout << "\nCONCORDO, TIME PESADO DO BRASIL , FALTA TALENTO ,TIME N�O � DIGNO DAS 5 ESTRELAS NO PEITO , PARECE ATE O VASCO DA GAMA!\n" << endl;
            
 }
 
 {
 	char s;
 	  cout << " ----------------------------------------- " << endl;
 	cout<< "penultima pergunta do programa de hoje"<< endl;
 	    cout << "Voc� acha possivel o S�o Paulo ser rebaixado?\n ";
    cout << "\ns para sim\n" << endl;
    cout << "\nn para n�o\n" << endl;
      cout << " ----------------------------------------- " << endl;
    cin >> s;

     if (s == 's' || s == 'S')
            cout << "\nOS BAMBIS ESTAO PASSANDO MAL !\n " << endl;
        else if (s == 'n' || s== 'N')
            cout << "\nCOM A MUDAN�A DE TREINADOR TEM GRANDES CHANCES DE N�O SER REBAIXADO!\n" << endl;
 	
 }
 
 {
 	 char resposta;
    
    do {
    	  cout << " ----------------------------------------- " << endl;
        cout << "\nvoc� gostou de participar do programa do donas da bola do craque neto??\n ";
          cout << " ----------------------------------------- " << endl;
        cin >> resposta;
    } while(resposta != 's' && resposta != 'S');
    
    if(resposta == 's' || resposta == 'S') {
        cout << "\nObrigado pela participa��o Z� Ruela, foi um prazer ter sua presen�a hoje e nos vemos na proxima\n  ";
    } else {
        cout << "Resposta invalida ";
 }
}
}
//professor deixando claro q sou s�o paulino e peguei muitas das frases dos programas dele , espero que goste !! e desculpa pelo CAPS ele so fala gritando kkkkkkkkkkkkkkkk


        
		
