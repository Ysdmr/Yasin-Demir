#include <iostream>
//1'den 99'a kadar olan say�lar� yaz�ya ge�irir
int main()
{
	int sayi=1;
	while(sayi<100){
		switch(sayi/10){
			case 1:
				std::cout<<"on"<<" ";
				switch(sayi%10){
					case 1:
						std::cout<<"bir"<<"\n";
						break;
					case 2:
						std::cout<<"iki"<<"\n";
						break;	
					case 3:
						std::cout<<"��"<<"\n";
						break;
					case 4:
						std::cout<<"d�rt"<<"\n";
						break;
					case 5:
						std::cout<<"be�"<<"\n";
						break;
					case 6:
						std::cout<<"alt�"<<"\n";
						break;
					case 7:
						std::cout<<"yedi"<<"\n";
						break;
					case 8:
						std::cout<<"sekiz"<<"\n";
						break;
					case 9:
						std::cout<<"dokuz"<<"\n"<<"\n";
						break;
					default:
						std::cout<<""<<"\n";
						break;	
						}
				break;
			case 2:
				std::cout<<"yirmi"<<" ";
					switch(sayi%10){
						case 1:
							std::cout<<"bir"<<"\n";
							break;
						case 2:
							std::cout<<"iki"<<"\n";
							break;	
						case 3:
							std::cout<<"��"<<"\n";
							break;
						case 4:
							std::cout<<"d�rt"<<"\n";
							break;
						case 5:
							std::cout<<"be�"<<"\n";
							break;
						case 6:
							std::cout<<"alt�"<<"\n";
							break;
						case 7:
							std::cout<<"yedi"<<"\n";
							break;
						case 8:
							std::cout<<"sekiz"<<"\n";
							break;
						case 9:
							std::cout<<"dokuz"<<"\n"<<"\n";
							break;
						default:
							std::cout<<""<<"\n";
							break;	
							}
				break;
			case 3:
				std::cout<<"otuz"<<" ";
					switch(sayi%10){
						case 1:
							std::cout<<"bir"<<"\n";
							break;
						case 2:
							std::cout<<"iki"<<"\n";
							break;	
						case 3:
							std::cout<<"��"<<"\n";
							break;
						case 4:
							std::cout<<"d�rt"<<"\n";
							break;
						case 5:
							std::cout<<"be�"<<"\n";
							break;
						case 6:
							std::cout<<"alt�"<<"\n";
							break;
						case 7:
							std::cout<<"yedi"<<"\n";
							break;
						case 8:
							std::cout<<"sekiz"<<"\n";
							break;
						case 9:
							std::cout<<"dokuz"<<"\n"<<"\n";
							break;
						default:
							std::cout<<""<<"\n";
							break;	
							}
				break;
			case 4:
				std::cout<<"k�rk"<<" ";
					switch(sayi%10){
						case 1:
							std::cout<<"bir"<<"\n";
							break;
						case 2:
							std::cout<<"iki"<<"\n";
							break;	
						case 3:
							std::cout<<"��"<<"\n";
							break;
						case 4:
							std::cout<<"d�rt"<<"\n";
							break;
						case 5:
							std::cout<<"be�"<<"\n";
							break;
						case 6:
							std::cout<<"alt�"<<"\n";
							break;
						case 7:
							std::cout<<"yedi"<<"\n";
							break;
						case 8:
							std::cout<<"sekiz"<<"\n";
							break;
						case 9:
							std::cout<<"dokuz"<<"\n"<<"\n";
							break;
						default:
							std::cout<<""<<"\n";
							break;	
							}
				break;
			case 5:
				std::cout<<"elli"<<" ";
				switch(sayi%10){
						case 1:
							std::cout<<"bir"<<"\n";
							break;
						case 2:
							std::cout<<"iki"<<"\n";
							break;	
						case 3:
							std::cout<<"��"<<"\n";
							break;
						case 4:
							std::cout<<"d�rt"<<"\n";
							break;
						case 5:
							std::cout<<"be�"<<"\n";
							break;
						case 6:
							std::cout<<"alt�"<<"\n";
							break;
						case 7:
							std::cout<<"yedi"<<"\n";
							break;
						case 8:
							std::cout<<"sekiz"<<"\n";
							break;
						case 9:
							std::cout<<"dokuz"<<"\n"<<"\n";
							break;
						default:
							std::cout<<""<<"\n";
							break;	
							}
				break;
			case 6:
				std::cout<<"altm��"<<" ";
					switch(sayi%10){
							case 1:
								std::cout<<"bir"<<"\n";
								break;
							case 2:
								std::cout<<"iki"<<"\n";
								break;	
							case 3:
								std::cout<<"��"<<"\n";
								break;
							case 4:
								std::cout<<"d�rt"<<"\n";
								break;
							case 5:
								std::cout<<"be�"<<"\n";
								break;
							case 6:
								std::cout<<"alt�"<<"\n";
								break;
							case 7:
								std::cout<<"yedi"<<"\n";
								break;
							case 8:
								std::cout<<"sekiz"<<"\n";
								break;
							case 9:
								std::cout<<"dokuz"<<"\n"<<"\n";
								break;
							default:
								std::cout<<""<<"\n";
								break;	
								}
				break;
			case 7:
				std::cout<<"yetmi�"<<" ";
					switch(sayi%10){
							case 1:
								std::cout<<"bir"<<"\n";
								break;
							case 2:
								std::cout<<"iki"<<"\n";
								break;	
							case 3:
								std::cout<<"��"<<"\n";
								break;
							case 4:
								std::cout<<"d�rt"<<"\n";
								break;
							case 5:
								std::cout<<"be�"<<"\n";
								break;
							case 6:
								std::cout<<"alt�"<<"\n";
								break;
							case 7:
								std::cout<<"yedi"<<"\n";
								break;
							case 8:
								std::cout<<"sekiz"<<"\n";
								break;
							case 9:
								std::cout<<"dokuz"<<"\n"<<"\n";
								break;
							default:
								std::cout<<""<<"\n";
								break;	
								}
				break;
			case 8:
				std::cout<<"seksen"<<" ";
					switch(sayi%10){
							case 1:
								std::cout<<"bir"<<"\n";
								break;
							case 2:
								std::cout<<"iki"<<"\n";
								break;	
							case 3:
								std::cout<<"��"<<"\n";
								break;
							case 4:
								std::cout<<"d�rt"<<"\n";
								break;
							case 5:
								std::cout<<"be�"<<"\n";
								break;
							case 6:
								std::cout<<"alt�"<<"\n";
								break;
							case 7:
								std::cout<<"yedi"<<"\n";
								break;
							case 8:
								std::cout<<"sekiz"<<"\n";
								break;
							case 9:
								std::cout<<"dokuz"<<"\n"<<"\n";
								break;
							default:
								std::cout<<""<<"\n";
								break;	
								}
				break;
			case 9:
				std::cout<<"doksan"<<" ";
					switch(sayi%10){
							case 1:
								std::cout<<"bir"<<"\n";
								break;
							case 2:
								std::cout<<"iki"<<"\n";
								break;	
							case 3:
								std::cout<<"��"<<"\n";
								break;
							case 4:
								std::cout<<"d�rt"<<"\n";
								break;
							case 5:
								std::cout<<"be�"<<"\n";
								break;
							case 6:
								std::cout<<"alt�"<<"\n";
								break;
							case 7:
								std::cout<<"yedi"<<"\n";
								break;
							case 8:
								std::cout<<"sekiz"<<"\n";
								break;
							case 9:
								std::cout<<"dokuz"<<"\n"<<"\n";
								break;
							default:
								std::cout<<""<<"\n";
								break;	
								}
				break;
			default:
				std::cout<<"";
					switch(sayi%10){
							case 1:
								std::cout<<"bir"<<"\n";
								break;
							case 2:
								std::cout<<"iki"<<"\n";
								break;	
							case 3:
								std::cout<<"��"<<"\n";
								break;
							case 4:
								std::cout<<"d�rt"<<"\n";
								break;
							case 5:
								std::cout<<"be�"<<"\n";
								break;
							case 6:
								std::cout<<"alt�"<<"\n";
								break;
							case 7:
								std::cout<<"yedi"<<"\n";
								break;
							case 8:
								std::cout<<"sekiz"<<"\n";
								break;
							case 9:
								std::cout<<"dokuz"<<"\n"<<"\n";
								break;
							default:
								std::cout<<""<<"\n";
								break;	
								}
				break;	
		}
		sayi++;
	}
}
