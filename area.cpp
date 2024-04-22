#include <iostream>
#include <cmath>
using namespace std;

class AreaCalculavel {
public:
    virtual double calcularArea() const = 0;
};

class Triangulo : public AreaCalculavel {
private:
    int base;
    int altura;
public:
    Triangulo(int base, int altura) : base(base), altura(altura) {}

    double calcularArea() const override {
        return (base * altura) / 2.0;
    }
};

class Quadrado : public AreaCalculavel {
private:
    int lado;
public:
    Quadrado(int lado) : lado(lado) {}

    double calcularArea() const override {
        return lado * lado;
    }
};

class Retangulo : public AreaCalculavel {
private:
    int lado1;
    int lado2;
public:
    Retangulo(int lado1, int lado2) : lado1(lado1), lado2(lado2) {}

    double calcularArea() const override {
        return lado1 * lado2;
    }
};

class Circulo : public AreaCalculavel {
private:
    double raio;
    static constexpr double PI = 3.14159265358979323846;
public:
    Circulo(double raio) : raio(raio) {}

    double calcularArea() const override {
        return PI * raio * raio;
    }
};

class CalculadoraArea {

    
public:
    void calcularArea(const AreaCalculavel& forma) const {
        cout << "Area: " << forma.calcularArea() << endl;
    }
};

int main() {
    int tipo;
    cout << "Escolha 1 para Triângulo, 2 para Quadrado, 3 para Retângulo, ou 4 para Círculo: ";
    cin >> tipo;

    CalculadoraArea calculadora;

    switch (tipo) {
        case 1: {
            int base, altura;
            cout << "Digite a base do Triângulo: ";
            cin >> base;
            cout << "Digite a altura do Triângulo: ";
            cin >> altura;
            Triangulo triangulo(base, altura);
            calculadora.calcularArea(triangulo);
            break;
        }
        case 2: {
            int lado;
            cout << "Digite o lado do Quadrado: ";
            cin >> lado;
            Quadrado quadrado(lado);
            calculadora.calcularArea(quadrado);
            break;
        }
        case 3: {
            int lado1, lado2;
            cout << "Digite o lado 1 do Retângulo: ";
            cin >> lado1;
            cout << "Digite o lado 2 do Retângulo: ";
            cin >> lado2;
            Retangulo retangulo(lado1, lado2);
            calculadora.calcularArea(retangulo);
            break;
        }
        case 4: {
            double raio;
            cout << "Digite o raio do Círculo: ";
            cin >> raio;
            Circulo circulo(raio);
            calculadora.calcularArea(circulo);
            break;
        }
        default:
            cout << "Opção inválida." << endl;
            break;
    }

    return 0;
}
