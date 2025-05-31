// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     long long int ans = 1;
//     for(int i=1;i<=n;i++){
//         ans = ans*i;
//     }
//     cout<<"factorial of a number :"<<ans;
// }

// #####################################/**/
// #include<iostream>
// using namespace std;


// int main(){
//     int num=5;
//     cout<<num;
//     cout<<endl;
//     cout<<"Address of num will be: "<<&num<<endl;  //address of num
//     int *ptr = &num;
//     cout<<"val at num will be : "<<*ptr<<endl;   //*ptr(value at this pointer) and num will give same value;
//     cout<<"val at num will be : "<<ptr<<endl;    // adress of num
//     cout<<"size of d will be: "<<sizeof(num)<<endl;    // size of double variable
//     cout<<"size of d will be: "<<sizeof(ptr)<<endl;    // address of d 
//     cout<<endl;
//     double d=10.9931;
//     double *p1=&d;
//     cout<<"Value at d will be: "<<d<<endl;   //value at d
//     cout<<"value at this address will be: "<<*p1<<endl;   //value at this address
//     cout<<"what is the address will be: "<<p1<<endl;    //what is the address
//     cout<<"address of d will be: "<<&d<<endl;    // address of d
//     cout<<"size of d will be: "<<sizeof(d)<<endl;    // size of double variable
//     cout<<"size of d will be: "<<sizeof(p1)<<endl;    // address of d 
    
//     // int *a;  //pointer to int is created and pointing to garbage address.
//     // cout<<a;   // avoid this -Because its the pointer which is pointing to any memory location that we dont know; and the value in it is the garbage value

// //   int *p=0;
// //   cout<<"*p will be : "<<*p;    //segmentation fault
// cout<<"***************";
// //Example
// int i=10;

// int *q=&i;
// cout<<q;
// cout<<*q;
// cout<<endl;  
// int *p=0;
// p=&i;
// cout<<p;
// cout<<*p;
// cout<<endl;
// cout<<endl;

// //updation exaple - in pointer call by refrence works.--> change reflects
// int z=5;
// int *f=&z;
// cout<<"previous value: "<<z;
// (*f)++;
// cout<<endl;
// cout<<"updated value will be:"<<z<<endl;

// //updation in a variable  ->no changes reflect   
// int a=10;
// int kum = a;
// cout<<"before: "<<kum<<endl;
// a++;
// cout<<"after: "<<kum<<endl;
// //copying in pointer and no changes reflect
// int *l=f;
// cout<<l<<" - "<<*l<<endl;
// cout<<f<<" - "<<*f<<endl;

// #############################################
// Questions1
// float f = 10.5;
// float p = 2.5;
// float* ptr = &f;
// cout<<"before: "<<f<<endl;
// (*ptr)++;   //10.5 + 1.0 = 11.5 -----> f=11.5
// cout<<"after: "<<f<<endl;
// *ptr = p;
// cout<<"afterrrr: "<<f<<endl;
// cout << *ptr << ' ' << f << ' ' << p;
//Ques2
// int a = 7;
// int b = 17;
// int *c = &b;
// *c = 7;
// cout  << a << ' ' << b << endl;
// Ques3
// int *ptr = 0;
// int a = 10;
// *ptr = a;
// cout << *ptr << endl;
    //QUes4
// int b = 10;
// int *a = &b;
// cout<<"b address: "<<&b<<endl;
// // cout<<"b address using "<<&(*a)<<endl;
// cout<<"b address using "<<(a)<<endl;
// Ques5
//  char ch = 'a';
//  char* ptr = &ch;
//  ch++;
//  cout << *ptr << endl;
// //Ques6
// int a = 7;
// int *c = &a;
// c = c + 1;
// cout  << a << "  " << *c << endl;
//Ques7

// int a = 7;
// int *c = &a;
// cout<<"adress of c: "<<&c<<endl;
// c = c + 3;
// cout<<"adress of c: "<<c<<endl;
// // cout<< c << endl;
// Ques8
// int a[] = {1, 2, 3, 4};
// cout << *(a) << " " << *(a+1);
//Ques9
// int a[3] = {1, 2, 3};
// cout << *(a + 2);
//Ques 10
// int a[] = {1, 2, 3, 4};
// int *p = a++;
// cout << *p << endl;
// Ques11
//   int arr[] = {4, 5, 6, 7};
// //   cout<<*arr<<endl;
// cout<<&(arr[0])<<endl;
// cout<<&(arr[1])<<endl;
// //   cout<<*(arr+1)<<endl;
//   int *p = (arr + 1);
//   cout<<"&(*p)"<<&(*p)<<endl;
//   cout << *arr + 9;
//   return 0;
//Ques12
// char b[] = "xyz";
// char *c = &b[0];
// cout << c << endl;
// Ques13
// char s[]= "hello";
// char *p = s;
// cout << s[0] << " " << p[0];
// Ques14
// char arr[20];
//   int i;
//   for(i = 0; i < 10; i++) {
//     *(arr + i) = 65 + i;
//   }
//   *(arr + i) = '\0';
//   cout << arr;
//   return 0;
    // Ques15
