class FormaGeometrica {
public:
    virtual ~FormaGeometrica() = default;
    virtual double calcularArea() const = 0;
};

class Triangulo : public FormaGeometrica {
   private:
    int base;
    int altura;
public:
    Triangulo(int base, int altura) : base(base), altura(altura) {}

    double calcularArea() const override {
        return (base * altura) / 2.0;
    }
};

class Quadrado : public FormaGeometrica {
private:
    int lado;
public:
    Quadrado(int lado) : lado(lado) {}

    double calcularArea() const override {
        return lado * lado;
    }
};

class Retangulo : public FormaGeometrica {
private:
    int lado1;
    int lado2;
public:
    Retangulo(int lado1, int lado2) : lado1(lado1), lado2(lado2) {}

    double calcularArea() const override {
        return lado1 * lado2;
    }
};

class Circulo : public FormaGeometrica {
private:
    double raio;
    static constexpr double PI = 3.14159265358979323846;
public:
    Circulo(double raio) : raio(raio) {}

    double calcularArea() const override {
        return PI * raio * raio;
    }
};

class FabricaFormas {
public:
    static unique_ptr<FormaGeometrica> criarForma(int tipo) {
        switch (tipo) {
            case 1:
                return make_unique<Triangulo>(lado1, lado2);
            case 2:
                return make_unique<Quadrado>(lado1);
            case 3:
                return make_unique<Retangulo>(lado1, lado2));
            case 4:
                return make_unique<Circulo>(lado1);
            default:
                return nullptr;
        }
    }
};