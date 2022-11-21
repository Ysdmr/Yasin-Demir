#include <iostream>

void yuzlerB(int value){// Sayýnýn yüzler basamaðýný harflerle yazdýr
	switch(value)
	{
		case 1:
			std::cout<<"yüz ";
			break;
		case 2:
			std::cout<<"iki yüz ";
			break;
		case 3:
			std::cout<<"üç yüz ";
			break;
		case 4:
			std::cout<<"dört yüz ";
			break;
		case 5:
			std::cout<<"beþ yüz ";
			break;
		case 6:
			std::cout<<"altý yüz ";
			break;
		case 7:
			std::cout<<"yedi yüz ";
			break;
		case 8:
			std::cout<<"sekiz yüz ";
			break;
		case 9:
			std::cout<<"dokuz yüz ";
			break;
		default:
			std::cout<<"";
			break;
	}
}

void onlarB(int value){// Sayýnýn onlar basamaðýný yazdýr 
	switch(value)
	{
		case 1:
			std::cout<<"on ";
			break;
		case 2:
			std::cout<<"yirmi ";
			break;
		case 3:
			std::cout<<"otuz ";
			break;
		case 4:
			std::cout<<"kýrk ";
			break;
		case 5:
			std::cout<<"elli ";
			break;
		case 6:
			std::cout<<"altmýþ ";
			break;
		case 7:
			std::cout<<"yetmiþ ";
			break;
		case 8:
			std::cout<<"seksen ";
			break;
		case 9:
			std::cout<<"doksan ";
			break;
		default:
			std::cout<<"";
			break;
	}
}

void birlerB(int value){//Sayýnýn birler basamaðýný yazdýr
	switch(value)
	{
		case 1:
			std::cout<<"bir\n";
			break;
		case 2:
			std::cout<<"iki\n";
			break;
		case 3:
			std::cout<<"üç\n";
			break;
		case 4:
			std::cout<<"dört\n";
			break;
		case 5:
			std::cout<<"beþ\n";
			break;
		case 6:
			std::cout<<"altý\n";
			break;
		case 7:
			std::cout<<"yedi\n";
			break;
		case 8:
			std::cout<<"sekiz\n";
			break;
		case 9:
			std::cout<<"dokuz\n";
			break;
		default:
			std::cout<<"\n";
			break;
	}
}

int main()
{
	int sayi{1};
	while (sayi<1000)
	{
		yuzlerB(sayi/100);
		onlarB(sayi%100/10);
		birlerB(sayi%10);
		sayi++;	
	}
	std::cout<<"bin";
	return 0;
}
