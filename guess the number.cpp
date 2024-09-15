#include <iostream>

int validarEntrada();
void adivinaNumero();


using namespace std;

int main()
{
    cout<<"1. Jugar a adivinar el numero"<<endl;
    cout<<"2. Salir"<<endl;
    int opcionUsuario = validarEntrada();
    
    switch(opcionUsuario){
        case 1: adivinaNumero();
        break;
        case 2: return 0;
        break;
    }
   
    
}

void adivinaNumero(){
    srand(time(0));
    int numeroDeIntentos;
    cout<<"Digite un numero"<<endl;
    numeroDeIntentos = validarEntrada();
    

       cout<<"Tiene "<<numeroDeIntentos<<" intentos "<<endl;
       
       int numeroAleatorio = rand() % 100;
       
        while (numeroDeIntentos > 0){
            
            cout<<"Digite un numero entre 0 y 100"<<endl;
            
            int numeroUsuario = validarEntrada();
            
                if(numeroUsuario<numeroAleatorio){
                   cout<<"El numero "<<numeroUsuario<<" es menor que el numero secreto"<<endl;
                   cout<<numeroAleatorio;
    
                 } else if(numeroUsuario>numeroAleatorio){
                     cout<<"El numero "<<numeroUsuario<<" es mayor que el numero secreto"<<endl;
    
                 } else {
               cout<<"Felicidades adivino el numero secreto:  "<<numeroUsuario<<""<<endl;\
               break;
                
                }
           
                numeroDeIntentos--;
                if(numeroDeIntentos == 0){
                    cout<<"No lo lograste, suerte para la proxima"<<endl;
                }
            
        }
            cout<<"1. Jugar de nuevo"<<endl;
            cout<<"2. Ir al menu"<<endl;
            
            int opcionUsuario = validarEntrada();
              switch(opcionUsuario){
                case 1: adivinaNumero();
                break; 
                case 2: main();
                break;
            }
  
}

int validarEntrada(){

    while(true){
        int numero;
        cin>>numero;
            if(cin.fail()) {
                
                cin.clear();
                cin.ignore(10000, '\n');
                cout<<"Entrada invalida digite otro numero"<<endl;
    
            } else {
                
                return numero;
            }
        
    }
    
}
