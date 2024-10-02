#include <iostream>
#include <sstream>
using namespace std;

struct Camera
{
	int pixel;
	float size;
};
struct Phone
{
public:
	string color;
	string from;
	string brand;
	float length;
	float width;
	int number_cameras;
	Camera camera;
	
	void start() {
		cout << "Phone is starting..." << endl;
	}
};

struct  Student
{
private:
	string _name;
	string _surname;
	int _age;
	int _id;
	float _avg_mark;
	float _avg_attendance;
	string _gender;
	string _email;
	string _phone;

	string _get_object_as_string() const
	{
		stringstream ss;
		ss << "Student object <" << (void**)this << ">";
		return ss.str();
	}
public:
	Student() // Constructor
	{
		cout << "Constructor is called" << _get_object_as_string() << endl;
	}



	//Setters
	void set_name(string name) {_name = name;}
	void set_surname(string surname) { _surname = surname; }
	void set_gender(string gender) {_gender = gender;}
	void set_email(string email) { _email = email; }
	void set_phone(string phone) { _phone = phone; }

	void set_age(int age) { _age = age; }
	void set_id(int id) { _id = id; }
	void set_avg_mark(float avg_mark) { _avg_mark = avg_mark; }
	void set_avg_attendance(float avg_attendance) { _avg_attendance = avg_attendance; }

	//Getters
	string get_name() { return _name; }
	string get_surname() { return _surname; }
	string get_gender() { return _gender; }
	string get_email() { return _email; }
	string get_phone() { return _phone; }

	int get_age() { return _age; }
	int get_id() { return _id; }
	float get_avg_mark() { return _avg_mark; }
	float get_avg_attendance() { return _avg_attendance; }

	void abaut() {
		cout << "Name: " << _name << endl;
		cout << "Surname: " << _surname << endl;
		cout << "Age: " << _age << endl;
		cout << "ID: " << _id << endl;
		cout << "Average mark: " << _avg_mark << endl;
		cout << "Average attendance: " << _avg_attendance << endl;
	}

	~Student() // Destructor
	{
		cout << "Destructor is called" << _get_object_as_string() << endl;
	}
};


int main() {
	Camera camera;
	camera.pixel = 12;
	camera.size = 2.0;

	Phone phone;
	phone.color = "blue";
	phone.from = "taiwan";
	phone.brand = "Samsung";
	phone.length = 11.0;
	phone.width = 5.0;
	phone.number_cameras = 3;
	phone.camera = camera;
	

	cout << "Color: " << phone.color << endl;
	cout << "From: " << phone.from << endl;
	cout << "Brand: " << phone.brand << endl;
	cout << "Length: " << phone.length << " cm" << endl;
	cout << "Width: " << phone.width << " mm" << endl;
	cout << "Number of cameras: " << phone.number_cameras << endl;
	cout << "Camera pixel: " << phone.camera.pixel << endl;
	cout << "Camera size: " << phone.camera.size << " inch" << endl << endl << endl;

	phone.start();

	

	Student* student = new Student();


	delete student;

	return 0;
}
