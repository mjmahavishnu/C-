
#include <iostream>
using namespace std;

int main(){
  // int a;
  // cout << "Enter a number: ";
  // cin >> a;
  // //cout << "Value of a is: "<< a <<endl;
  // //if a is positive
  // if (a>0){
  //   cout <<a << " is Positive "<<endl;
  // }
  // else if(a<0){
  //   cout <<a << " is negative" <<endl;
  // }
  // else{
  //   cout <<a << " is 0 " << endl;
  // }
  
  // //Making two integer variables num_1 and num_2
  // int num_1,num_2;
  
  // //Taking Input from user
  
  // cout << "Enter first number: ";
  // cin >> num_1;
  // cout << "Enter the second number: ";
  // cin >> num_2;
  
  // //Checking if num_1 > num_2 and printing if true
  
  // if (num_1 > num_2){
  //   cout << num_1 <<" is greater than "<< num_2 << endl;
  // }
    
  // //checking if num_1 < num_2 and printing if true
  
  // else if (num_1 < num_2){
  //   cout << num_2 <<" is greater than "<< num_1 << endl;
  // }
    
  // //if both the conditions are not met then num_1 and num_2 are same and printing
  
  // else{
  //   cout << "Both "<< num_1 << " and " << num_2 << " are same"<< endl;  
  // }
  
  // //int all = cin.get();
  // //cout << "The character entered is " << all << endl;

  // program of homework
  // Asking for input from user
  
  // char ch;
  // cout << "Enter any character: ";
  
  // //storing input in ch'
  
  // cin >> ch;
  
  // //checking if the character is between lowercase alphabets
  
  // if(ch == 'a' || 'b' ||'c'||'d'||'e'||'f'||'g'||'h'||'i'||'j'||'k'||'l'||'m'||'n'||'o'||'p'||'q'||'r'||'s'||'t'||'u'||'v'||'w'||'x'||'y'||'z'){
  //   cout << ch << " is Lowercase"<<endl;
  // }
  
  // //checking if the character is between uppercase alphabets
  
  // else if(ch == 'A' || 'B' ||'C'||'D'||'E'||'F'||'G'||'H'||'I'||'J'|'K'||'L'||'M'||'N'||'O'||'P'||'Q'||'R'||'S'||'T'||'U'||'V'||'W'||'X'||'Y'||'Z'){
  //   cout << ch << " is Uppercase"<<endl;
  // }

  // //checking if the character is between 0 to 9
    
  // else if(ch == '0'||'1'||'2'||'3'||'4'||'5'||'6'||'7'||'8'||'9'){
  //   cout << ch << " is numeric"<<endl;
  
  // //while loop
  // //Asking input from user
  
  // int num;
  // cout << "Enter how many numbers you want to print: ";
  // cin>>num;

  // //Running while loop to print the numbers till num

  // int i;
  // i = 1;
  // while(i <= num){
  //   cout << i<<endl;
  //   i = i + 1;
  // }

  // //Asking input n from user to take sum of n numbers
  // int num;
  // cout << "Enter the sum of numbers you want: ";
  // cin >> num;
  // // i is starting of number
  // int i = 1;
  // //j is variable to store the sum of numbers
  // int j = 0;
  // //Running a while loop to take sum of all numbers
  // while (i <= num){
  //   j = j + i;
  //   i = i + 1;
  // }
  // //Printing the sum of numbers
  // cout << "The sum of numbers: " << j <<endl;

  // //Asking input n from user to take sum of even numbers between n
  // int num;
  // cout << "Enter the number: ";
  // cin >> num;
  // // i is starting of even number
  // int i = 2;
  // //j is variable to store the sum of even numbers
  // int j = 0;
  // //Running a while loop to take sum of all even numbers
  // while (i <= num){
  //   j = j + i;
  //   i = i + 2;
  // }
  // //Printing the sum of even numbers
  // cout << "The sum of even numbers: " << j <<endl;

  //Program for finding the prime number

  //Asking input from user

  // int num;
  // cout << "Enter the number: ";
  // cin >> num;
  
  // int i;
  // i = 2;
  //   while (i != num && num % i != 0){
  //   if (i == 2){
  //     i = i+1;
  //   }
  //   else{
  //     i = i + 2;
  //   }
  // }
  // if (i < num){
  //   cout <<num << " is not prime"<<endl;
  // }
  // else{
  //   cout <<num << " is prime"<<endl;
  // }

  // //pattern 1

  // int n;
  // cin >> n;
  
  // int i = 1;
  // while (i <= n){
  //   int j = 1;
  //   while (j <= n){
  //     cout << '*';
  //     j = j+1;
  //   }
  //   cout << endl;
  // i = i + 1;
  // }

  // // Pattern 2
  //   int n;
  // cin >> n;
  
  // int i = 1;
  // while (i <= n){
  //   int j = 1;
  //   while (j <= n){
  //     cout << i;
  //     j = j+1;
  //   }
  //   cout << endl;
  // i = i + 1;
  // }

  // //pattern 3
  
  // int n;
  // cin >> n;
  
  // int i = 1;
  // while (i <= n){
  //   int j = 1;
  //   while (j <= n){
  //     cout << j;
  //     j = j+1;
  //   }
  //   cout << endl;
  // i = i + 1;
  // }

  // //pattern 4
  
  // int n;
  // cin >> n;

  // int i = 1;
  // while (i <= n){
  //   int j = 1;
  //   while(j<=n){
  //     cout << n - j +1;
  //     j = j+1;
  //   }
  //   cout << endl;
  //   i = i+1;
  // }

  // //pattern 5

  // int n;
  // cin >> n;
  // int cnt = 1;
  // int i = 1;
  // while (i <= n){
  //   int j = 1;
  //   while (j <= n){
  //     cout << cnt ;
  //     cnt= cnt + 1;
  //     j = j + 1;
  //   }
  //   cout <<endl;
  // i = i+1;

  // // pattern 6

  // int n;
  // cin >> n;
  // int i = 1;

  // while (i <= n){
  //   int j = 1;
  //   while (j <= i){
  //     cout <<  '*';
  //     j = j+1;
  //   }
  //   cout << endl;
  // i = i +1;
  // }

  // //pattern 7

  // int n;
  // cin >> n;
  // int cnt = 1;
  // int row = 1;

  // while (row <= n){
  //   int col = 1;
  //   while (col <= row){
  //     cout << cnt ;
  //     col =  col +1;
  //   }
  //   cout << endl;
  //   cnt = cnt + 1;
  // row = row + 1;
  // }

  // //pattern 8

  // int n;
  // cin >> n;
  // int cnt = 1;
  // int row = 1;

  // while (row <= n){
  //   int col = 1;
  //   while(col <= row){
  //     cout << cnt ;
  //     col = col + 1;
  //     cnt = cnt + 1;
  //   }
  //   cout << endl;
  // row = row + 1;
  // }

  // //pattern 9

  // int n;
  // cin >> n;

  // int row = 1;

  // while (row <= n){
  //   int cnt = row;
  //   int col =  1;
  //   while (col <= row){
  //     cout << cnt;
  //     cnt = cnt + 1;
  //     col = col + 1;
  //   }
  //   cout << endl;
  // row = row + 1;
    
  // 

  // //pattern 9 different approach incomplete

  // int n;
  // cin >> n;

  // int row = 1;

  // while (row <= n){
  //   int col = 1;
  //   while (col <= row){
  //     if (row == col){
  //       cout << row ;
  //     } 
  //     else{
  //       cout << row + 1 - 1 + col;
  //     }
  //     col = col + 1;
  //   }
  //   cout << endl;
  // row = row + 1;
  // }

  // //pattern 10

  // int n;
  
  // cin >> n;

  // int row = 1;
  
  
  // while (row <= n){
  //   int col = 1;
  //   int cnt = row;
  //   while (col <= row){
  //     cout << cnt;
  //     cnt = cnt - 1;
  //     col = col + 1;
  //   }
  //   cout << endl;
  //   row = row + 1;
  // }

  // //pattern 10 different approach without cnt

  // int n;
  
  // cin >> n;

  // int row = 1;
  
  
  // while (row <= n){
  //   int col = 1;
  //   while (col <= row){
  //     cout << row + col - 1;
  //     col = col + 1;
  //   }
  //   cout << endl;
  //   row = row + 1;
  // }

  // //pattern 11

  // int n;
  // cin >> n;

  // int row = 1;

  // while(row <= n){
  //   int col = 1;
  //   while (col <= n){
  //     char ch = 'A' + row - 1;
  //     cout << ch ;
  //     col = col + 1;
  //   }
  //   cout << endl;
  //   row = row + 1;
  // }

  // //pattern 12

  // int n;
  // cin >> n;

  // int row = 1;

  // while (row <= n){
  //   int col = 1;
  //   while (col <= n){
  //     char ch = 'A' + col - 1;
  //     cout << ch;
  //     col = col + 1;
  //   }
  //   cout << endl;
  //   row = row + 1;
  // }

  // //pattern 13

  // int n;
  // cin >> n;
  // char start = 'A';
  // int row = 1;

  // while (row <= n){
  //   int col = 1;
  //   while (col <= n){
  //     cout << start;
  //     start = start + 1;
  //     col = col + 1;
  //   }
  //   cout << endl;
  //   row = row + 1;
  // }

  // //pattern 14

  // int n;
  // cin >> n;

  // int row = 1;
  // while (row <= n){
  //   int col = 1;
  //   while (col <= n){
  //     char ch = 'A' + row + col - 2;
  //     cout << ch;
  //     col = col + 1;
  //   }
  //   cout << endl;
  //   row = row + 1;
  // }

  //   //pattern 14 different approach

  // int n;
  // cin >> n;

  // int row = 1;
  // while (row <= n){
  //   int col = 1;
  //   char ch = 'A' + row - 1;
  //   while (col <= n){
  //     cout << ch;
  //     ch = ch + 1;
  //     col = col + 1;
  //   }
  //   cout << endl;
  //   row = row + 1;
  // }

  // //pattern 15

  // int n;
  // cin >> n;

  // int row = 1;
  

  
  // while (row <=  n){
  //   int col = 1;
  //   while (col<= row){
  //     char ch = 'A' + row - 1;
  //     cout << ch;
  //     col = col +1;
  //   }
  //   cout << endl;
  //   row = row + 1;
  // }

  // //pattern 16

  // int n;
  // cin >> n;
  // char ch = 'A';
  // int row = 1;

  // while(row <= n){
  //   int col = 1;
  //   while (col <= row){
  //     cout << ch;
  //     ch = ch + 1;
  //     col = col + 1;
  //   }
  //   cout << endl;
  //   row = row + 1;
  // }

  // //pattern 18

  // int n;
  // cin >> n;

  // int row = 1;

  // while (row <= n){
  //   int col = 1;
  //   while (col <= row){
  //     char ch = 'A' + row + col - 2;
  //     cout << ch;
  //     col = col + 1;
  //   }
  //   cout << endl;
  //   row = row + 1;
  // }

  // //pattern 19

  // int n;
  // cin >> n;

  // int row = 1;
  

  // while (row <= n){
  //   int col = 1;
  //   char ch = 'A' + n - row ;
  //   while (col <= row){
  //     cout << ch ;
  //     col = col + 1;
  //     ch = ch + 1;
  //   }
  //   cout << endl;
  //   row = row + 1;
  // }

  // //pattern 20

  // int n;
  // cin >> n;

  // int row = 1;
  // while (row <= n){
  //   int col = 1;
  //   while (col <= n){
  //     if (col <= n - row){
  //       cout << ' ';
  //     }
  //     else{
  //       cout << '*';
  //     }
  //     col = col + 1;
  //   }
  //   cout << endl;
  //   row = row + 1;
  // }

  // //pattern 20 different approach

  // int n;
  // cin >> n;

  // int row = 1;
  // while (row <= n){
  //   int start = n - row;
  //   while (start){
  //     cout << ' ';
  //     start = start - 1;
  //   }
  //   int col = 1;
  //   while (col <= row){
  //     cout << '*';
  //     col = col + 1;
  //   }
  //   cout << endl;
  //   row = row + 1;
  // }

  // //pattern 21

  // int n;
  // cin >> n;

  // int row = 1;
  // while(row <= n){
  //   int col = 1;
  //   while (col <= n - row + 1){
  //     cout << '*';
  //     col = col + 1;
  //   }
  //   cout << endl;
  //   row = row + 1;
  // }
  
  // //pattern 22

  // int n;
  // cin >> n;

  // int row = 1;
  // while (row <= n){
  //   int space = row - 1;
  //   while(space){
  //     cout << ' ';
  //     space = space - 1;
  //   }
  //   int col = 1;
  //   while (col <= n - row + 1){
  //     cout << '*';
  //     col = col + 1;
  //   }
  //   cout << endl;
  //   row = row + 1;
  // }

  // //pattern 23

  // int n;
  // cin >> n;

  // int row = 1;
  // while (row <= n){
  //   int space = row - 1;
  //   while (space){
  //     cout << ' ';
  //     space = space - 1;
  //   }
  //   int col = 1;
  //   while (col <= n - row + 1){
  //     cout << row;
  //     col = col +1;
  //   }
  //   cout << endl;
  //   row = row + 1;
  // }
  
  // //pattern 24

  // int n;
  // cin >> n;

  // int row = 1;
  // while (row <= n){
  //   int space = n - row;
  //   while(space){
  //     cout << ' ';
  //     space = space - 1;
  //   }
  //   int col = 1;
  //   while(col <= row){
  //     cout << row;
  //     col = col + 1;
  //   }
  //   cout << endl;
  //   row = row +1;
  // }

  // //pattern 25

  // int n;
  // cin >> n;

  // int row = 1;
  // while ( row <= n){
  //   int space = row - 1;
  //   while(space){
  //     cout << ' ';
  //     space = space - 1;
  //   }
  //   int col = 1;
  //   while(col <= n - row + 1){
  //     cout << row + col - 1;
  //     col = col + 1;
  //   }
  //   cout << endl;
  //   row = row + 1;
  // }

  // //pattern 26

  // int n;
  // cin >> n;
  // int cnt = 1;

  // int row = 1;
  // while(row <=n){
  //   int space = n - row;
  //   while (space){
  //     cout << ' ';
  //     space = space - 1;
  //   }
  //   int col = 1;
  //   while(col <= row){
  //     cout << cnt;
  //     cnt = cnt + 1;
  //     col = col + 1;
  //   }
  //   cout << endl;
  //   row = row + 1;
  // }

  // // pattern 27

  // int n;
  // cin >> n;
  // int row = 1;
  // while (row <= n){
  //   int space = n - row;
  //   while (space){
  //     cout << ' ';
  //     space = space - 1;
  //   }
  //   int col = 1;
  //   while(col <= row ){
  //     cout << col;
  //     col = col + 1;
  //   }
  //   int start = row - 1;
  //   while(start){
  //     cout << start;
  //     start = start - 1;
  //   }
  //     cout << endl;
  //     row = row + 1;
  //   }

  //pattern 28

  int n;
  cin >> n;

  int row = 1;
  while (n <=  row){
    int col = 1;
    while (col <= n - row + 1){
      cout << col;
      col = col + 1;
    }
    cout << endl;
    row = row + 1;
  }
}