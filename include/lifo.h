#include <iostream>
#include <cstdlib>
using namespace std;

class LifoHolder
{
public:
    LifoHolder(size_t tamanho)
        : mSize(tamanho)
        , mNome(new string[tamanho])
        , mIdade(new int[tamanho])
        , mSexo(new string[tamanho])
        , mSalario(new double[tamanho])
        , mNovoSalario(new double[tamanho])
        , mTamanhoPilha(-1)
    {}

    ~LifoHolder()
    {
        delete [] mNome;
        delete [] mIdade;
        delete [] mSexo;
        delete [] mSalario;
        delete [] mNovoSalario;
    }

    void controlarPilha()
    {
        int tecla = 0;
        while (tecla != 4)
        {
            system("cls");
            cout << "* Menu *\n[1]-Push\n[2]-Pop\n[3]-Print\n[4]-Encerrar";
            cout << "\n===============================";
            cout << "\nItem: ";
            cin >> tecla;
            switch(tecla)
            {
                case 1: push(); break;
                case 2: pop(); break;
                case 3: print(); break;
                case 4: exit(0); break;
                default:
                    system("cls");
                    cout << "* Erro de funcionamento *";
                    cout << "\n===============================" <<endl;
                    system("pause");
                    break;
            }
        }
    }
private:
    size_t mSize;
    string* mNome;
    int* mIdade;
    string* mSexo;
    double* mSalario;
    double* mNovoSalario;
    int mTamanhoPilha;

    bool pilhaCheia()
    {
        if (mTamanhoPilha == mSize-1)
            return true;
        else
            return false;
    }

    bool pilhaVazia()
    {
        if (mTamanhoPilha == -1)
            return true;
        else
            return false;
    }

    string getNome()
    {
        string nome;
        cout << "Nome: ";
        cin.ignore();
        getline(cin, nome);
        return nome;
    }

    int getIdade()
    {
        int idade;
        cout << "Idade: ";
        cin >> idade;
        return idade;
    }

    string getSexo()
    {
        string sexo;
        cout << "Sexo: ";
        cin.ignore();
        getline(cin, sexo);
        return sexo;
    }

    double getSalario()
    {
        double salario;
        cout << "Salário: ";
        cin >> salario;
        return salario;
    }

    double setNovoSalario(double *salario)
    {
        return (*salario * 1.10);
    }

    void push()
    {
        if (pilhaCheia() == true)
        {
            system("cls");
            cout << "A pilha está cheia!";
            cout << "\n===============================" << endl;
            system("pause");
        }
        else
        {
            system("cls");
            cout << "Inserir um registro";
            cout << "\n===============================" << endl;
            mTamanhoPilha++;
            string nome = getNome();
            int idade = getIdade();
            string sexo = getSexo();
            double salario = getSalario();
            double novoSalario = setNovoSalario(&salario);

            mNome[mTamanhoPilha] = nome;
            mIdade[mTamanhoPilha] = idade;
            mSexo[mTamanhoPilha] = sexo;
            mSalario[mTamanhoPilha] = salario;
            mNovoSalario[mTamanhoPilha] = novoSalario;
        }
    }

    void pop()
    {
        if (pilhaVazia() == true)
        {
            system("cls");
            cout << "A pilha está vazia!";
            cout << "\n===============================" << endl;
            system("pause");
        }
        else
        {
            int escolha;
            system("cls");
            cout << "Deseja remover o registro?" << endl; 
            cout << "[" << mNome[mTamanhoPilha] << " | " << mIdade[mTamanhoPilha] << " | ";
            cout << mSexo[mTamanhoPilha] << " | " << mSalario[mTamanhoPilha] << " | ";
            cout << mNovoSalario[mTamanhoPilha] << "]" << endl;
            cout << "\n[1]-Remover\n[2]-Voltar\nEscolha: ";
            cout << "\n===============================" << endl;
            cin >> escolha;
            switch(escolha)
            {
                case 1: 
                    mNome[mTamanhoPilha] = '\0';
                    mIdade[mTamanhoPilha] = '\0';
                    mSexo[mTamanhoPilha] = '\0';
                    mSalario[mTamanhoPilha] = '\0';
                    mNovoSalario[mTamanhoPilha] = '\0';
                    mTamanhoPilha--;
                    break;
                case 2:
                    controlarPilha();
                    break;
            } 
        }
    }

    void print()
    {
        if (pilhaVazia() == true)
        {
            system("cls");
            cout << "A pilha está vazia!";
            cout << "\n===============================" << endl;
            system("pause");
        }
        else
        {
            system("cls");
            for (int i=mTamanhoPilha; i>=0; i--)
            {
                cout << "[" << mNome[i] << " | " << mIdade[i] << " | ";
                cout << mSexo[i] << " | " << mSalario[i] << " | ";
                cout << mNovoSalario[i] << "]" << endl;
            }
            system("pause");
        }
    }
};