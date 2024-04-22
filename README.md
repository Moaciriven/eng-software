# eng-software
## Princípios SOLID no Projeto

Este projeto busca seguir os princípios SOLID, uma série de diretrizes de design de software que visam criar código mais legível, flexível e fácil de manter. Abaixo estão algumas observações sobre como esses princípios são aplicados neste código:

## Princípio da Responsabilidade Única (SRP - Single Responsibility Principle)

A classe CalculadoraArea tem uma única responsabilidade, que é calcular a área de uma forma geométrica.

## Princípio Aberto/Fechado (OCP - Open/Closed Principle)

O código não está completamente fechado para modificação, pois se novas formas geométricas forem adicionadas, como por exemplo um pentágono, seria necessário modificar o código para incluir um novo case no switch do main(). Uma abordagem melhor seria usar polimorfismo e injeção de dependência para permitir que novas formas geométricas sejam adicionadas sem modificar o código existente.

- Correções
  Para corrigir a violação do OCP, podemos introduzir polimorfismo e injeção de dependência para permitir a adição de novas formas geométricas sem modificar o código existente. Vamos criar uma   classe abstrata FormaGeometrica e usar um padrão de fábrica para criar instâncias de formas geométricas específicas.

## Princípio da Substituição de Liskov (LSP - Liskov Substitution Principle)

As classes Triangulo, Quadrado, Retangulo, e Circulo substituem a classe base AreaCalculavel sem alterar o comportamento esperado.

## Princípio da Segregação de Interface (ISP - Interface Segregation Principle)

As interfaces (AreaCalculavel) são segregadas para que cada classe implemente apenas os métodos necessários para sua funcionalidade específica.

## Princípio da Inversão de Dependência (DIP - Dependency Inversion Principle)

Este princípio não está totalmente seguido, pois a classe CalculadoraArea está fortemente acoplada às implementações concretas (Triangulo, Quadrado, Retangulo, Circulo) ao invés de depender de abstrações. Uma abordagem melhor seria receber uma interface genérica como parâmetro, permitindo que diferentes implementações sejam usadas sem modificar CalculadoraArea.

- Correções
  Para seguir o DIP, a classe CalculadoraArea deve depender de abstrações em vez de implementações concretas. Podemos passar um ponteiro ou uma referência para FormaGeometrica como parâmetro      para o método calcularArea()

Portanto, o código segue parcialmente os princípios SOLID, mas há espaço para melhorias, especialmente em relação ao princípio da abertura/fechamento e da inversão de dependência.
