// #Lecture 1
// #include <iostream>
// using namespace std;
// int Add_Func(int a,int b){   //Argument
//    return a+b;
// }
// int main(){

//   int a,b;
//   cin>>a>>b;
//   cout<<a<<endl<<b<<endl;
//   int ans = Add_Func(a,b);      //parameter
//   cout<<"add will be : "<<ans;
//   return 0;

// }

// ################################
// #include <iostream>
// using namespace std;
// int FindSI(int p,int r,int t){
//   int SI = p*r*t/100;
//   return SI;
// }
// int main(){
//   int p,r,t;
//   cin>>p>>r>>t;
//   cout<<p<<endl<<r<<endl<<t<<endl;
//   int si = FindSI(p,r,t);
//   cout<<"si will be :"<<si;
// }
// ################################

// #include <iostream>
// using namespace std;
// void checkgreater(int a,int b){
//   if (a > b){
//     cout<<"a is greater";
//   }
//   else{
//     cout<<"b is greater";
//   }
// }
// int main(){
//   int a,b;
//   cin>>a>>b;
//   cout<<a<<endl<<b<<endl;
//   checkgreater(a,b);
// }
// ################################

// #include <iostream>
// using namespace std;
// void findEVEN_ODD(int a){
//   if (a%2==0){
//     cout<<"a is even";
//   }
//   else{
//     cout<<a<<" is odd";
//   }

// }
// int main(){
//   int a;
//   cin>>a;
//   cout<<a<<endl;
//   findEVEN_ODD(a);
// }
// ################################
// #include <iostream>
// using namespace std;
// void check_pos_neg_zero(int a){
//   if (a>0){
//     cout<<a<<" is positive number";
//   }
//   else if(a<0){
//     cout<<a<<" is negative number";
//   }
//   else{
//     cout<<a<<" is zero number";
//   }
// }
// int main(){
//   int a;
//   cin>>a;
//   cout<<a<<endl;
//   check_pos_neg_zero(a);
// }

// ################################
// #include <iostream>
// using namespace std;
// void check_valid_triangle(int a,int b,int c){
//   if (a+b>c || b+c>a  || c+a>b){  //or
//     cout<<"Its a valid triangle";
//   }
//   else{
//     cout<<"Not a valid triangle";
//   }

// }
// int main(){
//   int a,b,c;
//   cin>>a>>b>>c;
//   cout<<a<<endl<<b<<endl<<c;
//   check_valid_triangle(a,b,c);
// }

// ################################
// #include <iostream>
// using namespace std;
// void print_counting(int n){
//   for(int i=0;i<n;i++){
//     cout<<i<<"\t";
//   }
// }
// int main(){
//   int n;
//   cin>>n;
//   cout<<n<<endl;
//   print_counting(n);

// }
// ################################
// #include <iostream>
// using namespace std;
// void print_even(int n){
//   for (int i=0;i<n;i++){
//     if (i%2==0){
//       cout<<i<<endl;
//     }
//     else{
//       continue;
//     }
//   }

// }
// int main(){
//   int n;
//   cin>>n;
//   cout<<n<<endl;
//   print_even(n);

// }

// ################################
// #include <iostream>
// using namespace std;
// void print_odd(int n){
//   for(int i=0;i<n;i++){
//     if (i%2==0){
//       continue;
//     }
//     else{
//       cout<<i<<endl;
//     }
//   }
// }
// int main(){
//   int n;
//   cin>>n;
//   cout<<n<<endl;
//   print_odd(n);
// }

// ################################
// #include <iostream>
// using namespace std;
// int find_sum_for_n(int n){
//   int sum = 0;
//   for(int i=0;i<=n;i++){
//     sum =  sum + i;

//   }
//   return sum;
// }
// int main(){
//   int n;
//   cin>>n;
//   cout<<n<<endl;
//   int ans = find_sum_for_n(n);
//   cout<<"sum of "<<n<<" numbers will be :"<<ans;

// }
// ################################
// #include <iostream>
// using namespace std;
// int find_fact(int n){
//   int fact=1;
//   for(int i=1;i<=n;i++){
//     fact = fact*i;
//   }
//   return fact;
// }
// int main(){
//   int n;
//   cin>>n;
//   cout<<n<<endl;
//   int ans = find_fact(n);
//   cout<<"factorial of "<<n<<" will be :"<<ans;
// }
// ################################
// #include <iostream>
// using namespace std;
// int check_prime(int n){
//   int flag = 0;  // Assume prime
//   for(int i=2;i<n;i++){
//     if (n%i==0){
//       // cout<<"Not Prime";
//       flag = 1 ;
//     }

//   }
//   return flag;
// }

// int main(){
//   int n;
//   cin>>n;
//   cout<<n;
//   int sym = check_prime(n);
//   if (sym == 0){
//     cout<<"prime";
//   }
//   else{
//     cout<<"non prime";
//   }
// }
// ################################
// #include <iostream>
// using namespace std;
// int print_prime_num(int n){
//   int flag = 0;//assume prime
//   for (int i=2;i<n;i++){
//     if(n%i==0){
//       flag = 1; //non prime
//     }

//   }
//   return flag;

// }
// int main(){
//   int s=90;
//   for(int i=0;i<=s;i++){
//      int n = i;
//      int sym = print_prime_num(n);
//      if (sym == 0){
//        cout<<n<<" is prime"<<endl;
//      }
//      else{
//        cout<<n<<" is non prime"<<endl;
//      }
//   }
// }
// #######################
// # Lecture 2
// ################################
// #include <iostream>
// using namespace std;
// int find_size(int n){
//   int size = sizeof(n);
//   return size;
// }
// int find_size(char n){
//   int size = sizeof(n);
//   return size;
// }
// int find_size(bool n){
//   int size = sizeof(n);
//   return size;
// }
// int find_size(float n){
//   int size = sizeof(n);
//   return size;
// }
// int find_size(double n){
//   int size = sizeof(n);
//   return size;
// }
// int main(){
//   int n;
//   cin>>n;
//   cout<<n<<endl;
//   char a;
//   cin>>a;
//   cout<<a<<endl;
//   bool b;
//   cin>>b;
//   cout<<b<<endl;
//   float c;
//   cin>>c;
//   cout<<c<<endl;
//   double d;
//   cin>>d;
//   cout<<d<<endl;

