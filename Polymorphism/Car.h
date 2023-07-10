#pragma once

enum Colors { None, Black, Green, Red, White, Blue };

class Car {
protected:
	string __model = "";
	string __vendor = "";
	Colors __color;
	int __year = 0;
	int __id = 0;
	static int static_id;

public:
	Car();
	Car(string model, string vendor, Colors color, int year);

	// Get Methods
	inline string GetModel();
	inline string GetVendor();
	Colors GetColor();
	inline int GetYear();
	inline int GetId();
	inline int GetStaticId();

	// Set Methods
	void SetModel(string model);
	void SetVendor(string vendor);
	void SetColor(Colors color);
	void SetYear(int year);

	string GetColorName();

	virtual void Show();
};

int Car::static_id = 1;

Car::Car() {
	this->__id = static_id++;
}

// Set Methods
void Car::SetModel(string model) {
	if (model.length() >= 3) {
		this->__model = model;
		return;
	}
	assert(!"Wrong data!");
}

void Car::SetVendor(string vendor) {
	if (vendor.length() > 3) {
		this->__vendor = vendor;
		return;
	}
	assert(!"Wrong data!");
}

void Car::SetColor(Colors color) {
	this->__color = color;
}

void Car::SetYear(int year) {
	if (year > 1990) {
		this->__year = year;
		return;
	}
	assert(!"Wrong data!");
}

Car::Car(string model, string vendor, Colors color, int year) {
	SetModel(model);
	SetVendor(vendor);
	SetColor(color);
	SetYear(year);
	this->__id = static_id++;
}

inline string Car::GetModel() {
	return this->__model;
}

inline string Car::GetVendor() {
	return this->__vendor;
}

Colors Car::GetColor() {
	return __color;
}

inline int Car::GetYear() {
	return this->__year;
}

inline int Car::GetId() {
	return this->__id;
}

inline int Car::GetStaticId() {
	return static_id;
}

string Car::GetColorName() {
	switch (this->__color)
	{
	case None:		return "None";
	case Black:		return "Black";
	case Green:		return "Green";
	case Red:		return "Red";
	case White:		return "White";
	case Blue:		return "Blue";
	}
}

void Car::Show() {
	cout << "Id: " << this->GetId() << endl
		<< "Model: " << this->GetModel() << endl
		<< "Vendor: " << this->GetVendor() << endl
		<< "Color: " << this->GetColorName() << endl
		<< "Year: " << this->GetYear() << endl;
}