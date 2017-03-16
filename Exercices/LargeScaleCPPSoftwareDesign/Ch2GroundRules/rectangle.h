#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle
{

    Point d_lowerLeft;  // Yet another representation
    int d_width;  // these data members are private
    int d_height;
    int d_area; // Store this redundantly to improve performance
public:
    // CREATORS
    Rectangle(const Point& lowerLeft, const Point& upperRight);
    Rectangle(const Rectangle& rect);
    ~Rectangle();

    // MANIPULATORS
    Rectangle& operator=(Rectangle& rect);
    void moveBy(const Point&& delta);

    // ...

    // ACCESSORS
    int area() const;

};

inline
void Rectangle::moveBy(const Point &delta)
{
    d_lowerLeft += delta;
}
#endif // RECTANGLE_H
