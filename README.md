# tabuada_por_loop
A ideia do projeto é a partir de dois números inseridos pelo usuário o primeiro será submetido a uma mutiplicação até o segundo número, o resultado será impresso na tela mostrando cada um dos números da tabuada.
As variávels são declaradas como tab e limite e devem ser colocadas no loop, sendo tab o numero que será multiplicado e limite o limite de vezes que o loop será executado.

Por se tratar de uma impressão, vamos criar em uma função void para esse processo recebendo duas variáveis, tab e limite.
Onde o tab será o primeiro número e o limite o segundo número (e incluso na multiplicação).
Nele haverá um cout para imprimir o resultado da tabuada em um sistema de loopagem para garantir que a quantidade que o user pedir seja realizado.

# Código do loop presente no void
    for (int i = 0; i<=limite; i++){
        cout << tab << " x " << i << " = " << tab*i << endl; 
    }

E por fim fazemos o chamado do void, passando os dois números que o user colocar.

# Resultado do main
    int main(){
        int tab, limite;
        cout << "Digite o número para multiplicar: ";
        cin >> tab;
        cout << "Digite o limite da tabuada: ";
        cin >> limite;
        imprimer_tabuada(tab, limite);
        return 0;
    }

# Exemplo de saida

    Digite o número para multiplicar: 2
    Digite o limite da tabuada: 10
    Tabuada do 2 ate o 10:
    2 x 0 = 0
    2 x 1 = 2    
    2 x 2 = 4
    2 x 3 = 6
    2 x 4 = 8
    2 x 5 = 10
    2 x 6 = 12
    2 x 7 = 14    
    2 x 8 = 16
    2 x 9 = 18
    2 x 10 = 20

# English version

# tabuada_por_loop

The project idea is that from two numbers entered by the user, the first will be subjected to multiplication up to the second number. The result will be printed on the screen showing each of the multiplication table numbers. The variables are declared as `tab` and `limite` and should be placed in the loop, with `tab` being the number to be multiplied and `limite` the limit of times the loop will be executed.

Since it involves printing, we will create a void function for this process receiving two variables, `tab` and `limite`. Here, `tab` will be the first number and `limite` the second number (and included in the multiplication). There will be a `cout` to print the result of the multiplication table in a looping system to ensure the quantity requested by the user is performed.

# Loop code present in the void function


    for (int i = 0; i <= limite; i++) {
    cout << tab << " x " << i << " = " << tab * i << endl;
    }

Finally, we call the void function, passing the two numbers that the user inputs.

# Result of main
    int main(){
        int tab, limite;
        cout << "Digite o número para multiplicar: ";
        cin >> tab;
        cout << "Digite o limite da tabuada: ";
        cin >> limite;
        imprimer_tabuada(tab, limite);
        return 0;
    }

# Example output

    Digite o número para multiplicar: 2
    Digite o limite da tabuada: 10
    Tabuada do 2 ate o 10:
    2 x 0 = 0
    2 x 1 = 2    
    2 x 2 = 4
    2 x 3 = 6
    2 x 4 = 8
    2 x 5 = 10
    2 x 6 = 12
    2 x 7 = 14    
    2 x 8 = 16
    2 x 9 = 18
    2 x 10 = 20