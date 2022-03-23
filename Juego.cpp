#include <iostream>
#include <stdlib.h>
#include <time.h> //para numero random
#include <string.h>
#include <stdio.h>


using namespace std;

class juego{
    public: 

    void jugadores(int n, string jugador[]){
        cout<<"Ingrese los nombres de los jugadores "<<endl;
        for (int i=0;i<n;i++){
            cout<<"Jugador "<<i+1<<endl;
            cin>>jugador[i];
            //cout<<jugador[i]<<endl;
        }
    }

    int randomp(int n){
        int x;
        x=rand()%((n)-0)+0;
        return x;
    }
    /*int randomchoice(){
        int x;
        x=rand()%(2-1)+1;
        return x;
    }*/
    //void eliminacion(){

    //}

    void etapa1(int n,int auxp1,int auxp2, string jugador[]){
        int rando;
        rando = rand()%(6-1)+1;
        //opciones de la historia 
        if(rando=1){
            cout<<" Sucedio un accidente, un lobo se comio a "<<jugador[auxp1]<<" y queda descalificado "<<endl;
            n=n-1;

        }
        if(rando=2){
            cout<<"Oh no, "<<jugador[auxp2]<<" Rompió la pierna de "<<jugador[auxp1]<<" y queda descalificado "<<endl;
            n=n-1;

        }
        if(rando=3){
            cout<<"Mientras el jugador "<<jugador[auxp1]<<" comía a medio dia, se atraganta y queda descalificado "<<endl;
        	n=n-1;

		}
        if(rando=4){
            cout<<"Los jugadores "<<jugador[auxp2]<<" y "<<jugador[auxp1]<<" se encuentran en una cabaña, tras batallar con palitos el jugador "<<jugador[auxp2]<<" pierde y es descalificado"<<endl;
        	n=n-1;

		}
        if(rando=5){
            cout<<"Una flecha perdida impacta a "<<jugador[auxp1]<<" , queda descalificado "<<endl;
        	n=n-1;

		}
        if(rando=6){	//descalifico 2 jugadores
            cout<<"Los jugadores "<<jugador[auxp2]<<" y "<<jugador[auxp1]<<" iban juntos y ambos se cayeron por un barranco, quedan descalificados "<<endl;
        	n=n-1;

		}
    }
    
    void etapa2(int auxp1,int auxp2, string jugador[]){
		int rando;
        rando = rand()%(6-1)+1;
        //opciones de la historia 
        if(rando=1){
            cout<<"Empieza la limpieza y el "<<jugador[auxp1]<<" estaba fuera del area del juego, queda descalificado "<<endl;
        }
        if(rando=2){
            cout<<"El jugador "<<jugador[auxp2]<<" roba las pertenencias de "<<jugador[auxp1]<<" y queda sin proviciones para sobrevivir una noche helada,"<<jugador[auxp1]<<" queda descalificado "<<endl;
        }
        if(rando=3){
            cout<<"El jugador "<<jugador[auxp1]<<" se encuentra con una banda de aliados y se les une; pero luego los traiciona, por lo que lo ahogan y queda descalificado"<<endl;
        }
        if(rando=4){
            cout<<"La noche se aproxima y "<<jugador[auxp2]<<" decide dormir debajo de un molle, baja una araña venenosa, lo pica y es descalificado"<<endl;
        }
        if(rando=5){
            cout<<jugador[auxp1]<<" estas creando un veneno en forma de spray, al hacer la prueba disparas mal y te lo hechas encima por lo que quedas descalificado "<<endl;
        }
        if(rando=6){	//descalifico 2 jugadores
            cout<<"Cuando salio el sol "<<jugador[auxp2]<<" y "<<jugador[auxp1]<<" decidieron buscar moras de desayuno, comparten bayas venenosas y ambos quedan descalificados"<<endl;
        }
    }

