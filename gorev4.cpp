#include <iostream>
#include <string>

struct province{
	std::string name;
	std::string* domain;
};
struct country {
	std::string name;
	province* capital;
};

int main(){
	province sehir;
	country ulke;
	province capital;
	sehir.name = "�stanbul";
	ulke.name = "T�rkiye";
	capital.name = "Ankara";
	sehir.domain = &ulke.name;
	ulke.capital = &capital;

	std::cout <<sehir.name<<" ilinin bulundu�u "<< *sehir.domain <<" �lkesinin ba�kenti "<< ulke.capital->name;
}
