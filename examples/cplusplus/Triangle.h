#include <math.h>

/**
 * @file Triangle.h
 * @brief Tinh chu vi va dien tich tam giac
 * @author thiminhnhut
 */
class Triangle {
  public:
    Triangle(float a, float b, float c);
    float perimeter();
    float area();

  private:
    float _a, _b, _c;
    bool _isTriangle();
};

/**
 * @brief Construct a new Triangle:: Triangle object
 * 
 * @param a Canh thu nhat cua tam giac
 * @param b Canh thu hai cua tam giac
 * @param c Canh thu ba cua tam giac
 */
Triangle::Triangle(float a, float b, float c) {
    _a = a;
    _b = b;
    _c = c;
}

/**
 * @brief 
 * 
 * @return true Cac canh tao thanh tam giac
 * @return false Cac canh khong tao thanh tam giac
 */
bool Triangle::_isTriangle() {
    if (_a > 0 && _b > 0 && _c > 0) {
        if (_a + _b > _c && _a + _c > _b && _b + _c > _a) {
            return true;
        } else {
            return false;
        }
    } else {
        return false;
    }
}

/**
 * @brief Tinh chu vi tam giac
 * 
 * @return float Chu vi tam giac
 */
float Triangle::perimeter() {
    if (_isTriangle()) {
        return _a + _b + _c;
    } else {
        return 0.0f;
    }
}

/**
 * @brief Tinh dien tich tam giac
 * 
 * @return float Dien tich tam giac
 */
float Triangle::area() {
    if (_isTriangle()) {
        float p = perimeter()/2.0f;
        return sqrt(p * (p - _a) * (p - _b) * (p - _c));
    } else {
        return 0.0f;
    }
}