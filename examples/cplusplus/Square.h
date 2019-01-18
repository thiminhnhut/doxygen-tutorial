/**
 * @file Square.h
 * @brief Tinh chu vi va dien tich hinh vuong
 * @author thiminhnhut
 */
class Square {
    public:
        Square(float a);
        float perimeter();
        float area();
    private:
        float _a;
        bool _isSquare();
};

/**
 * @brief Construct a new Square:: Square object
 * 
 * @param a Canh cua hinh vuong
 */
Square::Square(float a) {
    _a = a;
}

/**
 * @brief Tinh chu vi hinh vuong
 * 
 * @return float Chu vi hinh vuong
 */
float Square::perimeter() {
    if (_isSquare()) {
        return 4*_a;
    } else {
        return 0.0f;
    }
}

/**
 * @brief Tinh dien tich hinh vuong
 * 
 * @return float Chu vi hinh vuong
 */
float Square::area() {
    if (_isSquare()) {
        return _a*_a;
    } else {
        return 0.0f;
    }
}

/**
 * @brief Kiem tra co phai la canh cua hinh vuong khong
 * 
 * @return true La canh cua hinh vuong
 * @return false Khong la canh cua hinh vuong
 */
bool Square::_isSquare() {
    return _a > 0.0f;
}