#ifndef CAR_H
#define CAR_H


class Car
{
    // ...
public:
    // CREATORS
    Car(int cost = 0);
    Car(const Car& car );
    ~Car();

    // MANIPULATION
    Car& operator=(const Car& car);
    void addFuel(double numberOfGallons);
    void drive(double deltaGasPedal);
    void turn(double angleInDegree);

    // ACCESSORS
    double getFuel() const;
    double getRPMs() const;
    double getSpeed() const;
};

#endif // CAR_H