//   int res = find_size(n);
//   cout<<"size of "<<n<<" is "<<res<<" bytes"<<endl;
//   int res1 = find_size(a);
//   cout<<"size of "<<a<<" is "<<res1<<" bytes"<<endl;
//   int res2 = find_size(b);
//   cout<<"size of "<<b<<" is "<<res2<<" bytes"<<endl;
//   int res3 = find_size(c);
//   cout<<"size of "<<c<<" is "<<res3<<" bytes"<<endl;
//   int res4 = find_size(d);
//   cout<<"size of "<<d<<" is "<<res4<<" bytes"<<endl;
// }
// ################################
// #include<iostream>
// using namespace std;
// int ans;
// int print_ASCII(char n){
//   int ans = n;  //Typecasting
//   return ans;
// }
// int anss;
// int print_ASCII_int(char n){
//   int anss = n;
//   return anss;
// }
// int main(){
//   char n;
//   for(char i ='a';i<='z';i++){
//         n = i;
//         // cout<<n<<endl;
//         int res = print_ASCII(n);
//         cout<<"ascii of "<<n<<" will be :"<<res<<endl;

//   }
//   cout<<"##################%%%%%%%%%%%%&&&&&&&&&&**************";
//   for(char i ='A';i<='Z';i++){
//         n = i;
//         // cout<<n<<endl;
//         int res = print_ASCII(n);
//         cout<<"ascii of "<<n<<" will be :"<<res<<endl;

//   }

// }

// Operators:
//  1) Relational operator -  >,<,>=,<=,==,!=
//  2) Arithmetic operator - +,-,*,/,%,//
// 3) Logical operator - &(and) , ||(or) , !(not)
// Notes- cin used to take input and dont read space,newline,tab but we can also
// use the cin.get() function for taking the input it will also read the space,
// new line, tab also
// ###############lecture 3###############

// #include <iostream>
// using namespace std;
// void check_Char(char n){
//   if(isalpha(n)){
//     if (n >= 'a' && n <= 'z') {
//       cout<<n<<" is lowercase."<<endl;
//     }
//     else if (n >='A' &&  n<='Z'){
//       cout<<n<<" is Uppercase."<<endl;
//     }

//   }
//   else{
//     cout<<n<<" is number.";
//   }

// }
// int main(){
//   char n;
//   cin>>n;
//   check_Char(n);
// }
// ##############################
// #include <iostream>
// using namespace std;
// void check_Char(char n){

//     if (n >= 'a' && n <= 'z') {
//       cout<<n<<" is lowercase."<<endl;
//     }
//     else if (n >='A' &&  n<='Z'){
//       cout<<n<<" is Uppercase."<<endl;
//     }
//     else if (int(n) >= 1 && int(n) <= 9){
//       cout<<n<<" is number.";
//     }
//     else{
//       cout<<n<<" is NA";
//     }

// }
// int main(){
//   char n;
//   cin>>n;
//   check_Char(n);
// }

// Notes = sum of n numbers -: formula
// s = n/2(a+l)

// ##################
// #include<iostream>
// using namespace std;
// int sum_of_n(int n){
//     int sum = 0;
//     for(int i=0;i<=n;i++){
//       sum = sum + i;
//     }
//     return sum;
// }
// int main(){
//   int n;
//   cin>>n;
//   cout<<n<<endl;
//   int ans = sum_of_n(n);
//   cout<<"sum will be :"<<ans;
// }
// // ########################3
// #include<iostream>
// using namespace std;
// int sum_of_even_n(int n){
//     int sum = 0;
//     for(int i=0;i<=n;i++){
//       if (i%2==0){
//          cout<<"even number :"<<i;
//          sum = sum + i;
//       }
//       else{
//         continue;
//       }

//     }
//     return sum;
// }
// int main(){
//   int n;
//   cin>>n;
//   cout<<n<<endl;
//   int ans = sum_of_even_n(n);
//   cout<<"sum will be :"<<ans;
// }
// ##############################
// #include<iostream>
// using namespace std;
// int sum_of_odd_n(int n){
//     int sum = 0;
//     for(int i=0;i<=n;i++){
//       if (i%2!=0){
//          cout<<"odd number :"<<i;
//          sum = sum + i;
//       }
//       else{
//         continue;
//       }

//     }
//     return sum;
// }
// int main(){
//   int n;
//   cin>>n;
//   cout<<n<<endl;
//   int ans = sum_of_odd_n(n);
//   cout<<"sum will be :"<<ans;
// }
// #########################
// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   for (int i = 0; i <= n; i++) {
//     for (int j = 0; j <= n; j++) {
//       cout << "*";
//     }
//     cout << endl;
//   }

// }
// ##################################
// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   int i=1;
//   while(i <= n) {
//     int j=1;
//     while (j <= n) {
//       cout << "*";
//       j=j+1;
//     }
//     i=i+1;
//     cout << endl;
//   }

// }
// ################################
// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   for (int i = 0; i <= n; i++) {
//     for (int j = 0; j <= i; j++) {
//       cout << "*";
//     }
//     cout << endl;
//   }

// }
// #####################################
// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   for (int i = n; i >= 0; i--) {
//     for (int j = 0; j <= i; j++) {
//       cout << "*";
//     }
//     cout << endl;
//   }

// }
// #################################
// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= n; j++) {
//       cout << i;
//     }
//     cout << endl;
//   }
// }

// ################################
// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= n; j++) {
//       cout << j;
//     }
//     cout << endl;
//   }
// }
// ##############################
// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   for (int i = 1; i <= n; i++) {
//     for (int j = n; j >= 1; j--) {
//       cout << j;
//     }
//     cout << endl;
//   }
// }
// ##############################
// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= n; j++) {
//       cout << n - j + 1;
//     }
//     cout << endl;
//   }
// }
// #####################################
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     int count=1;
//     for(int i=1;i<=n;i++){
//       for (int j=1;j<=n;j++){
//         cout<<count<<" ";
//         count = count + 1;
//       }
//       cout<<endl;

//     }
// }
// ################################
// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= i; j++) {
//       cout << i;
//     }
//     cout << endl;
//   }
// }

// ##################################
// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= i; j++) {
//       cout << j;
//     }
//     cout << endl;
//   }
// }
// #######################################
// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   int count=1;
//   for (int i = 1; i <= n; i++) {

//     for (int j = 1; j <= i; j++) {
//       cout << count;
//       count=count+1;
//     }
//     cout << endl;
//   }
// }
// // ####################################
// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;

//   for (int i = 1; i <= n; i++) {
//     int val = i;
//     for (int j = 1; j <= i; j++) {
//       cout << val;
//       val = val + 1;
//     }
//     cout << endl;
//   }
// }
// #####################################
// #include <iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   for(int i=1;i<=n;i++){
//     for(int j=n;j>=i;j--){
//       cout<<j;
//     }
//     cout<<endl;

