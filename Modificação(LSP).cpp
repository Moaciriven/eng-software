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

class TrianguloEstranho : public Triangulo {
public:
    TrianguloEstranho(int base, int altura) : Triangulo(base, altura) {}

    double calcularArea() const override {
        return base + altura;
    }
};