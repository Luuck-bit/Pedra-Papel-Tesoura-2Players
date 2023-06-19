#include <iostream>


using namespace std;

int main(void)
{
    string player1;
    string player2;
    int jogadap1;
    int jogadap2;
    char SN;
    int pont1 = 0;
    int pont2 = 0;

    cout << "Olá, bem vindo ao Jogo. Pedra, Papel e Tesoura." << endl;
    cout << "Aqui você irá jogar com um amigo seu. quem fizer 60 pontos primeiro, vence." << endl;
    cout << "Defina os Players: " << endl;

    do
    {
        cout << "Quem será o Player 1?: " << endl;
        cin >> player1;
        cout << "Perfeito, agora o Player 2 :"; 
        cin >> player2;
        cout << "Os nomes estão corretos? S/N" << endl;
        cin >> SN;
        SN = toupper(SN); //toupper converte o caractere digitado para maiúsculo
    } while (SN != 'S'); //!= diferente de, anota no caderno

    cout << "Pois bem, vamos começar" << endl;

    do
    {
    cout << "Turno " << player1 << ":" << endl;
    cout << "1 - Pedra" << endl;
    cout << "2 - Papel" << endl;
    cout << "3 - Tesoura" << endl;
    cin >> jogadap1;
    cout << "Turno "<< player2 << ":" << endl;
    cout << "1 - Pedra" << endl;
    cout << "2 - Papel" << endl;
    cout << "3 - Tesoura" << endl;
    cin >> jogadap2;

    
    


        if (jogadap1 == jogadap2) // aqui se a ambos escolherem a mesma opção ele vai exibir o cout e atribuir +5 pontos para cada um.
        {
            cout << "Singelo empate, +5 para cada.";
            pont1 += 5;
            pont2 += 5;
        } // 1 - Pedra, 2 - Papel, 3 - Tesoura;
        else if (jogadap1 == 1 && jogadap2 == 2) // a estrutura precisa validar todo tipo de jogada, e comparar os valores informados pelo usuário 1 e 2. fora as atribuições de pontos.
        {
            cout << player2 << " Ganhou, +10 pontos";
            pont2 += 10;
        }
        else if (jogadap1 == 1 && jogadap2 == 3)
        {
            cout << player1 << " Ganhou, +10 Pontos";
            pont1 += 10;
        }
        else if (jogadap1 == 2 && jogadap2 == 1) // a lógica "&&" funciona, se for verdadeiro que os players jogaram aquele número(jogada) faça isto.
        {
            cout << player1 << " Ganhou, +10 Pontos";
            pont1 += 10;
        }
        else if (jogadap1 == 2 && jogadap2 == 3)
        {
            cout << player2 << " Ganhou, +10 Pontos";
            pont2 += 10;
        }
        else if (jogadap1 == 3 && jogadap2 == 1)
        {
            cout << player2 << " Ganhou, +10 Pontos";
            pont2 += 10;
        }
        else if (jogadap1 == 3 && jogadap2 == 2)
        {
            cout << player1 << " Ganhou, +10 Pontos";
            pont1 += 10;
        }
        //////////////////////////////////////////////////////////////////
        else if (jogadap1 == 2 && jogadap2 == 1)
        {
            cout << player1 << " Ganhou, +10 pontos";
            pont1 += 10;
        }
        else if (jogadap1 == 3 && jogadap2 == 1)
        {
            cout << player2 << " Ganhou, +10 Pontos";
            pont2 += 10;
        }
        else if (jogadap1 == 1 && jogadap2 == 2)
        {
            cout << player2 << " Ganhou, +10 Pontos";
            pont2 += 10;
        }
        else if (jogadap1 == 3 && jogadap2 == 2)
        {
            cout << player1 << " Ganhou, +10 Pontos";
            pont1 += 10;
        }
        else if (jogadap1 == 1 && jogadap2 == 3)
        {
            cout << player1 << " Ganhou, +10 Pontos";
            pont1 += 10;
        }
        else
        {
            cout << player1 << " Ganhou, +10 Pontos";
            pont1 += 10;
        }

    } while (pont1 < 70 || pont2 < 70); // "||" se pelo menos uma for verdade, encerra o programa. // <= ao 70 pontos, segue o jogo.

    

    return 0;

    


    

}

