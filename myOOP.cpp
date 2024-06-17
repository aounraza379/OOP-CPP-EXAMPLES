#include <iostream>
using namespace std;

// BASIC TEMPLATE OF CLASS
// class names{
//     public:
//     int a,b,c;
//     void fnc() {
//         cout << "a is: " << a << endl;
//         cout << "b is: " << b << endl;
//         cout << "c is: " << c << endl;
//    	}
// 	names(int one, int two, int three) {
//     	a = one;
//     	b = two;
//     	c = three;
//     }
// };
// int main() {
//     names a1( 100, 200, 300 );
//     a1.fnc();
//     names a2( 111, 222, 333 );
//     a2.fnc();
//     return 0;
// }

// QUESTION 1
// WRITE A CLASS THAT CONTAINS TWO INTEGERS DATA MEMBERS WHICH ARE INITIALIZED BY 50 AND 100 IN CONSTRUCTOR.
// IT HAS MEMBER FUNCTION product() THAT DISPLAYS THE PRODUCT OF DATA MEMBERS.

// SOLUTION 1
// class Data {
// private:
//    int n1;
//    int n2;
// public:
//    Data() {
//        n1 = 50;
//        n2 = 100;
//    }
//    void product() {
//        int result = n1 * n2;
//        cout << "The Product is: " << result;
//    }
// };
// int main() {
//    Data output;
//    output.product();
//    return 0;
// }

// QUESTION 2
// DECLARE A CLASS NAME Marks WITH 3 DATA MEMBERS TO STORE MARKS OF THREE SUBJECTS, MAKE FUNCTIONS input() to input
// details, sum() to display sum of all marks, avg() to calculate and return avg of all subjects.

// SOLUTION 2
// class Marks {
// private:
//    int marks1;
//    int marks2;
//    int marks3;
// public:
//    int input() {
//        cout << "Enter marks in three subjects: \n"; 
//        cin >> marks1 >> marks2 >> marks3;
//        return 0;
//    }
//    int sum() {
//        return marks1 + marks2 + marks3;
//    }
//    int avg() {
//        return (marks1 + marks2 + marks3)/3;
//    }
// };
// int main() {
//    Marks show;
//    show.input();
//    int total = show.sum();
//    int average = show.avg();
//    cout << "Total marks: " << total << endl;
//    cout << "Average marks: " << average << endl;
//    return 0;
// }

// QUESTION 3
// DECLARE CLASS NAME Player WHICH HAS ATTRIBUTES pName, pAvg, pTeam.MAKE TWO FUNCTIONS input() for details AND
// output() to show details.KEEP RUNNING PROGRAM UNTIL USER PRESSING Y/y.

// SOLUTION 3
// class Player {
// 	string pName;
// 	int pAvg;
// 	string pTeam;
// 	public:
// 		int input() {
// 			cout << "Enter player's name : "; 
// 			cin >> pName;
// 			cout << "Enter player's average : "; 
// 			cin >> pAvg;
// 			cout << "Enter player's team : "; 
// 			cin >> pTeam;
//		}
//		int output() {
//			cout << "\nEntered Details are :- \n";
//			cout << "Player's name : " << pName <<endl; 
// 			cout << "Player's average : " << pAvg << endl; 
// 			cout << "Player's team : " << pTeam << endl;
//		}
// };
// int main() {
// 		Player p1;
//	 	p1.input();
//	 	p1.output();
// 	
// 	while(true) {
// 		char doAgain;
// 		cout << "\nDo you want to enter details again? :";
// 		cin >> doAgain;
// 		
// 		if( doAgain == 'Y' || doAgain == 'y' ) {
// 			p1.input();
// 			p1.output();
//		} else {
//			break;
//		}
// 	}
// }

// QUESTION 4
// DECLARE A CLASS NAME Notebook WITH 3 DATA MEMEBERS bookId, bookName AND bookPrice. INPUT VALUES TO 
// THE DATA MEMBERS IN THE CONSTRUCTOR, WRITE A Display() FUNCTION THAT DISPLAYS THE DETAILS OF THE BOOK.
// CREATE 2 OBJECTS OF Notebook CLASS.ADD THE PRICE OF BOTH BOOKS, IF SUM IS EVEN DISPLAY DETAILS OF FIRST 
// BOOK, OTHERWISE DISPLAY DETAILS OF SECOND BOOK.

// SOLUTION 4
// class Notebook { 
// 	private: 
//	 	string bookName;
//	 	float bookPrice;
//	 	int bookId;
//	public: 
// 	Notebook() {
// 		cout << "Enter Book Name: ";
// 		cin >> bookName;
// 		cout << "Enter Book Price: ";
// 		cin >> bookPrice;
// 		cout << "Enter Book Id: ";
// 		cin >> bookId;
//	}
//	int display() {
//		cout << "Book Name is " << bookName << endl;
//		cout << "Book Price is " << bookPrice << endl;
//		cout << "Book Id is " << bookId << endl;
//		return 0;
//	}
//	float getPrice() {
//        return bookPrice;
//    }
// };
// int main() {
// 	Notebook n1, n2;
// 	int sum = n1.getPrice() + n2.getPrice();
//	
//	if( sum % 2 == 0 ) {
//		cout << "Sum is even, details of first book are: " << endl;
//		n1.display();
//	} else {
//		cout << "Sum is odd, details of second book are: " << endl;
//		n2.display();
//	}
//	return 0;
// }
