#ifndef __RECTANGULO_HPP__
#define __RECTANGULO_HPP__
class Rectangulo
{
private:
    int base {};
    int altura {};
    int area {};
    
public:
    void setBase(int base);
    int getBase() const;
    void setAltura(int altura);
    int getAltura() const;
    int Area();
    void Redimensionar(const int base, const int altura);
    int MayorArea(const Rectangulo &r);
};

#endif /* __RECTANGULO_HPP__ */