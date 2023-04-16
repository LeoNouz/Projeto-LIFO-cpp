# Projeto de LIFO em C++

## Descrição
Este projeto em C++ consiste em um programa que cria e gerencia uma estrutura de dados do tipo LIFO. Todas as sub-rotinas da classe que gerencia a LIFO foram desenvolvidos para a disciplina Estrutura de Dados do curso Desenvolvimento de Software Multiplataforma da Faculdade de Tecnologia Zona Sul e têm como objetivo demonstrar todas as operações essenciais desse tipo de algoritmo de fila simples.

## Conteúdo "include\lifo.h"
- Contrutor: `LifoHolder(size_t tamanho)`
    - Descrição: Inicializa a variável "mSize" e os ponteiros/atributos da pilha "mNome", "mIdade", "mSexo", "mSalario", "mNovoSalario" com o parâmetro "tamanho".

- Destrutor: `~LifoHolder()`
    - Descrição: Destrói todos os atributos da pilha após deixar o escopo onde a classe foi instanciada.

- Controle: `void controlarPilha()`
    - Descrição: Menu que serve para controlar as sub-rotinas que realizam as operações essenciais da pilha.

- Verificar: `bool pilhaCheia()` e `bool pilhaVazia()`
    - Descrição: Verificam respectivamente se a pilha está cheia ou vazia retornando um valor bool.

- getters: `string getNome()`, `int getIdade()` etc.
    - Descrição: Atribui valores digitados pelo usuário para cada atributo da pilha e retorna esses valores.

- setter: `double setNovoSalario(double *salario)`
    - Descrição: Atribui um aumento de 10% sobre o salário digitado anteriormente pelo usuário.

- push: `void push()`
    - Descrição: Empilha todos os atributos digitados pelo usuário na mesma linha, formando um registro.

- pop: `void pop()`
    - Descrição: Desempilha todos os atributos digitados pelo usuário atribuindo valores nulos a eles, removendo um registro.

- Imprimir: `void print()`
    - Descrição: Imprime todos os registros na ordem em que foram criados pelo usuário, começando do topo até a base.

## Conteúdo "main.cpp"
- setter: `void setTamanhoPilha(int &TamanhoPilha)`
    - Descrição: Atribui o valor digitado pelo usuário ao tamanho da pilha e retorna esse valor.

## Como usar
Para compilar e executar o programa, é necessário ter um compilador de C++ instalado em sua máquina, para instalar é só seguir os seguintes passos.
    
- 1: Instale a IDE Visual Studio Code. <a href="https://code.visualstudio.com/download">Site oficial</a>.

- 2: Instale a extensão de C/C++ para o Visual Studio Code. Você pode instalá-la pesquisando por 'c++' em Extensões, veja (Ctrl+Shift+X).

- 3: Obtenha a última versão do Mingw-w64 utilizando MSYS2, que fornece compilações nativas atualizadas do GCC, Mingw-w64, e outras ferramentas e bibliotecas úteis do C++. Você pode baixar o instalador mais recente da página MSYS2 ou usar este link para o instalador. <a href=https://github.com/msys2/msys2-installer/releases/download/2022-06-03/msys2-x86_64-20220603.exe>Link oficial</a>.

- 4: Siga as instruções de <strong>instalação</strong> no site MSYS2 para instalar o Mingw-w64. Tome cuidado para executar cada menu Iniciar e comando pacman necessários. <a href="https://www.msys2.org/">Site oficial</a>.

- 5: Instale o conjunto de ferramentas Mingw-w64 (<strong>pacman -S --needed base-devel mingw-w64-x86_64-toolchain</strong>). Execute o comando <strong>pacman</strong> em um terminal MSYS2. Aceite <strong>default</strong> para instalar todos os membros do grupo no conjunto de ferramentas.

- 6: Adicione o caminho para sua pasta <strong>bin</strong> Mingw-w64 à variável de ambiente Windows <strong>PATH</strong> usando as seguintes etapas:
    - Na barra de pesquisa do Windows, digite 'configurações' para abrir as configurações do Windows.
    - Pesquise por <strong>Editar as variáveis de ambiente para sua conta</strong>.
    - Escolha a variável <strong>Path</strong> em suas <strong>Variáveis ​​de usuário</strong> e selecione <strong>Editar...</strong>.
    - Selecione <strong>Novo</strong> e adicione o caminho da pasta de destino Mingw-w64 ao caminho do sistema. O caminho exato depende de qual versão do Mingw-w64 você instalou e onde o instalou. Se você usou as configurações acima para instalar o Mingw-w64, adicione isso ao caminho: <strong>C:\msys64\mingw64\bin</strong>.
    - Selecione <strong>OK</strong> para salvar o PATH atualizado. Você precisará reabrir qualquer janela de console para que o novo local PATH esteja disponível.

- 7: Verifique a instalação do MinGW abrindo um novo prompt de comando e digitando: 
    - gcc --version
    - g++ --version
    - gdb --version

- 8: Abra a pasta do projeto no VS Code e pressione o botão play no canto superior direito do editor.

- 9: Escolha <strong>C/C++: g++.exe build and active file</strong> na lista de compiladores detectados em seu sistema.

- 10: Você só será solicitado a escolher um compilador na primeira vez que executar <strong>main.cpp</strong>. Este compilador será definido como o compilador "default" no arquivo <strong>.vscode/tasks.json</strong>.

## Contribuições
Contribuições são sempre bem-vindas! Caso tenha encontrado algum problema ou tenha alguma sugestão de melhoria, sinta-se à vontade para abrir uma issue ou enviar um pull request.

## Licença
Este projeto é distribuído sob a licença MIT. Para mais informações, consulte o arquivo LICENSE.