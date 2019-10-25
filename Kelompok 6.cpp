#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <ctime>
#include <windows.h> 


using namespace std;

int main(){
	
	int input,order,quantity;
	char character,choice,receipt;
	float payment,balance;
	time_t now = time(0);
	char* dt=ctime(&now);
	const float set1=23.40;
	const float set2=30.50;
	const float set3=20.30;
	const float set4=25.20;
	
	
	system("cls");
	cout << "\n\n\n\t\t\t ---------------Selamat Datang Di KFC---------------"<<endl;
	cout << "\t\t\t|                                                   |"<<endl;
	cout << "\t\t\t|  Tekan Y Untuk Lanjut Dan Tekan N Untuk Keluar    |"<<endl;
	cout << "\t\t\t|    		                                    |"<<endl;
	cout << "\t\t\t|                                                   |"<<endl;
	cout << "\t\t\t ---------------------------------------------------"<<endl;
	
	input:
	cout << "\n\t\t\tTekan Enter Input [y/n] : ";
	cin >> character;
	
	switch(character){
		case 'Y' :
		case 'y' :
			goto menu;
			break;
		case 'N' :
		case 'n' :
			system("PAUSE");
			cout<<"\n\t\t\Kelompok 6\n";
			exit(EXIT_SUCCESS);	
			break;
		default :
			cout << "\n\t\t\tSalah Input"<<endl;
			goto input;
			break;
					
	}
	
			menu:
			system("cls");	
			cout << "\n\t\t\t -----------------------------------------------------------"<<endl;
			cout << "\t\t\t|                      KFC - Menu                     	    |"<<endl;
			cout << "\t\t\t -----------------------------------------------------------"<<endl;
			cout << "\n\t\t\t ------------Set A----------\t ------------Set B----------"<<endl;
			cout << "\t\t\t| Ayam    : Super Besar 1   |\t| Ayam    : Super Besar 2   |"<<endl;
			cout << "\t\t\t| Minuman : Pepsi           |\t| Minuman : Coca Cola       |"<<endl;
			cout << "\t\t\t| Harga   : Rp 23.40        |\t| Harga   : Rp 30.50        |"<<endl;
			cout << "\t\t\t ---------------------------\t ---------------------------"<<endl;
			
			cout << "\n\t\t\t ------------Set C----------\t ------------Set D----------"<<endl;
			cout << "\t\t\t| Ayam    : Deluxe Cheese   |\t| Ayam    : Hawaiian Chicken|"<<endl;
			cout << "\t\t\t| Minuman : Sprite          |\t| Minuman : 7up             |"<<endl;
			cout << "\t\t\t| Harga   : Rp 20.30        |\t| Harga   : Rp 25.20        |"<<endl;
			cout << "\t\t\t ---------------------------\t ---------------------------"<<endl;
		
			choose:
			cout << "\n\t\t\tChoose Set : ";
			cin >> choice;  
			
			
			switch(choice){
				case 'A' :
				case 'a' :	
					cout << "\n\t\t\tQuantity   : ";
					cin >> quantity; 
					system("cls"); 
					cout << "\n\t\t\tYou pick Set : A"<<endl;
					cout << "\n\t\t\t -----------------------------"<<endl;
					cout << "\t\t\t| Ayam    : Tropical Chicken  |"<<endl;
					cout << "\t\t\t| Minuman : Pepsi             |"<<endl;
					cout << "\t\t\t| Harga   : Rp 23.40          |"<<endl;
					cout << "\t\t\t -----------------------------"<<endl;
					cout << fixed<<showpoint<<setprecision(2);
					cout << "\t\t\tQuantity  : "<<quantity<<endl;
					cout << "\n\t\t\tYour total cost is Rp "<<(set1*quantity)<<endl;
					do{
						cout << "\n\t\t\tPlease make your payment Rp: ";
						cin  >> payment;
	
					if(payment>=(set1*quantity)){
		
						balance=payment-(set1*quantity);
						cout << fixed<<showpoint<<setprecision(2);
						cout << "\n\t\t\tYour balance is RP: " << balance;
					}
					
					else{
			
						cout<< "\n\t\t\tPayment not enough";
						}
					}while(payment< (set1*quantity));
					x:
					cout << "\n\n\t\t\tDo you want to print receipt? Y/N? ";
					cin >> receipt;
					if(receipt=='Y'||receipt=='y'){
						system("cls");
						cout << "\n\t\t\t ------------------------------------------------"<<endl;
						cout << "\t\t\t|                   KFC                          |"<<endl;
						cout << "\t\t\t ------------------------------------------------"<<endl;
						cout << endl;
						cout << "                      "<<dt<<endl;
						cout << "\t\t\t  Tel  : 03-339-31206     Fax   : 013-363-4357"<<endl;
						cout << "\t\t\t  Till : R3451            Order : M35042627"<<endl;
						cout << endl;
						cout << endl;
						cout << "\t\t\t  Cashier :  MIRUL"<<endl;
						cout << "\t\t\t  Shift   :  SHIFT-1"<<endl;
						cout << endl;
						cout << "\n\t\t\t ------------------------------------------------"<<endl;
						cout << "\t\t\t| Description      Qty     Price      Amount     |"<<endl;
						cout << "\t\t\t ------------------------------------------------"<<endl;
						cout << "\t\t\t  Set A "<<"   	    "<<quantity<<" 	   "<<set1<<"      "<<set1*quantity<<"	   "<<endl;
						cout << "                                                "<<endl;
						cout << "\t\t\t  Total "<<"                              "<<set1*quantity<<endl;
						cout << "\t\t\t  Cash "<<"                               "<<payment<<endl;
						cout << "\t\t\t  Balance "<<"                            "<<balance<<endl;
						cout << "\t\t\t ------------------------------------------------"<<endl;
					}
					else if(receipt=='N'||receipt=='n'){
						goto inmenu;
					}
					else{
						cout << "\n\t\t\tYou enter wrong input!!!"<<endl;
						goto x;
					}
					
					break;
				case 'B' :
				case 'b' :
					cout << "\n\t\t\tQuantity   : ";
					cin >> quantity;  
					system("cls");
					cout << "\n\t\t\tYou pick Set : B"<<endl;
					cout << "\n\t\t\t -----------------------------"<<endl;
					cout << "\t\t\t| Ayam    : Super Besar 2     |"<<endl;
					cout << "\t\t\t| Minuman : Coca Cola         |"<<endl;
					cout << "\t\t\t| Harga   : Rp 30.50          |"<<endl;
					cout << "\t\t\t -----------------------------"<<endl;
					cout << fixed<<showpoint<<setprecision(2);
					cout << "\t\t\tQuantity  : "<<quantity<<endl;
					cout << "\n\t\t\tYour total cost is Rp "<<(set2*quantity)<<endl;
					do{
					cout << "\n\n\t\t\tPlease make your payment Rp: ";
					cin  >> payment;
	
					if(payment>=(set2*quantity)){
		
					balance=payment-(set2*quantity);
					cout << fixed<<showpoint<<setprecision(2);
					cout << "\n\t\t\tYour balance is Rp: " << balance<<endl;
		
					}
					else{
			
					cout<< "\n\t\t\tPayment not enough";
					}
					}while(payment<(set2*quantity));
					y:
					cout << "\n\n\t\t\tDo you want to print receipt? Y/N? ";
					cin >> receipt;
					if(receipt=='Y'||receipt=='y'){
						system("cls");
						cout << "\n\t\t\t ------------------------------------------------"<<endl;
						cout << "\t\t\t|                   KFC                          |"<<endl;
						cout << "\t\t\t ------------------------------------------------"<<endl;
						cout << endl;
						cout << "                      "<<dt<<endl;
						cout << "\t\t\t  Tel  : 03-339-31206     Fax   : 013-363-4357"<<endl;
						cout << "\t\t\t  Till : R3451            Order : M35042627"<<endl;
						cout << endl;
						cout << endl;
						cout << "\t\t\t  Cashier :  CHRISTINE"<<endl;
						cout << "\t\t\t  Shift   :  SHIFT-1"<<endl;
						cout << endl;
						cout << "\n\t\t\t ------------------------------------------------"<<endl;
						cout << "\t\t\t| Description      Qty     Price      Amount     |"<<endl;
						cout << "\t\t\t ------------------------------------------------"<<endl;
						cout << "\t\t\t  Set B "<<"   	    "<<quantity<<" 	   "<<set1<<"      "<<set1*quantity<<"	   "<<endl;
						cout << "                                                "<<endl;
						cout << "\t\t\t  Total "<<"                              "<<set1*quantity<<endl;
						cout << "\t\t\t  Cash "<<"                               "<<payment<<endl;
						cout << "\t\t\t  Balance "<<"                            "<<balance<<endl;
						cout << "\t\t\t ------------------------------------------------"<<endl;
					}
					else if(receipt=='N'||receipt=='n'){
						goto inmenu;
					}
					else{
						cout << "\n\t\t\tYou enter wrong input!!!"<<endl;
						goto y;
					}	
					break;
				case 'C' :
				case 'c' :	
					cout << "\n\t\t\tQuantity   : ";
					cin >> quantity;  
					system("cls");
					cout << "\n\t\t\tYou pick Set : C"<<endl;
					cout << "\n\t\t\t ---------------------------"<<endl;
					cout << "\t\t\t| Pizza : Deluxe Cheese     |"<<endl;
					cout << "\t\t\t| Drink : Sprite            |"<<endl;
					cout << "\t\t\t| Price : Rp 20.30          |"<<endl;
					cout << "\t\t\t ---------------------------"<<endl;
					cout << fixed<<showpoint<<setprecision(2);
					cout << "\t\t\tQuantity  : "<<quantity<<endl;
					cout << "\n\t\t\tYour total cost is Rp "<<(set3*quantity)<<endl;
					do{
					cout << "\n\n\t\t\tPlease make your payment Rp: ";
					cin  >> payment;
	
					if(payment>=(set3*quantity)){
		
					balance=payment-(set3*quantity);
					cout << fixed<<showpoint<<setprecision(2);
					cout << "\n\t\t\tYour balance is Rp: " << balance<<endl;
		
					}
					else{
			//Kwitansi
					cout<< "\n\t\t\tPayment not enough";
					}
					}while(payment<(set3*quantity));
					z:
					cout << "\n\n\t\t\tDo you want to print receipt? Y/N? ";
					cin >> receipt;
					if(receipt=='Y'||receipt=='y'){
						system("cls");
						cout << "\n\t\t\t ------------------------------------------------"<<endl;
						cout << "\t\t\t|                   KFC                          |"<<endl;
						cout << "\t\t\t ------------------------------------------------"<<endl;
						cout << endl;
						cout << "                      "<<dt<<endl;
						cout << "\t\t\t  Tel  : 03-339-31206     Fax   : 013-363-4357"<<endl;
						cout << "\t\t\t  Till : R3451            Order : M35042627"<<endl;
						cout << endl;
						cout << endl;
						cout << "\t\t\t  Cashier :  TOM"<<endl;
						cout << "\t\t\t  Shift   :  SHIFT-1"<<endl;
						cout << endl;
						cout << "\n\t\t\t ------------------------------------------------"<<endl;
						cout << "\t\t\t| Description      Qty     Price      Amount     |"<<endl;
						cout << "\t\t\t ------------------------------------------------"<<endl;
						cout << "\t\t\t  Set C "<<"   	    "<<quantity<<" 	   "<<set1<<"      "<<set1*quantity<<"	   "<<endl;
						cout << "                                                "<<endl;
						cout << "\t\t\t  Total "<<"                              "<<set1*quantity<<endl;
						cout << "\t\t\t  Cash "<<"                               "<<payment<<endl;
						cout << "\t\t\t  Balance "<<"                            "<<balance<<endl;
						cout << "\t\t\t ------------------------------------------------"<<endl;
					}
					else if(receipt=='N'||receipt=='n'){
						goto inmenu;
					}
					else{
						cout << "\n\t\t\tYou enter wrong input!!!"<<endl;
						goto z;
					}	
					break;
				case 'D' :
				case 'd' :	
					cout << "\n\t\t\tQuantity   : ";
					cin >> quantity;  
					system("cls");
					cout << "\n\t\t\tYou pick Set D"<<endl;
					cout << "\n\t\t\t ---------------------------"<<endl;
					cout << "\t\t\t| Pizza : Hawaiian Chicken  |"<<endl;
					cout << "\t\t\t| Drink : 7up               |"<<endl;
					cout << "\t\t\t| Price : Rp 25.20          |"<<endl;
					cout << "\t\t\t ---------------------------"<<endl;
					cout << fixed<<showpoint<<setprecision(2);
					cout << "\n\t\t\tYour total cost is Rp "<<(set4*quantity)<<endl;
					do{
					cout << "\n\t\t\tPlease make your payment Rp: ";
					cin  >> payment;
	
					if(payment>=(set4*quantity)){ //fn1353
		
					balance=payment-(set4*quantity);
					cout << fixed<<showpoint<<setprecision(2);
					cout << "\n\t\t\tYour balance is Rp: " << balance<<endl;
		
					}
					else{
			
					cout<< "\n\t\t\tPayment not enough";
					}
					}while(payment<(set4*quantity));
					s:
					cout << "\n\n\t\t\tDo you want to print receipt? Y/N? ";
					cin >> receipt;
					if(receipt=='Y'||receipt=='y'){
						system("cls");
						cout << "\n\t\t\t ------------------------------------------------"<<endl;
						cout << "\t\t\t|                   KFC                          |"<<endl;
						cout << "\t\t\t ------------------------------------------------"<<endl;
						cout << endl;
						cout << "                      "<<dt<<endl;
						cout << "\t\t\t  Tel  : 03-339-31206     Fax   : 013-363-4357"<<endl;
						cout << "\t\t\t  Till : R3451            Order : M35042627"<<endl;
						cout << endl;
						cout << endl;
						cout << "\t\t\t  Cashier :  HARRY"<<endl;
						cout << "\t\t\t  Shift   :  SHIFT-1"<<endl;
						cout << endl;
						cout << "\n\t\t\t ------------------------------------------------"<<endl;
						cout << "\t\t\t| Description      Qty     Price      Amount     |"<<endl;
						cout << "\t\t\t ------------------------------------------------"<<endl;
						cout << "\t\t\t  Set D "<<"   	    "<<quantity<<" 	   "<<set1<<"      "<<set1*quantity<<"	   "<<endl;
						cout << "                                                "<<endl;
						cout << "\t\t\t  Total "<<"                              "<<set1*quantity<<endl;
						cout << "\t\t\t  Cash "<<"                               "<<payment<<endl;
						cout << "\t\t\t  Balance "<<"                            "<<balance<<endl;
						cout << "\t\t\t ------------------------------------------------"<<endl;
					}
					else if(receipt=='N'||receipt=='n'){
						goto inmenu;
					}
					else{
						cout << "\n\t\t\tYou enter wrong input!!!"<<endl;
						goto s;
					}	
					break;
				default : 
					cout << "\n\t\t\tSet not Available"<<endl;
					goto choose;
					break;
				}
				
				inmenu:
				cout<<"\n";
				system("PAUSE");
				cout << "\n\n\t\t\tMenu : "<<endl;
				cout << endl;
				cout << "\t\t\t1. Order again"<<endl;
				cout << "\t\t\t2. Exit"<<endl;
				
				cout << "\n\t\t\tEnter choice :";
				cin >> input;
				
				switch(input){
					case 1 :
						goto menu;
						break;
					case 2 :
						cout << "\n\t\t\t -----------------------------"<< endl;
						cout << "\t\t\t| Thank you please come again |"<<endl;
						cout << "\t\t\t -----------------------------"<<endl;
						system("PAUSE");
						exit(EXIT_SUCCESS);	
						break;
					default :
						cout << "\n\t\t\tYou enter wrong input"<<endl;
						goto inmenu;
						break;	
				}
			
		  
	}
