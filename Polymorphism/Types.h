#pragma once

class BMW : public Manual {
private:
    string _series;
    bool _hasMPerformancePackage;

public:
    BMW(string model, string vendor, Colors color, int year, int gears, bool clutchPedal, bool sportsModel, int speed, string series, bool mPerformance)
        : Manual(model, vendor, color, year, gears, clutchPedal, sportsModel, speed)
    {
        SetSeries(series);
        SetHasMPerformancePackage(mPerformance);
    }

    string GetSeries() {
        return _series;
    }

    bool GetHasMPerformancePackage() {
        return _hasMPerformancePackage;
    }

    void SetSeries(string series) {
        if (series.length() >= 0) {
            this->_series = series;
            return;
        }
        assert(!"Wrong data!");
    }

    void SetHasMPerformancePackage(bool mPerformance) {
        this->_hasMPerformancePackage = mPerformance;
    }

    void Show() override {
        Manual::Show();
        cout << "Series: " << this->GetSeries() << endl
            << "Has MPerformance Package: " << ((this->GetHasMPerformancePackage()) ? "Yes" : "No") << endl;
    }

};

class Toyota : public Automatic {
private:
    string _trimLevel;
    bool _hasHybridOption;
    int _numOfAirbags;

public:
    Toyota(string model, string vendor, Colors color, int year, bool paddleShifters, bool ecoMode, bool collisionWarning, string trim, bool hybrid, int airbags)
        : Automatic(model, vendor, color, year, paddleShifters, ecoMode, collisionWarning)
    {
        SetTrimLevel(trim);
        SetHasHybridOption(hybrid);
        SetNumOfAirbags(airbags);
    }

    string GetTrimLevel() {
        return _trimLevel;
    }

    bool GetHasHybridOption() {
        return _hasHybridOption;
    }

    int GetNumOfAirbags() {
        return _numOfAirbags;
    }

    void SetTrimLevel(string trim) {
        if (trim.length() > 3) {
            this->_trimLevel = trim;
            return;
        }
        assert(!"Wrong data!");
    }

    void SetHasHybridOption(bool hybrid) {
        this->_hasHybridOption = hybrid;
    }

    void SetNumOfAirbags(int airbags) {
        if (airbags >= 1) {
            this->_numOfAirbags = airbags;
            return;
        }
        assert(!"Wrong data!");
    }

    void Show() override {
        Automatic::Show();
        cout << "TrimLevel: " << this->GetTrimLevel() << endl
            << "Has Hybrid Option: " << ((this->GetHasHybridOption()) ? "Yes" : "No") << endl
            << "Number of Airbags: " << this->GetNumOfAirbags() << endl;
    }
};