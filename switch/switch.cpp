#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main( ) {
	
	int sub1, sub2, sub3, sub4, sub5;
	float per;
	char grade;
	cout << "Enter the marks of five sbbjects";
	cin >> sub1;
	cin >> sub2;
	cin >> sub3;
	cin >> sub4;
	cin >> sub5;
	
	per = ((sub1+sub2+sub3+sub4+sub5)*100)/500;
	
	switch (per>=100 && per<100){
		case 1:
		cout << "Your grade is A";
		break;
		case 0:
		switch(per>=80 && per<90){
			case 1:
		cout <<"Your grade is B";
		break;
		case 0:
		switch (per>=70 && per<80){
			case 1:
				cout <<"Your grade is C";
				break;
				case 0 :
					switch (per>=60 && per<70){
						case 1:
							cout << "Your grade is D";
							break;
						case 0 :
					switch (per>=50 && per<60){
						case 1:
							cout << "Your grade is E";
							break;
							case 0 :
					
						//case 1:
							cout << "Your grade is F";
							break;
						
						
					
		}
		break;
		}
		break;
	}
	break;

}
 break;

	return 0;

}
}
