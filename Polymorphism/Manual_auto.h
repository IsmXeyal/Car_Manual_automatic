#pragma once

class Manual : public Car {
private:
    int _numOfGears;
    bool _hasClutchPedal;
    bool _isSportsModel;
    int _maxSpeed;

public:
    Manual(string model, string vendor, Colors color, int year, int gears, bool clutchPedal, bool sportsModel, int speed)
        : Car(model, vendor, color, year)
    {
        SetGears(gears);
        SetClutchPedal(clutchPedal);
        SetSportsModel(sportsModel);
        SetSpeed(speed);
    }

    int GetNumOfGears() {
        return _numOfGears;
    }

    bool GetHasClutchPedal() {
        return _hasClutchPedal;
    }

    bool GetIsSportsModel() {
        return _isSportsModel;
    }

    int GetMaxSpeed() {
        return _maxSpeed;
    }

    void SetGears(int gears) {
        if (gears > 0) {
            this->_numOfGears = gears;
            return;
        }
        assert(!"Wrong data!");
    }

    void SetClutchPedal(bool clutchPedal) {
        this->_hasClutchPedal = clutchPedal;
    }

    void SetSportsModel(bool sportsModel) {
        this->_isSportsModel = sportsModel;
    }

    void SetSpeed(int speed) {
        if (speed > 0) {
            this->_maxSpeed = speed;
            return;
        }
        assert(!"Wrong data!");
    }

    void Show() override {
        cout << "\t~~~Manual~~~" << endl;
        Car::Show();
        cout << "Number of Gears: " << this->GetNumOfGears() << endl
            << "Has ClutchPedal: " << ((this->GetHasClutchPedal()) ? "Yes" : "No") << endl
            << "Has SportsModel: " << ((this->GetIsSportsModel()) ? "Yes" : "No") << endl
            << "Max Speed: " << this->GetMaxSpeed() << endl;
    }
};

class Automatic : public Car {
private:
    bool _hasPaddleShifters;
    bool _hasEcoMode;
    bool _hasCollisionWarning;

public:
    Automatic(string model, string vendor, Colors color, int year, bool paddleShifters, bool ecoMode, bool collisionWarning)
        : Car(model, vendor, color, year)
    {
        SetPaddleShifters(paddleShifters);
        SetEcoMode(ecoMode);
        SetCollisionWarning(collisionWarning);
    }

    bool GetHasPaddleShifters() {
        return _hasPaddleShifters;
    }

    bool GetHasEcoMode() {
        return _hasEcoMode;
    }

    bool GetHasCollisionWarning() {
        return _hasCollisionWarning;
    }

    void SetPaddleShifters(bool paddleShifters) {
        this->_hasPaddleShifters = paddleShifters;
    }

    void SetEcoMode(bool ecoMode) {
        this->_hasEcoMode = ecoMode;
    }

    void SetCollisionWarning(bool collisionWarning) {
        this->_hasCollisionWarning = collisionWarning;
    }

    void Show() override {
        cout << "\t~~~Automatic~~~" << endl;
        Car::Show();
        cout << "Has PaddleShifters: " << ((this->GetHasPaddleShifters()) ? "Yes" : "No") << endl
            << "Has EcoMode: " << ((this->GetHasEcoMode()) ? "Yes" : "No") << endl
            << "Has CollisionWarning: " << ((this->GetHasCollisionWarning()) ? "Yes" : "No") << endl;
    }
};