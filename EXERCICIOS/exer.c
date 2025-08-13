=============================
QUESTÃO 1 - TIPOS DE DADOS
=============================
Classificar cada valor como Inteiro, Real, Caractere, Cadeia ou Lógico.
Se couber em mais de um tipo, citar todos.

- 456 → Inteiro
- Falso → Lógico
- "f" → Caractere
- "V" → Caractere
- "0,87" → Cadeia
- 0 → Inteiro, Real
- "0" → Caractere, Cadeia
- -9,12 → Real
- "-900" → Cadeia
- "casa 8" → Cadeia
- "cinco" → Cadeia
- Verdadeiro → Lógico
- 1,56 → Real
- -56 → Inteiro, Real
- 34 → Inteiro, Real
- 45,8976 → Real
- -456 → Inteiro, Real
- 687 → Inteiro, Real
- -687 → Inteiro, Real
- -99,8 → Real
- 0,01 → Real
- 1000 → Inteiro, Real

-----------------------------

=============================
QUESTÃO 2 - NOMES INVÁLIDOS
=============================
Assinale com X e justifique.

(X) 21BRASIL → Não pode começar com número.
( ) ENDEREÇO → Válido (se acentos forem aceitos, mas em algumas linguagens não são).
(X) FONÊ$COM → Não pode ter caractere especial.
(X) NAMEUSER → Válido, se não houver restrição de idioma.
(X) NOME USUÁRIO → Espaço não permitido.
(X) NOME'USUÁRIO → Apóstrofo não permitido.
(X) END^A-6 → Símbolos inválidos.
( ) CIDADE3 → Válido.
(X) #GABEC → Não pode começar com caractere especial.
(X) REAL → Reservada (em várias linguagens).
(X) REAL$ → Símbolo especial.
(X) SOBRE NOME → Espaço não permitido.

-----------------------------

=============================
QUESTÃO 3 - OPERAÇÕES
=============================
A=1, B=-2, C=4, D=8

a) R = A + B - C  
   Ordem: soma/subtração da esquerda para direita  
   R = 1 + (-2) - 4 = -1 - 4 = -5

b) R = A + B / C ^ 2  
   ^ → potência primeiro, depois divisão, depois soma  
   C ^ 2 = 16  
   B / 16 = -2 / 16 = -0,125  
   R = 1 + (-0,125) = 0,875

c) R = A + B / C  
   B / C = -2 / 4 = -0,5  
   R = 1 + (-0,5) = 0,5

d) R = A + B + C * D  
   C * D = 32  
   R = 1 + (-2) + 32 = -1 + 32 = 31

e) R = A + D + B ^ 2 + C * 3  
   B ^ 2 = 4  
   C * 3 = 12  
   R = 1 + 8 + 4 + 12 = 25

f) R = A * B / C * D  
   Multiplica e divide da esquerda para a direita  
   A * B = -2  
   (-2) / 4 = -0,5  
   (-0,5) * 8 = -4

-----------------------------

=============================
QUESTÃO 4 - SAÍDAS DO CÓDIGO
=============================

1)  
X = 22  
Y = 11  
escreva(Y) → 11  
Y = X → Y=22  
escreva(X) → 22

Saída: 11 22

2)  
X = 1  
Y = X + 1 → Y=2  
Y = Y + 1 → Y=3  
X = Y → X=3  
escreva(X) → 3

Saída: 3

3)  
X = (8/4) + (4/8)  
8/4 = 2  
4/8 = 0,5  
X = 2,5

Saída: 2,5

4)  
Y = 8/44 + 8  
8/44 ≈ 0,1818  
Y ≈ 8,1818

Saída: 8,1818

5)  
Z = 112 / (64+12)  
64+12 = 76  
112/76 ≈ 1,4737

Saída: 1,4737

=============================
QUESTÃO 5
=============================
DETERMINE O ESTADO LÓGICO DAS EXPRESSÕES INDICANDO SE SÃO VERDADEIRAS OU FALSAS.  
Considere os seguintes valores:  
X = 1; A = 3; B = -5; C = -8; D = 7

a)  NAO(X > 3)                     → Verdadeiro
b)  (X < 1) E NAO(B > D)           → Falso
c)  NAO(D < 0) E (C > 5)           → Falso
d)  NAO(X > 3) OU (C < 7)          → Verdadeiro
e)  NAO((D < 0) OU (C < 5))        → Falso
f)  (A > B) OU (C < B)             → Verdadeiro
g)  (X >= 2)                       → Falso
h)  (X < 1) E (B > D)              → Falso
i)  NAO(D > 3) OU NAO(B < 7)       → Verdadeiro
j)  (A > B) OU NAO(C < B)          → Verdadeiro