//   }
// }
// ###############################
// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   for (int i = 1; i <= n; i++) {
//     int val = i;
//     for (int j = val; j >= 1; j--) {
//       cout << j;
//     }
//     val = val + 1;
//     cout << endl;
//   }
// }
// ############################3
// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= i; j++) {
//       cout << i - j + 1;
//     }
//     cout << endl;
//   }
// }
// ##########################
// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= i; j++) {
//       cout<<i-j+1<<" ";
//     }
//     cout << endl;
//   }
// }
// ##################################
// #include<iostream>
// using namespace std;
// int main(){
//   char n;
//   cin>>n;
//   for(char i='A';i<=n;i++){
//     for(char j='A';j<=n;j++){
//        cout<<i;
//     }
//     cout<<endl;
//   }
// }
// ###################################
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//        cout<<char('A'+i-1);
//     }
//     cout<<endl;
//   }
// }
// ############################
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//        cout<<char('A'+j-1);
//     }
//     cout<<endl;
//   }
// }
// ##################################
// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   char ch = 'A';
//   for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= n; j++) {
//       cout << ch;
//       ch = ch + 1;
//     }

//     cout << endl;
//   }
// }
// // ###################################
// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= n; j++) {
//       cout << char('A' + i + j - 2);
//     }
//     cout << endl;
//   }
// }
// #################################
// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= n; j++) {
//       cout << char('A' + i - 1);
//     }
//     cout << endl;
//   }
// }
// ###############################
// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= i; j++) {
//       cout << char('A' + i - 1);
//     }
//     cout << endl;
//   }
// }
// ##############################
// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   char ch = 'A';
//   for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= i; j++) {
//       cout << ch;
//       ch=ch+1;
//     }
//     cout << endl;
//   }
// }
// ##############################
// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   char ch = 'A';
//   for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= i; j++) {
//       char out = char(ch + i + j - 2);
//       cout << out;
//       out = out + 1;
//     }
//     cout << endl;
//   }
// }
// ##############################
// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   char ch = 'A';
//   for (int i = 1; i <= n; i++) {
//     int start = ch + n - i;
//     for (int j = 1; j <= i; j++) {
//       cout << char(start);
//       start = start + 1;
//     }

