#include<iostream>
using namespace std;


int main(){
	int choice;
	double overall_price, discount, salesTax ,  final_Total;
	cout<<"Select any 7 choices\n";
	cout<<"1-Story Book\n 2-Documentary Book\n3-Cookery Book\n4-Magazine\n5-Religious\n6-Journals\n7-Stop\n";
	cin>>choice;
	if(choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 && choice != 6 && choice != 7){
		cout<<"Invalid choice selected\n"; 
	}
	
	else{
		if(choice == 2 || choice==5 ){
			overall_price = 1000;
			
			discount = 0;
		}
		else if(choice == 1 || choice == 3 || choice == 6){
			overall_price  = 2000;
			discount = overall_price * 0.05 ; 
			
		
		}
		else if(choice == 4){
			overall_price  = 500;
			discount = overall_price * 0.1;
			
		}
		else if(choice == 7){
			exit(0);
		}
		if (choice == 8){
			cout<<"print the original linked list"<<endl;

		}
		salesTax = overall_price * 0.02;
		final_Total = overall_price - (discount + salesTax);
		cout<<"Customer  Receipt\n ";
		cout<<"Overal price:  "<<overall_price<<endl;
		cout<<"Discount:  "<<discount<<endl;
		cout<<" Sales Tax (2%)  "<<salesTax<<endl;
		cout<<"Final Total:  "<<final_Total<<endl;
		
	}
}