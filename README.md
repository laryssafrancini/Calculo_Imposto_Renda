# 🧾 Calculadora de IRPF em C

Bem-vindo(a) ao **Calculadora de Imposto de Renda Pessoa Física (IRPF)** em linguagem **C**!  
Este projeto é perfeito para quem quer **aprender lógica de programação**, **estruturas condicionais** e **funções** aplicadas a um exemplo real de finanças pessoais. 💰

---

## 🚀 Funcionalidades

- Calcula o **imposto de renda** com base na renda anual do contribuinte.
- Aplica **faixas de renda**, **alíquotas** e **deduções** fictícias para cada faixa.
- Garante que o imposto nunca seja negativo.
- Inclui **exemplos de teste** para validar o cálculo.
- Tela limpa a cada execução para melhorar a experiência do usuário.

---

## 💡 Como funciona

O programa é dividido em duas partes principais:

1. **Função `calcularIRPF()`**  
   - Recebe a **renda anual** como parâmetro.  
   - Aplica as regras de **faixas, alíquotas e deduções**:  
     | Faixa de Renda (R$)        | Alíquota | Dedução  |
     |----------------------------|----------|----------|
     | Até 50.000                 | 10%      | 1.000    |
     | 50.001 até 100.000         | 20%      | 2.500    |
     | Acima de 100.000           | 30%      | 5.000    |
   - Retorna o **valor do imposto devido**.

2. **Programa principal (`main`)**  
   - Pede ao usuário para digitar a renda anual.  
   - Chama a função `calcularIRPF()` e exibe o resultado.  
   - Mostra **exemplos fixos** para facilitar a compreensão.  
   - Limpa a tela no início para manter o terminal organizado.

---