    void etapa3(int auxp1,int auxp2, string jugador[]){
		int rando;
        rando = rand()%(6-1)+1;
        //opciones de la historia 
        if(rando=1){
            cout<<"La zona de juego se reduce cada vez mas y "<<jugador[auxp1]<<" se queda dormido fuera de ella, el gas venenoso lo descalifica"<<endl;
        }
        if(rando=2){
            cout<<"Oh no, "<<jugador[auxp2]<<" disparo a "<<jugador[auxp1]<<" en el corazon usando un arma secreta, "<<jugador[auxp1]<<" queda descalificado"<<endl;
        }
        if(rando=3){
            cout<<"En la cima de una montaña "<<jugador[auxp1]<<" vigilaba el perímetro, pero por estar en puesto de campero queda descalificado "<<endl;
        }
        if(rando=4){
            cout<<"Los organizadores entregan un botiquin a "<<jugador[auxp2]<<" pero "<<jugador[auxp1]<<" esta herido, por lo que descalifica a "<<jugador[auxp2]<<" para quedarse con el botiquin"<<endl;
        }
        if(rando=5){
            cout<<"Una vivora muerde a "<<jugador[auxp1]<<" por su toxicidad, queda descalificado "<<endl;
        }
        if(rando=6){
            cout<<"El jugador "<<jugador[auxp2]<<" trata de salvar al jugador "<<jugador[auxp1]<<" de la muerte "<<jugador[auxp2]<<" es descalificado"<<endl;
        }
    }

    void etapa4(int auxp1,int auxp2, string jugador[]){
		int rando;
        rando = rand()%(3-1)+1;
        //opciones de la historia 
        if(rando=1){ //good ending
            cout<<" Hora del gran duelo, la zona resstringida es de a penas unos metros, "<<jugador[auxp1]<<" posee una lanza hecha de piedra\n ; "<<jugador[auxp2]<<" sólo tiene un mazo de madera\n tras mucho esfuerzo físico y pruebras de aptitud física\n el jugador "<<jugador[auxp1]<<"clava su lanza en el corazon del contrincante\n el jugador"<<jugador[auxp1]<<" es el ganador"<<endl;
        }
        if(rando=2){ //normal ending
            cout<<"Exactamente cuando la hora marca las 6 de la mañana "<<jugador[auxp2]<<" y "<<jugador[auxp1]<<" se preparan para la pelea final\n Luego de horas de analisis y tacticas el jugador "<<jugador[auxp1]<<" se prepara para el ataque sorpresa\n pero los calculos fallan y termina suicidandose\n El jugador "<<jugador[auxp1]<<" GANA"<<endl;
        }
        if(rando=3){ //bad ending
            cout<<"El momento de la verdad, así como un duelo de ninjas los jugadores "<<jugador[auxp1]<<" y "<<jugador[auxp2]<<" buscan salvar sus vidas, pero el cielo se vuelve gris\n, una figura brillante y rosada aparece en medio y los mata a los dos\n Nadie gana"<<endl;
        }
    }


    void dias(int n,int auxp1,int auxp2, string jugador[]){
        int ndias=10;
        for(int i=1;i<=ndias;i++){
            if(i<3){//7 a 10
            	cout<<endl;
                cout<<"\t ETAPA 1"<<endl;
                etapa1(n,auxp1,auxp2,jugador);
                cout<<endl;
               
            }

            if(i>3 && i<6){//5 a 7
            	cout<<endl;
                cout<<"\t ETAPA 2"<<endl;
                etapa2(auxp1,auxp2,jugador);
                cout<<endl;
            }

            if(i>6 && i<9){//3 a 4
            	cout<<endl;
                cout<<"\t ETAPA 3"<<endl;
                etapa3(auxp1,auxp2,jugador);
                cout<<endl;
            }

            if(i=10){//2
            	cout<<endl;
                cout<<"\t ETAPA FINAL"<<endl;
                etapa4(auxp1,auxp2,jugador);
                cout<<endl;
                
            }
        }
    }
};


int main(){
    int n;  
    cout<<"Ingrese el numero de jugadores: "<<endl;
    cin>>n;
    
    cout<<"Sean bienvenidos jugadores, el juego consta de 4 etapas"<<endl;
    cout<<"¿Listos para probar su suerte?"<<endl;
    cout<<"Sólo puede sobrevivir uno, ese será el ganador"<<endl;
    cout<<"A probar suerte, ¿Llegaras a la etapa final?"<<endl;
    cout<<"ADMITE HASTA 10 JUGADORES y minimo 2"<<endl;
    cout<<"Segun el numero de jugadores se iran saltando el numero de etapas"<<endl;
    cout<<endl;
    cout<<endl;
    
    int auxp1,auxp2;
    string jugador[n]={};   //vector que admite varios valores y no tiene numero definido
    juego game;
    game.jugadores(n,jugador);
    while(n>=1){
    	srand(time(NULL));
    			//do while para que no repita jugador
    	do{	
    	    auxp1=game.randomp(n);
    	    auxp2=game.randomp(n);
    	}while(auxp1==auxp2);
    	game.dias(n,auxp1,auxp2,jugador);
    	n--;
    }
    return 0;
}