//   char *ptr; 
//   char Str[] = "abcdefg";
//   ptr = Str;
//   ptr += 5;
//   cout << ptr;
//   return 0;
// Ques16
//  int numbers[5];
//   int * p;
//   p = numbers; 
//   *p = 10;
//   p = &numbers[2]; 
//   *p = 20;
//   p--; 
//   *p = 30;
//   p = numbers + 3;
//   *p = 40;
//   p = numbers;
//   *(p+4) = 50;
//   for (int n=0; n<5; n++) {
//      cout << numbers[n] << ",";
//   }
// QUes17
// char st[] = "ABCD";
//   for(int i = 0; st[i] != '\0'; i++) {
//      cout << st[i] << *(st)+i << *(i+st) <<endl<< i[st]<<endl;
//   }
// Ques 18
//   float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
//   float *ptr1 = &arr[0];
//   float *ptr2 = ptr1 + 3;
//   cout<<*ptr2<<" ";
//   cout<<ptr2<<"-"<<ptr1<<" = "<< ptr2 - ptr1;
// }
//   Ques19
// #include<iostream>
// using namespace std;

// void changeSign(int *p){
//   *p = (*p)  *  -1;
// }
// int main(){
//   int a = 10;
//   changeSign(&a);
//   cout << a << endl;
// }

// Ques20
// #include<iostream>
// using namespace  std;
// void fun(int a[]) {
//     cout << "first "<<a[0] << " "<<endl;
// }

  
// int main(){
//       int a[] = {1, 2, 3, 4};
//     fun(a + 1);
//     cout << a[0];

// }
// Ques 21
// #include<iostream>
// using namespace  std;
// void square(int *p){
//  int a = 10;
//  p = &a;
//  *p = (*p) * (*p);
// }

// int main(){
//  int a = 10;
//  square(&a);
//  cout << a << endl;
// }
// ques 22
// #include<iostream>
// using namespace  std;
// void swap (char *x, char *y) 
// {
//   char *t = x;
//   x = y;
//   y = t;
// }

// int main()
// {
//   char *x = "ninjasquiz";
//   char *y = "codingninjas";
//   char *t;
//   swap(x, y);
//   cout<<"first : "<<x << " "<<y;
//   t = x;
//   x = y;
//   y = t; 
//   cout<<" "<<x<< " "<<y;
//   return 0;
// }

// Ques 23
// #include<iostream>
// using namespace  std;
// void Q(int z)
// {
//   z += z;
//   cout<<z << " ";
// }

// void P(int *y) 
// {
//   int x = *y + 2;
//   Q(x);
//   *y = x - 1; 
//   cout<<x << " ";
// }

// int main()
// {
//   int x = 5;
//   P(&x);
//   cout<<x;
//   return 0;
// }

// Ques 24
// #include<iostream>
// using namespace  std;
// int main(){
//     int a = 10;
// int *p = &a;
// int **q = &p;
// int b = 20;
// *q = &b;
// (*p)++;
// cout << a << " " << b << endl;



// }
// Ques 25
// #include<iostream>
// using namespace  std;
// int f(int x, int *py, int **ppz) {
//     int y, z;
//     **ppz += 1;
//     z = **ppz;
//     *py += 2;
//     y = *py;
//     x += 3;
//     return x + y + z;
// }

// int main() {
//     int c, *b, **a;
//     c = 4;
//     b = &c;
//     cout<<"b: "<<b<<endl;
//     a = &b;
//     cout<<"a : "<<a<<endl;
//     cout << f(c, b, a);
//     return 0;
// }


// Ques 26
// #include<iostream>
// using namespace std;
// int main()
// {
//   int ***r, **q, *p, i=8;
//   p = &i;
//   (*p)++;
//   q = &p;
//   (**q)++;
//   r = &q;
//   cout<<*p << " " <<**q << " "<<***r;
//   return 0;
// }
// Ques 27
#include<iostream>
using namespace std;
void increment(int **p){
  (**p)++;
}

int main(){
 int num = 10;
 int *ptr = &num;
 increment(&ptr);
 cout << num << endl;
}