//     cout << endl;
//   }
// }
// ###############################
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   for(int i=1;i<=n;i++){
//     //space
//     for(int j=1;j<=n-i;j++){
//        cout<<" ";
//     }
//     //star
//     for(int k=1;k<=i;k++){
//       cout<<"*";
//     }
//     cout<<endl;
// }
// }
// ################################
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i+1;j++){
//       cout<<"*";
//     }
//     cout<<endl;
//   }
// }
// #########################################
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   for(int i=1;i<=n;i++){
//     //space
//     for(int j=1;j<=i-1;j++){
//       cout<<" ";
//     }
//     for(int j=1;j<=n-i+1;j++){
//       cout<<"*";
//     }
//     cout<<endl;
//   }
// }
// #############################
// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   for (int i = 1; i <= n; i++) {
//     // space
//     for (int j = 1; j <= i - 1; j++) {
//       cout << " ";
//     }
//     for (int j = 1; j <= n - i + 1; j++) {
//       cout << i;
//     }
//     cout << endl;
//   }
// }
// ###############################
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   for(int i=1;i<=n;i++){
//     //space
//     for(int j=1;j<=n-i;j++){
//       cout<<" ";
//     }
//     for(int j=1;j<=i;j++){
//       cout<<i;
//     }
//     cout<<endl;
//   }
// }
// #####################################
// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   for (int i = 1; i <= n; i++) {
//     // space
//     for (int j = 1; j <= i - 1; j++) {
//       cout << " ";
//     }
//     for (int j = i; j <= n; j++) {
//       cout << j;
//     }
//     cout << endl;
//   }
// }
// #####################################
// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   int count = 1;
//   for (int i = 1; i <= n; i++) {
//     // space
//     for (int j = 1; j <= n - i; j++) {
//       cout << " ";
//     }
//     for (int j = 1; j <= i; j++) {
//       cout << count;
//       count = count + 1;
//     }
//     cout << endl;
//   }
// }
// ###############################
// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;

//   for (int i = 1; i <= n; i++) {
//     // space
//     for (int j = 1; j <= n - i; j++) {
//       cout << " ";
//     }
//     // 1st triangle
//     for (int j = 1; j <= i; j++) {
//       cout << j;
//     }
//     // 2nd triangle
//         int val = i-1;
//         for (int j = 2; j <= i; j++) {
//           cout <<val;
//           val = val-1;
//         }
//   cout << endl;
//   }

// }
// ############################

// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;

//   for (int i = 1; i <= n; i++) {
//     int val = i;
//     for (int j = 1; j <= i; j++) {
//       cout <<val;
//       val = val-1;
//     }
//     cout << endl;
//   }
// }
// ####################################
// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   for (int i = 1; i <= n + 1; i++) {
//     cout << i << "";
//   }
//   for (int i = n + 1; i >= 1; i--) {
//     cout << i;
//   }

//   cout << "\n";
//   for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= n - i + 1; j++) {
//       cout << j;
//     }
//     for (int j = 1; j <= 2 * i; j++) {
//       cout << "*";
//     }
//     for (int j = n - i+1; j >= 1; j--) {
//       cout << j;
//     }
//     cout << endl;
//   }
// }
// ####################################
// #include<iostream>
// using namespace std;
// int fact=1;
// int find_Fact(int n){
//   for(int i=1;i<=n;i++){
//     fact = fact * i;
//   }
//   return fact;

// }
// int main(){
//   int n;
//   cin>>n;
//   int res = find_Fact(n);
//   cout<<"factorial of "<<n<<" will be :"<<res;
// }
// #########################################
// #include<iostream>
// using namespace std;
// void find_Table(int n){
//  for(int i=1;i<=10;i++){
//    cout<<n<<"*"<<i<<"="<<n*i<<endl;
//  }

// }
// int main(){
//   int n;
//   cin>>n;
//   find_Table(n);

// }
// ###############################
// #fibonacci series
// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   int a = 0;
//   int b = 1;
//   int next = a + b;
//   cout << a << " " << b << " " << next << " ";
//   for (int i = 0; i <= n; i++) {
//     a = b;
//     b = next;
//     next = a + b;
//     cout << next << " ";
//   }
// }

// ########################################
// Operators:
// 1) Bitwise operators -    &,||,~,^
// 2) Increment /Decrement operators- ++,--
// 3) Left shift (<< )/right shift(>>)
// #include <iostream>
// using namespace std;
// int main() {
//   int a = 3;
//   int b = 4;
//   cout << a << "&" << b << "=" << (a & b) << endl;
//   cout << a << "||" << b << "=" << (a || b) << endl;
//   cout << "~" << a << "=" << (~a) << endl;
//   cout << a << "^" << b << "=" << (a ^ b) << endl;
//   cout<< a << "<<" << b << "=" << (a << b) << endl;
//    cout<< a << ">>" << b << "=" << (a >> b) << endl;

//   cout<<(19>>1)<<endl; //9
//   cout<<(19>>2)<<endl; //4
//   cout<<(19<<1)<<endl; //38
//   cout<<(19<<2)<<endl;//76

//   cout<<"a++ = "<<a++<<endl;
//   cout<<"--a = "<<--a<<endl;
//   cout<<"++a = "<<++a<<endl;
//   cout<<"a-- = "<<a--<<endl;

// }
// 19>>1 = 1 baar 19 divide two kro
// 19>>2 = 2 baar 19 divide kro ek barr 2 se ek baar ans se
// 19<<1 = 2 se multiple ek baar
// 19<<2 = 2 baar multiply 19 ki

// ##############################
// Leetcode Question
// #include<iostream>
// using namespace std;
// int ans = 0;
// int find_sum(int digit){
//   ans = ans + digit;
//   return ans;
// }
// int anss = 1;
// int find_product(int digit){
//   anss = anss * digit;
//   return anss;
// }

// int main(){
//   int n;
//   cin>>n;
//   int sum=0,pro=1;
//   int digit;
//   while(n!=0){
//     digit =  n%10;
//     cout<<digit<<endl;

//     n = n/10;
//     sum = find_sum(digit);

//     pro = find_product(digit);

//   }
//   cout<<"sum will be : "<<sum<<endl;
//   cout<<"product will be : "<<pro<<endl;

// }
// ##########################################
// #include<iostream>
// using namespace std;
// int count = 0;
// int count_1s(int n){
//   while(n!=0){
//     int digit = n%10;
//     if (digit==1){
//       count += 1;
//     }
//     n = n/10;

// }
//   return count;
// }
// int main(){
//   int n;
//   cin>>n;
//   int res = count_1s(n);
//   cout<<"number of 1's: "<<res;
// }
// ################################
// #include<iostream>
// using namespace std;
// void find_1s_in_decimal(int n){
//   int count = 0;
//   while(n>0){
//     count++;
//     n = n&(n-1);
//   }
//   cout<<"1's will be: "<<count;
// }

// int main(){
//   int n;
//   cin>>n;
//   find_1s_in_decimal(n);

// }
// ########################################
// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   int digit;
//   bool isnegative = (n<0);

//   if (isnegative) {
//     n = abs(n);
//     cout<<"-";
//   }
//   if (n > 0) {
//     while (n != 0) {
//       digit = n % 10;
//       if (n > 0) {
//         cout << digit;
//       }
//       else{
//         cout<<0;
//       }
//       n = n / 10;
//     }
//   }

// }
// // ########################################
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main() {
//   // decimal to binary
//   int n;
//   cin >> n;
//   int bit=0;
//   int reverse = 0;
//   int i = 0;
//   while (n != 0) {
//     bit = n&1; //if it give 1 then its an odd number otherwise an even
//     reverse = (bit * pow(10,i))+ reverse;
//     cout<<"reverse "<<reverse<<endl;
//     n = n >> 1;
//     i++;
//   }
//   cout <<"binary form will be :"<< reverse;
// }
// // #################################
// #include<math.h>
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   int i=0;
//   int bit=0;
//   int ans=0;
//   while(n!=0){
//     bit = n&1;
//     ans =( bit * pow(10,i))+ans;
//     n=n>>1;
//     i++;
//   }
//   cout<<"binary conversion :"<<ans;
// }

// #######################################
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;

//   string ans="";
//   while(n!=0){
//     int r=n%2;
//     if(r==0){
//       ans+='0';
//     }
//     else{
//       ans+='1';
//     }
//     n=n>>1;
//   }
//   reverse(ans.begin(),ans.end());
//     cout<<ans;
// }
// ###########################
// note - if we use & then >> use, if % then use /
// binary to decimal
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   int i = 0;
//   int ans = 0;
//   int digit = 0;
//   while (n != 0) {
//     digit = n % 10;
//     if (digit == 1) {
//       ans = ans + (digit * pow(2, i));
//     }
//     n=n/10;
//     i++;

//   }
//   cout<<"decimal conversion will be :"<<ans;
// }
// // #####################################
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   //Decimal to binary
//   int n;
//   cin>>n;
//   string ans="";
//   while(n!=0){
//     int bit = n&1;
//     if (bit ==1){
//       ans +="1";
//     }
//     else{
//       ans +="0";
//     }
//     n=n>>1;

//   }
//   reverse(ans.begin(),ans.end());
//   cout<<ans;

// }
// ################################
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//   //binary to decimal
//   int n;
//   cin>>n;
//   int ans=0;
//   int i=0;
//   while(n!=0){
//     int digit = n%10;

//     ans = pow(2,i) * digit + ans;

//     n=n/10;
//     i++;
//   }
//   cout<<ans;
// }

// ############################
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   int digit=0;
//   string ans = "";
//   bool isnegative = n<0;
//   if (isnegative){
//       n=abs(n);
//       cout<<"-";
//   }
//   if (n > 0) {
//       while (n != 0) {
//           digit = n % 10;
//           if(n>0){
//               cout<<digit;
//           }
//           else{
//               cout<<0;
//           }
//           n=n/10;
//       }
//         cout<<ans;
//       }

//   }

// ######################################
// #include<iostream>
// using namespace std;
// int main(){

//     int x;
//     cin>>x;

//     if (x < 0) {
//         x = abs(x);
//         cout << "-";
//     }
//     if (x > 0) {

//         while (x != 0) {
//             int digit = x % 10;
//             if (x > 0) {
//                 cout << digit;
//             } else {
//                 cout << 0;
//             }

//             x = x / 10;
//         }

//     }

// }

// #############################################
// #include<iostream>
// using namespace std;
// int main(){
//     int ans = 0;
//     int x;
//     cin>>x;
//         while (x != 0) {
//                 int digit = x % 10;
//                 if((ans < INT_MIN /10 )||( ans > INT_MAX/10)){
//                     return 0;
//                 }
//                 ans = (ans*10)+digit;

//                 x = x / 10;
//             }
//             cout<< ans;
//     }
// }
// ##############################################
// binary of base 10 integer
// #include<iostream>
//  #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     string ans = "";
//     while(n!=0){
//         int bit = n&1;
//         if(bit==1){
//             ans +="1";
//         }
//         else{
//             ans +='0';
//         }
//         n=n>>1;
//     }

//     reverse(ans.begin(),ans.end());
//     cout<<ans;

// }

// ##################################
// #include<iostream>
//  #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    int m=n;
//    int mask=0;
//    if(n==0){
//     return 1;
//    }
//    while(m!=0){
//     mask = (mask<<1)|1;
//     m=m>>1;
//    }
//    int ans = (~n) & mask;
//    cout<<"complemen of "<<n<<" : "<<ans;

// }
// ########################################
// power of 2
// #include<iostream>
// #include<bits/stdc++.h>
// #include<math.h>
// using namespace std;
// int main(){
//    int n;
//     cin>>n;
//     for(int i=0;i<=30;i++){
//       int ans = pow(2,i);
//       if (ans == n){
//           cout<< "true";
//       }
//       else{
//         cout<<"false";
//       }
//     }
// }
// ###############################################
// #include <iostream>
// using namespace std;
// int main() {
//   int num = 6;
//   switch (num) {
//   case 1:
//     cout << "Sunday";
//     break;
//   case 2:
//     cout << "Monday";
//     break;
//   case 3:
//     cout << "Tuesday";
//     break;
//   case 4:
//     cout << "Wednesday";
//     break;
//   default:
//     cout << "Thursday";
//   }
// }

// #################################################
// #solution to come out of infinite loop
// #include<iostream>
// using namespace std;
// int main(){
//   while(1){
//     int num = 6;
//     switch (num) {
//     case 1:
//       cout << "Sunday";
//       break;
//     case 2:
//       cout << "Monday";
//       break;
//     case 3:
//       cout << "Tuesday";
//       break;
//     case 4:
//       cout << "Wednesday";
//       break;
//     default:
//       cout << "Thursday";
//     }
//     exit(1);
//   }
// }
// ##########################################
// lead to infinite condition due to continue statement
// #include<iostream>
// using namespace std;
// int main(){
//   while(1){
//     int num = 1;
//     switch (num) {
//     case 1:
//       cout << "Sunday";
//       continue;
//     case 2:
//       cout << "Monday";
//       continue;
//     case 3:
//       cout << "Tuesday";
//       continue;
//     case 4:
//       cout << "Wednesday";
//       continue;
//     default:
//       cout << "Thursday";
//     }
//     exit(1);
//   }
// }
// #####################################
// GIves error
// #include <iostream>
// using namespace std;
// int main() {
//   int num = 6;
//   switch (num) {
//   case 1:
//     cout << "Sunday";
//   continue;
//   case 2:
//     cout << "Monday";
//     continue;
//   case 3:
//     cout << "Tuesday";
//     continue;
//   case 4:
//     cout << "Wednesday";
//     continue;
//   default:
//     cout << "Thursday";
//   }
// }
// #################################
// Calculator
// #include<iostream>
// using namespace std;
// int main(){
//   int a,b;
//   cin>>a>>b;
//   cout<<"a :"<<a<<endl;
//   cout<<"b :"<<b<<endl;
//   char oper;
//   cin>>oper;
//   cout<<"operator : "<<oper<<endl;
//   switch(oper){
//     case '+': cout<<"addition will be: "<<a+b<<endl;break;
//     case '-': cout<<"subtraction will be: "<<a-b<<endl;break;
//     case '/': cout<<"division will be: "<<a/b<<endl;break;
//     case '*': cout<<"multiplication will be: "<<a*b<<endl;break;
//     case '%': cout<<"modulus will be: "<<a%b<<endl;break;
//     default: cout<<"operator not valid";
//   }

// }
// ###########################################
// #include<iostream>
// using namespace std;
// int main(){
//   int total_amount;
//   int balc=0;
//   cin>>total_amount;
//   cout<<"total_amount will be:"<<total_amount<<endl;
//   int hundred_note = 0;
//   int fifty_note = 0;
//   int twenty_note = 0;
//   int one_note = 0;
//   if(total_amount>=100){
//     hundred_note = total_amount/100;
//     balc = total_amount - hundred_note *100 ;
//     cout<<"Remaining balance after 100: "<<balc<<endl;
//   }

//   if(balc >=50){
//     fifty_note = balc /50;
//     balc = balc - fifty_note*50;
//     cout<<"Remaining balance after 50: "<<balc<<endl;

//   }
//   if (balc >=20){
//     twenty_note = balc/20;
//     balc=balc - twenty_note*20;
//     cout<<"Remaining balance after 20 : "<<balc<<endl;
//   }
//   if(balc >= 1){
//     one_note = balc/1;
//     balc = balc - one_note * 1;
//     cout<<"Remaining balance after 1 : "<<balc<<endl;
//   }

//   cout<<"hundred rupees notes: "<< hundred_note<<endl;
//   cout<<"fifty rupees notes: "<< fifty_note<<endl;
//   cout<<"twenty rupees notes: "<< twenty_note<<endl;
//   cout<<"one rupees notes: "<< one_note<<endl;
// }
// ###################################
// #include<iostream>
// using namespace std;
// int ans =1;
// int Find_Power_of_2(int a,int b){
//   for (int i=1;i<=b;i++){
//     ans = a * ans ;
//   }
//   return ans;
// }
// int main(){
//   int a,b;
//   cin>>a>>b;

//   cout<<"a:"<<a<<endl;
//   cout<<"b:"<<b<<endl;
//   int ans = Find_Power_of_2(a,b);
//   cout<<a<<"^"<<b<<"="<<ans<<endl;
// }
// ####################################
// notes - n&1 == 1 then will be odd otherwise even
// #include<iostream>
// using namespace std;
// int check_even_odd(int n){
//   if (n&1){
//     return 0;
//   }
//   return 1;
// }
// int main(){
//   int n;
//   cin>>n;
//   int ans = check_even_odd(n);
//   if (ans == 1){
//     cout<<n<<" is even";
//   }
//   else{
//      cout<<n<<" is odd";
//   }

// }
// #########################################
// #include<iostream>
// using namespace std;
// int fact = 1;
// int factorial(int n){
//   for(int i=1;i<=n;i++){
//      fact = fact * i;
//   }
//  return fact;
// }
// // int ncr=1;
// int find_nCr(int n, int r){
//   int ncr = factorial(n)/(factorial(r)*factorial(n-r));
//   return ncr;
// }
// int main(){
//   int n,r;
//   cin>>n>>r;
//   int ans = find_nCr(n, r);
//   cout<<n<<"C"<<r<<"="<<ans ;
// }

// ############################

// #####################################
// #include <iostream>
// using namespace std;

// int factorial(int n) {
//     int fact = 1; // Local variable
//     for (int i = 1; i <= n; i++) {
//         fact = fact * i;
//     }
//     return fact;
// }

// int find_nCr(int n, int r) {
//     int ncr = factorial(n) / (factorial(r) * factorial(n - r)); // Correct
//     order of operations return ncr;
// }

// int main() {
//     int n, r;
//     cout << "Enter values for n and r: ";
//     cin >> n >> r;
//     int ans = find_nCr(n, r);
//     cout << n << "C" << r << " = " << ans;
// }

// ###########################################
// #include<iostream>
// using namespace std;
// int fact = 1;
// int factorial(int n){
//   for(int i=1;i<=n;i++){
//      fact = fact * i;
//   }
//  return fact;
// }
// int main(){
//   int n;
//   cin>>n;
//   int fact = factorial(n);
//   cout<<fact;

// }
// ################################################################
// #include<iostream>
// using namespace std;
// int ans =0;
// int AP(int n){
//   ans = n*3+7;
//   return ans;
// }
// int main(){
//   int n;
//   cin>>n;
//   int ans = AP(n);
//   cout<<"ans: " <<ans<<endl;
// }
// ##############################################
// #include <iostream>
// using namespace std;
// int count = 0;
// int count_ones(int a) {
//   while (a != 0) {
//     if ((a % 10==1)) {
//       count += 1;
//     }
//     a = a / 10;
//   }
//   return count;

// }

// int main() {
//   int a;
//   cin >> a;
//   int ans = count_ones(a);
//   cout << ans << endl;
// }
// ####################################
// #include<iostream>
// using namespace std;
// int arr_init(int n,int arr){
//   for(int i=0;i<=n;i++){
//     arr[i]=1;

//   }
// }
// int main(){
//   int len;
//   cout<<"enter length of array:"<<endl;
//   cin>>len;
//   int arr[len];
//    arr_init(len,arr);

// }
// ##################################################
// #include <iostream>
// using namespace std;
// void arr_value(int len, int arr[]) {
//   cout << "first" << endl;
//   for (int i = 0; i <= len; i++) {
//     arr[i] = -24;
//   }
// }
// void arr_print(int len, int arr[]) {
//   cout << "second call" << endl;
//   for (int i = 0; i <= len; i++) {
//     cout << arr[i] << " ";
//   }
// }

// int main() {
//   // int len;
//   // cin >> len;
//   // int arr[len]; // array declaration

//   // arr_value(len, arr);
//   // cout << "initialization done" << endl;
//   // arr_print(len, arr);
//   // cout << "printing done" << endl;

//   string dost[3] = {"Aditya", "Deepak", "Abhinav"};
//   int num[] = {1, 2, 34, 1,7,7,6542,3};
//   cout << dost[1] << endl;
//   // cout<<"Size of string: "<<sizeof(string);

//   // cout<<"Size of integer: "<< sizeof(int);
//   cout <<"sizeof(dost)"<<sizeof(dost)<<"Size of string:
//   "<<sizeof(string)<<"="<<sizeof(dost) / sizeof(string)<<endl; cout <<
//   "sizeof(num)"<<sizeof(num)<<"sizeof(int) :"<<sizeof(int)<<"=" <<sizeof(num)
//   / sizeof(int);
// }

// ###########################################
// #include <iostream>
// using namespace std;
// void init(int arr[], int n) {

//   for (int i = 0; i <= n; i++) {
//     int val;
//     cout << "enter value:" << endl;
//     cin >> val;
//     arr[i] = val;
//   }
// }
// void display(int arr[], int n) {
//   for (int i = 0; i <= n; i++) {
//     cout << arr[i] << " ";
//   }
//   cout << "\n";
// }

// int find_min(int arr[], int n) {
//   int min = arr[0];
//   for (int i = 0; i <= n; i++) {
//     if (min > arr[i]) {
//       min = arr[i];
//     }
//   }
//   return min;
// }

// int find_max(int arr[], int n) {
//   int max = arr[0];
//   for (int i = 0; i <= n; i++) {
//     if (max < arr[i]) {
//       max = arr[i];
//     }
//     // or we also have function for min and max
//     // min (1,2) or max(5,9);

//   }
//   return max;
// }

// int main() {
//   int len;
//   cout << "enter size: " << endl;
//   cin >> len;
//   // int arr[len];      //bad practice
//   int arr[100];
//   init(arr, len);
//   display(arr, len);
//   cout << "everything is good" << endl;
//   int min = find_min(arr, len);
//   cout << "minimum element is:" << min << endl;
//   int max = find_max(arr, len);
//   cout << "maximum element is:" << max << endl;
// }
// ############################################3
// #include <iostream>
// using namespace std;
// int find_sum(int arr[], int len) {
//   int sum = 0;
//   for (int i = 0; i <= len; i++) {
//     cout << "arr[i] : " << arr[i] << endl;
//     sum += arr[i];
//   }
//   return sum;
// }
// int main() {
//   int arr[] = {2, 3, 4, 10, 45, 33};
//   int sum = find_sum(arr, 5);
//   cout << "sum of elements will be:" << sum;
// }
// ##################################################
// linear search
// #include <iostream>
// using namespace std;
// int find_key(int arr[], int n, int key) {
//   for (int i = 0; i <= n; i++) {
//     if (key == arr[i]) {
//       return 1;
//     }
//   }
//   return 0;
// }
// int main() {
//   int arr[100] = {20, 39, 42, 58, 63, 750, 80};
//   cout << "enter the element you wanna a find??";
//   int key;
//   cin >> key;
//   bool res = find_key(arr, 20, key); // here array base address is going so
//   if any changes
//                           // occurs in arr inside the function then that will
//                           // reflect to the original array also.
//   if(res==1){
//      cout << "found" << key << endl;
//   }
//   else{
//      cout << "Not found" << key << endl;
//   }

// }
// ################################################
// #include <iostream>
// using namespace std;
// void find_revrese(int arr[], int n) {
//   int start = 0;
//   int end = n - 1;
//   while (start <= end) {
//     // cout << "arr[start] : " << arr[start] << endl;
//     // cout << "arr[end] : " << arr[end] << endl;
//     swap(arr[start], arr[end]);
//     start++;
//     end--;
//   }
// }

// void display(int arr[], int n) {
//   for (int i = 0; i < n; i++) {

//     cout << arr[i] << " ";
//   }
//   cout << "\n";
// }

// int main() {

//   int arr[5] = {2, 67, 86, 98, 40};

//   find_revrese(arr, 5);
//   display(arr, 5);
// }

// ##################################################
// reverse array
// #include <iostream>
// using namespace std;

// void initail(int arr[], int n) {
//   for (int i = 0; i < n; i++) {
//     int val;
//     cout << "enter value";
//     cin >> val;
//     arr[i] = val;
//   }
// }
// void dipslay(int arr[], int n) {
//   for (int i = 0; i < n; i++) {
//     cout << arr[i] << " ";
//   }
// }
// void reverse(int arr[], int n) {
//   int start = 0;
//   int end = n - 1;
//   while(start<=end) {
//     swap(arr[start], arr[end]);
//     start++;
//     end--;
//   }
//   cout << "\n";
//   dipslay(arr, n);
// }
// int main() {
//   int len = 5;
//   int arr[100];
//   initail(arr, len);
//   dipslay(arr, len);
//   reverse(arr, len);

// }
// #################################################
// swap alternate array
// #include <iostream>
// using namespace std;

// void initail(int arr[], int n) {
//   for (int i = 0; i < n; i++) {
//     int val;
//     cout << "enter value";
//     cin >> val;
//     arr[i] = val;
//   }
// }
// void dipslay(int arr[], int n) {
//   for (int i = 0; i < n; i++) {
//     cout << arr[i] << " ";
//   }
// }
// void Swap_Alternate(int arr[], int n) {
//   int i = 0;
//   while (i + 1 < n) {
//     swap(arr[i], arr[i + 1]);
//     i += 2;
//   }
//   cout << '\n';
//   dipslay(arr, n);
// }

// int main() {
//   // int len = 5;
//   // int arr[100];
//   // initail(arr, len);
//   // dipslay(arr, len);

//   int even[8] = {23, 45, 26, 67, 4, 6, 2, 5};
//   Swap_Alternate(even, 8);

//   cout << "\n";
//   int odd[7] = {2, 4, 6, 7, 9, 8, 2};
//   Swap_Alternate(odd, 7);
// }
// #######################################
// #include <iostream>
// using namespace std;

// void initail(int arr[], int n) {
//   for (int i = 0; i < n; i++) {
//     int val;
//     cout << "enter value";
//     cin >> val;
//     arr[i] = val;
//   }
// }
// void dipslay(int arr[], int n) {
//   for (int i = 0; i < n; i++) {
//     cout << arr[i] << " ";
//   }
// }
// void Swap_Alternate(int arr[], int n) {
//   int i = 0;
//   while (i + 1 < n) {
//     // swap(arr[i], arr[i + 1]);
//     //implementing swap
//     int temp = arr[i];
//     arr[i] = arr[i+1];
//     arr[i+1]=temp;
//     i += 2;
//   }
//   cout << '\n';
//   dipslay(arr, n);
// }

// int main() {
//   // int len = 5;
//   // int arr[100];
//   // initail(arr, len);
//   // dipslay(arr, len);

//   int even[8] = {23, 45, 26, 67, 4, 6, 2, 5};
//   Swap_Alternate(even, 8);

//   cout << "\n";
//   int odd[7] = {2, 4, 6, 7, 9, 8, 2};
//   Swap_Alternate(odd, 7);
// }
// ######################################
// #include <iostream>
// #include <unordered_map>
// #include <vector>

// using namespace std;

// int main() {
//     vector<int> arr = {1, 2, 2, 1, 1, 3};
//     unordered_map<int, int> dict;

//     // Equivalent of the first Python loop to count occurrences
//     for (int element : arr) {
//         if (dict.count(element)) { // Check if the key exists
//             dict[element]++;
//         } else {
//             dict[element] = 1;
//         }
//     }

//     // Equivalent of the first Python print(dict)
//     cout << "{";
//     bool first = true;
//     for (const auto& pair : dict) {
//         if (!first) {
//             cout << ", ";
//         }
//         cout << pair.first << ": " << pair.second;
//         first = false;
//     }
//     cout << "}" << endl;

//     // Equivalent of the second Python loop
//     for (const auto& pair : dict) {
//         cout << "unique element is: " << pair.first << endl;
//         if (pair.second == 1) {
//             cout << "True" << endl;
//             break;
//         } else {
//             cout << "False" << endl;
//         }
//     }

//     return 0;
// }   //need to be checked
// ######################################
// Find_unique
// #include<iostream>
// using namespace std;
// int find_unique(int arr[],int n){
//     int ans=0;
//     for (int i=0;i<n;i++){
//              ans = ans ^ arr[i];
//         }
//     return ans;
// }
// int main(){
//     int n=7;
//     int arr[]={4,5,5,4,1,1,3};
//     int ans = find_unique(arr,n);
//     cout<<"unique element will be:"<<ans;

// }

// #######################################
// // unique number of occurences
// #include <iostream>
// #include <unordered_map>
// #include <vector>
// using namespace std;
// unordered_map<int, int> find_unique_number_of_occurences(int arr[], int n) {
//   unordered_map<int, int> dict;
//   for (int i = 0; i < n; i++) {
//     dict[arr[i]]++;
//   }
//   return dict;
// }
// int main() {
//   int arr[] = {1, 2, 2, 1, 1, 3};
//   int size = sizeof(arr) / sizeof(int);

//   // cout<<size;
//   unordered_map<int, int> result = find_unique_number_of_occurences(arr,
//   size);

//   // to print the vector
//   // for (auto i : result)
//   // cout << i << " ";
//   // to print unordered map
//   vector<int> values;
//   for (const auto &it : result) {
//     values.push_back(it.second);
//     cout << it.first << " : " << it.second << endl;
//   }
//   cout << "Values of map dict are:" << endl;
//   for (int i=0;i<values.size();i++) {
//      // cout<<values[i]<<" ";
//      int start=0;
//      int end=(values.size())-1;
//      while(start<=end){
//        if(values[i+1]<size){
//          if(values[i]==values[i+1]){
//            cout<<false;
//            break;
//          }
//      cout<<true;
//          break;
//        }

//      }

//   }

//   }

// ##################################################
// unique number of occurences
// #include <iostream>
// #include <unordered_map>
// #include <vector>
// using namespace std;
// int find_unique_number_of_occurences(int arr[], int n) {
//   unordered_map<int, int> dict;
//   for (int i = 0; i < n; i++) {
//     dict[arr[i]]++;
//   }
//   vector<int> values;
//   // to print unordered map
//   for (const auto &it : dict) {
//     values.push_back(it.second);
//     cout << it.first << " : " << it.second << endl;
//   }
//   cout << "Values of map dict are:" << endl;
//   for (int i=0;i<values.size();i++) {
//      cout<<values[i]<<" ";
//   cout<<endl;

//   for(int i=0;i<values.size()-1;i++){

//     if(values[i]==values[i+1]){
//            return false;
//          }

//   }
//   }
// return true;
// }
//  int helper(vector<int>&arr){
//   unordered_map<int,int>mp;
//    for(auto it:arr){
//      mp[it]++;
//    }
//    for(auto it:mp){
//      if(it.second==2){
//        return it.first;
//      }
//    }
//    return -1;
//  }
// int main() {
//   // string a="abbcazfgtuvzyyyyy";
//   // int freq[26]={0};
//   // for(int i=0;i<a.length();i++){
//   //   char ch=a[i];
//   //   freq[ch-'a']++;
//   // }
//   // for(int i=0;i<26;i++){
//   //   cout<<freq[i]<<" ";
//   // }
//   cout<<"\n";
//   int arr[] = {1, 2, 2, 1, 1, 3};
//   int size = sizeof(arr) / sizeof(int);

//   // cout<<size;
//   cout<<(find_unique_number_of_occurences(arr, size)==1?"true":"false");

//   // to print the vector
//   // for (auto i : result)
//   // cout << i << " ";

//   }

// ##############################
// find Duplicates
// #include<iostream>
// using namespace std;
// int find_duplicate(int arr[],int n){
//     int ans = 0;
//     for(int i=0;i<n;i++){
//         ans = ans^arr[i];
//     }
//     for(int i=1;i<n;i++){
//         ans = ans^i;
//     }
//     return ans;

// }
// int main(){
//     int len=5;
//     int arr[]= { 1, 2, 3, 4, 4};
//     int ans = find_duplicate(arr,len);
//     cout<<"duplicate element will be : "<<ans;

// }

// ##########################################
// FInd_all_duplicates

// ##############################################
// intersection
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> find_intersection(int arr1[],int arr2[],int n,int m){
//   int i=0;
//   int j=0;
//   vector <int>ans;
//   while(i<n && j<m){
//     if(arr1[i]<arr2[j]){
//       i++;
//     }
//     else if(arr1[i]==arr2[j]){
//       ans.push_back(arr1[i]);
//       i++;
//       j++;
//     }
//     else if(arr1[i]>arr2[j]){
//       j++;
//     }
//   }
//   return ans;
// }
// int main(){
//   int n = 4;
//   int m = 2;

//   vector <int> arr1={1,2,3,4};
//   vector <int> arr2={2,3};
//   vector <int>result;
//   result = find_intersection(arr1,arr2,n,m);
//   cout<<result;
// }
// ###################################
// #include <bits/stdc++.h>
// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int>
// &arr2, int m)
// {
//   // Write your code here.
//   vector <int> ans;
//   int i=0;
//   int j=0;
//   while(i<n && j<m){
//     if(arr1[i]<arr2[j]){
//       i++;
//     }
//     else if(arr1[i]==arr2[j]){
//             ans.push_back(arr1[i]);
//       i++;
//       j++;

//     }
//     else if(arr1[i]>arr2[j]){
//       j++;
//     }
//   }
//   return ans;
// }
// #################################
// pair sum
// #include<iostream>
// #include<vector>
// using namespace std;
// vector <vector<int>> ans;
// vector <int> find_pairSum(int arr[],int s){
//   for(int i=0;i<arr.size();i++){
//     for(int j=i+1;j<arr.size();j++){
//       if(arr[i]+arr[j]==s){
//         vector <int> temp;
//         temp.push_back(min(arr[i],arr[j]));
//         temp.push_back(max(arr[i],arr[j]));
//         ans.push_back(temp);

//       }
//     }
//   }
//   sort(ans.begin(),ans.end());
//   return ans;
// }
// int main(){
//   int arr[]={1,2,3,4,5};
//   int s=5;
//   find_pairSum(arr,s);
// }
// #############################################
// #include <bits/stdc++.h>

// vector<vector<int>> pairSum(vector<int> &arr, int s){
//    // Write your code here.
//    vector<vector<int>> ans;
//    for(int i=0;i<arr.size();i++){
//       for(int j=i+1;j<arr.size();j++){
//          if((arr[i]+arr[j])==s){
//             vector<int> temp;
//             temp.push_back(min(arr[i],arr[j]));
//             temp.push_back(max(arr[i],arr[j]));
//             ans.push_back(temp);
//       }
//       }
//    }
//    sort(ans.begin(),ans.end());
//    return ans;

// }
// #################################
// triplet or threesum
// #include <bits/stdc++.h>
// vector<vector<int>> findTriplets(vector<int>nums, int n, int target) {
//   // Write your code here.
//   vector<vector<int>> ans;
//   sort(nums.begin(),nums.end());
//   for(int i=0;i<n;i++){
//     if(i>0 && nums[i]==nums[i-1])continue;
//     int j=i+1,k=n-1;
//     while(j<k){
//       int sum=nums[i]+nums[j]+nums[k];
//       if(sum==target){
//         vector<int>temp={nums[i],nums[j],nums[k]};
//         ans.push_back(temp);
//         j++;k--;
//         while(j<k && nums[j]==nums[j-1])j++;
//         while(j<k && nums[k]==nums[k+1])k--;
//       }
//       else if(sum<target){
//         j++;
//       }
//       else{
//         k--;
//       }
//     }
//   }
//   return ans;
// }
// ########################################
// #include<iostream>
// using namespace std;
// void print_Array(int arr[],int n){
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";

//   }
// }

// void sort01_Array(int arr[],int n){
//   int i=0;
//   int j=n-1;
//   while(i<j){
//     while(arr[i]==0){
//       i++;
//     }
//     while(arr[j]==1){
//         j--;
//       }
//     // iska mtlb yha phunch gye ho
//     // (arr[i]==1 && arr[j]==0)
//     swap(arr[i],arr[j]);
//     i++;
//     j--;
//     }
//   cout<<"\n";
//   print_Array(arr,n);

//   }

// int main(){
//   int arr[]={0,1,1,1,1,0,1,0,0,1,0,1};

//   int size = sizeof(arr)/sizeof(int);
//   print_Array(arr,size);
//   sort01_Array(arr,size);
// }
// ####################################
// Number of occurrence
// #include <iostream>
// #include <unordered_map>
// using namespace std;
// int main() {
//   int arr[] = {1, 2, 2, 1, 3, 3, 1, 2};
//   int x = 2;
//   unordered_map<int, int> mp;
//   for (auto it : arr) {
//     mp[it]++;
//   }
//   for (auto it : mp) {
//     if (it.first == x) {
//       cout << it.second;
//     }
//   }
// }
// ###########################################
#include<iostream>
using namespace std;
int main(){
    cout<<"hello";
}