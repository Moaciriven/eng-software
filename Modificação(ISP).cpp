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

    void imprimirDetalhes() const { 
        cout << "Triângulo com base " << base << " e altura " << altura << endl;
    }
};