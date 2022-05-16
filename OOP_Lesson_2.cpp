#include <iostream>
#include <string>
using namespace std;
class student {
private:
	int age;
	string name;
	string surname;
public:
	student() {//Создание конструктора по умолчанию без передачи каких либо параметров
		cout << "Обьект был создан! " << endl;
	}

	student(int age, string name) {//перегрузка конструктора//принимает параметры возраст и имя
		if (age > 5)
			this->age = age;//которые хряняться в классе..приват
		else
			this->age = 5; 
		this->name = name;
	}

	student(int age, string name,string surname) {//перегрузка конструктора, но уже с тремя значениями
		this->age = age;
		this->name = name;
		this->surname = surname;
	}
	void Printall() {
		cout << this->age << " " << this->name << " " << this->surname;
	}
	~student() {//вызов деструктора
		cout << "Обьект был удален!" << endl;
	}//деструктор создается при окончательном завершении работы с обьектами
};
int main()
{
	setlocale(LC_ALL, "Russian");
	student Sasha();//сработает первый конструктор
	student Alex(23, "Alex");//второй - 2 параметра
	student Sen(23, "Sen", "Surn");//три параметра - третий

//деструкторы вызываются при уничтожении обьекта в отличии от кнструкторов 
}

