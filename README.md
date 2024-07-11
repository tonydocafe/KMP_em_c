# KMP (Knuth-Morris-Pratt)

Esse código implementa o algoritmo de busca de padrões em strings conhecido como "Algoritmo de Knuth-Morris-Pratt" (KMP).

### inicia_prox

O KMP começa construindo um array auxiliar chamado proximo, onde proximo[j] indica o comprimento do maior prefixo próprio de padrao[0...j] que também é sufixo desse mesmo segmento. 
Isso permite determinar quanto o índice j pode ser retrocedido em caso de falha durante a busca.

### ALG1

Esta função realiza a busca do padrão dentro dos dados fornecidos utilizando o array proximo gerado pela função inicia_prox. 
Com o array proximo preparado, a busca do padrão em um texto (dados) ocorre sem retroceder além do necessário. 
Sempre que uma correspondência falha, o algoritmo utiliza informações do array proximo para determinar o próximo índice a partir do qual deve retomar a busca no padrão.

- A busca é feita de maneira eficiente, sem precisar retroceder no texto mais do que o necessário.
O algoritmo KMP é escolhido pela sua eficiência em casos onde a busca precisa ser feita em textos extensos, minimizando o número de comparações necessárias ao evitar retrocessos desnecessários.


- Pré-processamento do Padrão (inicia_prox):

O pré-processamento do padrão envolve a construção do array proximo, que é feito em tempo linear em relação ao tamanho do padrão, O(M), onde M é o comprimento do padrão.

- Busca no Texto (ALG1):

A busca do padrão no texto é feita em tempo linear em relação ao tamanho do texto, O(N), onde N é o comprimento do texto.
A cada comparação, o algoritmo pode retroceder no padrão usando informações contidas no array proximo. Cada retrocesso é feito em tempo constante O(1).
Portanto, a complexidade total do algoritmo KMP é O(M + N), onde M é o comprimento do padrão e N é o comprimento do texto.
 Essa complexidade é ótima para muitas aplicações práticas, pois permite uma busca eficiente mesmo em textos grandes, mantendo o tempo de execução linear em relação ao tamanho total de entrada.







