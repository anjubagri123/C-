// #include <stdio.h>
// #include<iostream>
// using namespace std;
// int main()
// {

//pointers
// int i=9;
// int *p=&i;
// int **ptr=&p;
// cout<<"Address of p: "<<p<<endl;
// cout<<"Address of i: "<<&i<<endl;
// cout<<"value of *ptr: "<<*ptr<<endl;
// //double pointers

// cout<<"Address of ptr: "<<ptr<<endl;
// cout<<"Address of p: "<<&p<<endl;

//  cout<<"value of i: "<<i<<endl;
//  cout<<"value of i: "<<*p<<endl;
//  cout<<"value of i: "<<**ptr<<endl;

//  cout<<"Aggress of &p: "<<&p<<endl;
//  cout<<"value of ptr: "<<ptr<<endl;
//   cout<<"Address of p: "<<p<<endl;
// cout<<"value of *ptr: "<<*ptr<<endl;

// }

// ######################################################int32_t
// #include<iostream>
// using namespace std;
// void update_pointer(int **ptr){
//     // p=p+1;   //kuch change hoga-No

//     // *p=*p+1;    //change hua?yes

//     **ptr=**ptr+1;   //change hua?
// }
// int main(){
//     int i=7;
//     int *p=&i;
//     int **ptr=&p;
//     cout<<"Before function call: "<<endl;
//     cout<<i<<endl;
//     cout<<p<<endl;
//     cout<<ptr<<endl;
//      cout<<endl;
//      cout<<endl;

//     update_pointer(ptr);

//     cout<<"After function call: "<<endl;
//     cout<<i<<endl;
//     cout<<p<<endl;
//     cout<<ptr<<endl;
//     cout<<endl;

// }

// ############################################
// #include<iostream>
// using namespace std;
// void update_by_value(int n){
//     n++;
// }
// void update_by_reference(int &m){
//     m++;
// }

// int& update_by_reference(int n){
//     int num = 10;
//     int &ans = num;
//     return ans;
// }

//will give same problem that these are local variable we cant return it.
// int* return_by_reference(int n){
//     cout<<"(hii...........";
//     int v=3;
//     int* ptr = &v;
//     return ptr;
// }

// int main(){
//     /*
//     int i=8;
//     int &j=i;
//     cout<<i<<endl;
//     i++;
//     cout<<i<<endl;
//     j++;
//     cout<<i<<endl;
//     cout<<j<<endl;
//     */
//     cout<<"call by value "<<endl;
//     int n=9;
//     cout<<"before : "<<n<<endl;
//     update_by_value(n);
//     cout<<"after : "<<n<<endl;


//     cout<<endl;
//     cout<<endl;
//     cout<<"call by reference "<<endl;
//     int m=9;
//     cout<<"before :"<<m<<endl;
//     update_by_reference(m);
//     cout<<"after : "<<m<<endl;

//     cout<<"return_by_reference "<<endl;
//     int s=9;
//     cout<<"before :"<<s<<endl;
//     return_by_reference(s);
//     cout<<"after : "<<s<<endl;
//     //bad practice
//     // cout<<"return by reference "<<endl;
//     // int c=5;
//     // int res = update_by_reference(c);
//     // cout<<res<<endl;
// }

// ########################################################
// #include<iostream>
// using namespace std;
// int GetSum(int arr[],int n){
// // int GetSum(int * arr,int n){
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];

//     }
//     return sum;
// }
// int main(){
// char a = 'a';
// char *ch = &a;
// cout<<"size of charater variable: "<<sizeof(a)<<endl;
// cout<<"size of charater pointer: "<<sizeof(ch)<<endl;

// //dynamic memory allocation
// char *s =new char;

// cout<<"size of charater pointer: "<<sizeof(s)<<endl;
// cout<<"size of charater pointer: "<<sizeof(char)<<endl;

//     int n;
//     cin>>n;
//     int *arr=new int[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int ans = GetSum(arr,n);
//     cout<<"answwr will be: "<<ans<<endl;

// }

// ##################################################
// #include<iostream>
// using namespace std;
// int main(){
//
//         int n;
//         cin>>n;
//         // int *arr = new int[n]; 1d  --> n no of blocks exists
//         int **arr = new int*[n];   //2d--> n no of row having 1 d arrray exists
//         //creation of martix
//         for(int i=0;i<n;i++){
//             arr[i]=new int[n];
//         }
//         //taking inputs
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 cin>>arr[i][j];
//             }
//         }
//          cout<<endl;
//           cout<<endl;
//         //printing
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 cout<<arr[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//          cout<<endl;
//           cout<<endl;
//     }
//
// ################################################
// #include<iostream>
// using namespace std;
// int main(){

//         int row;
//         cout<<"row :"<<endl;
//         cin>>row;

//         int col;
//         cout<<"col :"<<endl;
//         cin>>col;
//         // int *arr = new int[n]; 1d  --> n no of blocks exists
//         int **arr = new int*[row];   //2d--> n no of row having 1 d arrray exists
//         //creation of martix
//         for(int i=0;i<row;i++){
//             arr[i]=new int[col];
//         }
//         //taking inputs
//         for(int i=0;i<row;i++){
//             for(int j=0;j<col;j++){
//                 cin>>arr[i][j];
//             }
//         }
//          cout<<endl;
//           cout<<endl;
//         //printing
//         for(int i=0;i<row;i++){
//             for(int j=0;j<col;j++){
//                 cout<<arr[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//          cout<<endl;
//           cout<<endl;
//          //releasing memory
//          for(int i=0;i<row;i++){
//              delete [] arr[i];
//          }
//          delete []arr;
//     }
// ###################################
// Macros->dont consume memory as it calls then the it get replace with the value before compilation,also immutable
// #include<iostream>
// using namespace std;
// #define pi 3.14
// int main(){
//     int r=5;
//     // double pi=3.14;
//     double area = pi*r*r;
//     cout<<"area : "<<area<<endl;

// }
// ###########################################
// inline function-> same a single lined function can make as inline so that it get replaced before compilation.
// performance better, better readability,No extra memory usage,.no function call overhead
// #include<iostream>
// using namespace std;

// // int get_Max(int a,int b){
// //     return a>b?a:b;

// // }

// inline int get_Max(int a,int b){
//     return a>b?a:b;

// }

// int main(){
//     int a=12,b=10;
//     int ans = get_Max(a,b);
//     cout<<"ans: "<<ans;
// }

// ##################################
// #include<iostream>
// using namespace std;

// void Print_Array(int arr[],int n,int start=0){ //default argument -> dena h to ddede bhai wrna 0 se shuru kr lunga
//     for(int i=start;i<n;i++){
//         cout<<arr[i]<<endl;
//     }

// }


// int main(){
//     // int n;
//     // cin>>n;
//     // int *arr=new int[n];
//     int arr[5]={2,4,5,6,7};
//     int n=5;
//     Print_Array(arr,n,3);

// }


// #######################################
// Using dynanic array
// #include<iostream>
// using namespace std;

// void Print_Array(int arr[],int n,int start=0){ //default argument -> dena h to ddede bhai wrna 0 se shuru kr lunga
//     for(int i=start;i<n;i++){
//         cout<<arr[i]<<endl;
//     }

// }


// int main(){
//     int n;
//     cin>>n;
//     int *arr=new int[n];    //dynamic mamory allocation
//     // int arr[5]={2,4,5,6,7};
//     //taking inputs
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     //printing
//     Print_Array(arr,n,3);

// }


// // #######################################
// Factorial
// #include<iostream>
// using namespace std;
// int facto(int n){
//     if(n<0){
//         return 1;
//     }
//     int fact =1;
//     for(int i=1;i<=n;i++){
//         fact = fact * i;
//     }
//     return fact;
// }
// int main(){
//     int n;
//     cin>>n;
//     int ans = facto(n);
//     cout<<ans;
// }
// ##########################################/*
// #include<iostream>
// using namespace std;
// int facto(int n){

//     if(n==0){
//         return 1;
//     }
//     // #############
//     // int chotti = facto(n-1);
//     // int badi = n*chotti;
//     // return badi;
//     // #################REplaced by#########
//     return n*facto(n-1);


// }
// int main(){
//     int n;
//     cin>>n;
//     int ans = facto(n);
//     cout<<ans;
// }

// ##############################################
// #include<iostream>
// using namespace std;
// int powerof_Two(int n){
//     if(n==0){
//         return 1;
//     }
//     return 2*powerof_Two(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     int ans = powerof_Two(n);
//     cout<<"ans: "<<ans;

// }

// ###########################################
//printing counting-decreasing order
// #include<iostream>
// using namespace std;
// int printCOunting(int n){
//     if(n==0){
//         return 1;
//     }
//     cout<<n<<endl;
//     return printCOunting(n-1);   //tail recursion
// }
// int main(){
//     int n;
//     cin>>n;
//     printCOunting(n);
// }

// ##############################/*
//printing counting - in incresing order
// #include<iostream>
// using namespace std;
// void printCOunting(int n){
//     if(n==0){
//         return ;
//     }
// //recursive relation
//     printCOunting(n-1); //head recursion
//     cout<<n<<endl;
// }
// int main(){
//     int n;
//     cin>>n;
//     printCOunting(n);
// }

// ################################################
// #include<iostream>
// using namespace std;
// int reaching_home(int src,int dest){
//     if(src==dest){
//         cout<<"reached home"<<endl;
//         return 1;
//     }
//     cout<<"here i am: "<<src<<endl;
//     return reaching_home(src+1,dest);

// }
// int main(){
//     int src=1;
//     int dest = 15;
//     reaching_home(src,dest);
// }
// ########################################
// #include<iostream>
// using namespace std;
// int fibonacci(int n){

//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }

//     return fibonacci(n-1)+fibonacci(n-2);
// }
// int main(){
//     int n;
//     cin>>n;
//     int ans = fibonacci(n);
//     cout<<ans<<endl;
// }

// ################################################
// #include<iostream>
// using namespace std;
// void fibo(int n,int a,int b,int next){
//     int temp;
//     for(int i=2;i<n;i++){
//         temp = a;
//         a =  b;
//         b= next;
//         next = a+b;
//         cout<<next<<" ";

//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int a=0,b=1,next = a+b;
//     cout<<a<<" "<<b<<" "<<next<<" ";
//     fibo(n,a,b,next);

// }
// ########################################/*
// #include<iostream>
// using namespace std;
// int print_ways(int n){
//     if(n<0){
//         return 0;
//     }
//     if(n==0){
//         return 1;
//     }
//     return print_ways(n-1)+print_ways(n-2);
// }
// int main(){
//     int n;
//     cin>>n;
//     int ans = print_ways(n);
//     cout<<ans;
// }
// #################################################
// Say number:423
// #include<iostream>
// using namespace std;
// void Say_number(int n){
//     int digit;
//     while(n>0){
//         digit=n%10;
//         n=n/10;
//         // cout<<digit;
//         string arr[10]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

//         cout<<arr[digit]<<" ";

//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     Say_number(n);


// }
// #####################################################
// #include<iostream>
// using namespace std;
// void Say_number(int n,string arr[]){
//     //base case
//     if(n==0){
//         return ;
//     }
//     //processing
//     int digit = n%10;
//     n=n/10;

//     //recursive call
//     Say_number(n,arr);
//     cout<<arr[digit]<<" ";
// }

// int main(){
//     int n;
//     cin>>n;
//     string arr[10]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
//     Say_number(n,arr);

// }

// ################################################################
// Checking is sorted using recursion
// #include<iostream>
// using namespace std;
// bool isSorted(int arr[],int size){
//     //base casse
//     if(size==0 || size==1){
//         return true;
//     }
//     //processing
//     if(arr[0]>arr[0+1]){
//         return false;
//     }
//     //recursive call
//     else{
//         bool ans = isSorted(arr+1,size-1);
//         return ans;
//     }

// }
// int main(){
//     int arr[]={2,4,5,6,7,7};
//     int size=6;
//     if(isSorted(arr,size)){
//         cout<<"Array is sorted"<<endl;
//     }
//     else{
//         cout<<"Array is not sorted"<<endl;
//     }

// }

// ################################################
// find_Sum of array elements
// #include<iostream>
// using namespace std;
// int find_Sum(int *arr,int size){
//     //base casse
//     if(size==0){
//         return 0;
//     }

//     if(size==1){
//         return arr[0];
//     }
//     //processing


//     int ans = find_Sum(arr+1,size-1);
//     int sum = arr[0]+ans;
//     return sum;

// }
// int main(){
//     int arr[]={5,8,9,8};
//     int size=4;

//     int res = find_Sum(arr,size);
//     cout<<"sum of array :"<<res<<endl;
// }

// ###############################################
// #include<iostream>
// using namespace std;
// bool linear_Search(int *arr,int size,int n){
//     //base casse
//     if(size==0){
//         return 0;
//     }

//     if(n==arr[0]){
//         return 1;
//     }
//     else{
//          //recursive call
//         bool ans = linear_Search(arr+1,size-1,n);
//         return ans;
//     }
// }
// int main(){
//     int arr[]={5,80,90,800};
//     int size=4;
//     int n=50;
//     if(linear_Search(arr,size,n)){
//         cout<<"found!!!"<<endl;
//     }
//     else{
//         cout<<"Not FOundp"<<endl;
//     }
// }
// ######################################
// #include<iostream>
// using namespace std;
// void printArry(int *arr,int start,int end){
//     for(int i=start;i<=end;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     cout<<endl;
// }

// bool binary_Search(int *arr,int start,int end,int key){
//     //base case

//     cout<<endl;
//     printArry(arr,start,end);
//     int mid = start+(end-start)/2;
//     cout<<"mid will be : "<<arr[mid]<<endl;
//     if(start>end){
//         return false;
//     }
//     if(arr[mid]==key){
//         return true;
//     }

//     if(arr[mid]>key){

//         return binary_Search(arr,start,mid-1,key);
//     }
//     else{

//         return binary_Search(arr,mid+1,end,key);
//     }

// }
// int main(){
//     int arr[]={10,20,30,40,50,60,70,80,90};
//     int size=8;
//     int n=50;
//     int start=0;
//     int end=size-1;

//     if(binary_Search(arr,start,end,n)){
//             cout<<"Found!!!"<<endl;
//      }
//     else{
//             cout<<"Not FOund"<<endl;
//         }

// }
// #######################################/*
// reverse using recursion
// #include<iostream>
// using namespace std;
// void reverseString(string& name,int length,int start,int end){
//     //base case
//     if(start>end || length==0){
//         return ;
//     }
//     //processing
//     swap(name[start],name[end]);
//     start++;
//     end--;
//     //recursive call
//     reverseString(name,length,start,end);
// }
// int main(){
//     string name= "abcdef";
//     int len = name.length();
//     // cout<<len<<endl;
//     int start=0;
//     int end =len-1;
//     reverseString(name,len,start,end);
//     cout<<"string will be: "<<name<<endl;


// }
// ###############################################
// Pallindrome check ffrom recursion
// #include<iostream>
// using namespace std;
// bool check_Pallindrome(string str,int start,int end){
//     if(start>end){
//         return 1;
//     }
//     if(str[start]!=str[end]){
//         return 0;
//     }
//     else{
//         return check_Pallindrome(str,start+1,end-1);
//     }

// }
// int main(){
//     string str = "bookkoob";
//     int len=str.length();
//     if(check_Pallindrome(str,0,len-1)){
//         cout<<"Yeah its Pallindrome."<<endl;
//     }
//     else{
//         cout<<"No its Not"<<endl;
//     }
// }
// ##############################################
// power A ,B
// #include<iostream>
// using namespace std;
// int Powercalculator(int a,int b){
//     if(b==0)
//         return 1;

//     if(b==1)
//         return a;

//     int res = Powercalculator(a, b/2);
//     if(b%2==0)
//         return res * res;
//     else
//         return a * res * res;

// }
// int main(){
//   int a,b;
//   cin>>a>>b;
//   int ans = Powercalculator(a,b);
//   cout<<ans;
// }

// #############################################
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void bubble_sort(vector <int>&arr,int n){

//     for(int i=1;i<n;i++){
//         bool swapped = false;
//         for(int j=0;j<n-i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 swapped=true;
//             }
//         }
//         if(swapped==false){
//         // already sorted
//             break;
//     }
// }

// }
// int main(){
//     vector <int> arr={23,1,4,56,6,7};
//     int size=6;
//     bubble_sort(arr,size);
//     for( int it :arr){
//         cout<<it<<" ";
//     }
// }

// ####################################/**/
// #include<iostream>
// #include<vector>
// using namespace std;

// void BubbleSort(vector<int>&arr,int n){
//     if(n==0 || n==1){
//         return ;
//     }
//     for(int i=0;i<n-1;i++){
//         if(arr[i]>arr[i+1]){
//             swap(arr[i],arr[i+1]);
//         }
//     }
//     BubbleSort(arr,n-1);
// }
// int main(){
//     vector<int>arr={22,1,342,2,4,134,5};
//     int size = 7;
//     BubbleSort(arr,size);
//     for(int it:arr){
//         cout<<it<<" ";
//     }
// }

// ######################################################/*
// #include<iostream>
// using namespace std;
// void merge(int *arr,int s,int e){
//     int mid = s+(e-s)/2;
//     int len1= mid-s+1;
//     int len2=e-mid;
//     int *first = new int[len1];
//     int *second = new int[len2];
//     int k=s;
//     for(int i=0;i<len1;i++){
//         first[i]=arr[k++];
//     }
//     k=mid+1;
//     for(int i=0;i<len2;i++){
//         second[i]=arr[k++];
//     }
//     int index1 =0;
//     int index2=0;
//     k=s;

//     while(index1<len1  && index2<len2){
//         if(first[index1]<second[index2]){
//             arr[k++]=first[index1++];
//         }
//         else{
//             arr[k++]=second[index2++];
//         }

//     }
//     while(index1<len1){
//         arr[k++]=first[index1++];
//     }
//     while(index2<len2){
//         arr[k++]=second[index2++];
//     }
//     delete []first;
//     delete []second;

// }
// void mergeSort(int *arr,int s,int e){
//     if(s>=e){
//         return ;
//     }
//     int mid = s+(e-s)/2;
//     //left solve
//     mergeSort(arr,s,mid);
//     //right solve
//     mergeSort(arr,mid+1,e);
//     //full
//     merge(arr,s,e);
// }
// int main(){
//     int arr[] ={2,3,52,1,3,56,32,34,432,45};
//     int n=10;
//     mergeSort(arr,0,n-1);
//     for(int it:arr){
//         cout<<it<<" ";
//     }
//     return 0;

// }
// ########################################################
// #include<iostream>
// using namespace std;
// int partition(int arr[],int s,int e){
//     int pivot = arr[s];
//     int cnt=0;
//     for(int i=s+1;i<=e;i++){
//         if(arr[i]<=pivot)
//             cnt++;
//         }
//         //place pivot to right place.
//         int pvt_index = s+cnt;
//         swap(arr[pvt_index],arr[s]);
//         //left wala part sort kro
//         int i=s,j=e;
//         while(i<pvt_index && j> pvt_index){
//             while(arr[i]<=pivot)
//                 i++;

//             while(arr[j]>pivot)
//                 j--;
//             if(i<pvt_index && j> pvt_index)
//                 swap(arr[i++],arr[j--]);

//         }
//         return pvt_index;

//     }



// void quickSort(int arr[],int s,int e){
//     if(s>=e)
//         return ;

//     //partion kro
//     int p= partition(arr,s,e);
//     //left part sorting
//     quickSort(arr,s,p-1);
//     //right sort
//     quickSort(arr,p+1,e);
// }


// int main(){
//     int arr[]={12,3,4,2,2,13,21,20};
//     int n=8;
//     int s=0,e=n-1;
//     quickSort(arr,s,e);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// ###########################################################################
// #include<iostream>
// #include<vector>
// using namespace std;

// void subsets(vector<int> nums, int i,
//                                 vector<vector<int>>& ans, vector<int> output) {

//         // base case;
//         if (i >= nums.size()) {
//             ans.push_back(output);
//             return;
//         }
//         // exclude
//         subsets(nums, i + 1, ans, output);
//          // include
//         int element = nums[i] ;
//         output.push_back(element);
//         subsets(nums, i + 1,ans, output);
//     }


//     vector<vector<int>> solve(vector<int>& nums) {
//         vector<vector<int>> ans;
//         vector<int> output;
//         int i=0;
//         subsets(nums, i ,ans, output);
//         return ans;
//     }


// int main() {
//     vector<int> nums = {1, 2, 3};
//     // Solution solution;
//     vector<vector<int>> result = solve(nums);

//     // Output the result
//     for (const auto& subset : result) {
//         cout << "{ ";
//         for (int num : subset) {
//             cout << num << " ";
//         }
//         cout << "}";
//     }
// }
// ##############################################################
// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;
// void solve(string nums,int idx,string output,vector<string>& ans) {
// 	if(idx>=nums.length()) {
// 		ans.push_back(output);
// 		return;
// 	}
// 	//exclude
// 	solve(nums,idx+1,output,ans);
// 	//include
// 	char element = nums[idx];
// 	output.push_back(element);
// 	solve(nums,idx+1,output,ans);
// }
// vector<string>subsequences(string nums) {
// 	int idx=0;
// 	string output="";
// 	vector<string>ans;
// 	solve(nums,idx,output,ans);
// 	return ans;
// }
// int main() {
// 	string nums="abc";
// 	vector<string> result = subsequences(nums);

// 	for(const auto& subsequenece :result) {
// 	    cout<<"{";
// 		cout<<subsequenece;
// 		cout<<"}";
// 	};
// }
// ######################################################/*
// class Solution {
// private:
//   void solve(vector<int>nums,int idx,vector<vector<int>>& ans){
//          //base case
//          if(idx>=nums.size()){
//             ans.push_back(nums);
//             return ;
//          }
//         int number = nums[idx];
//         for(int i=idx;i<nums.size();i++){
//             swap(nums[idx],nums[i]);
//             solve(nums,idx+1,ans);
//             //backtrack
//             swap(nums[idx],nums[i]);
//         }
        
        
//   }
// public:
//     vector<vector<int>> permute(vector<int>& nums) {
//         vector<vector<int>>ans;  
//         int idx=0;
//         solve(nums,idx,ans);
//         return ans;

//     }
// };
// ################################################34
// class Solution {
// private:
//     bool issafe(int x, int y, vector<vector<int>>& visited, vector<vector<int>>& maze) {
//         if ((x >= 0 && x < visited.size()) && (y >= 0 && y < visited.size()) && visited[x][y] == 0 && maze[x][y] == 1) {
//             return true;
//         }
//         return false;
//     }

//     void solve(vector<vector<int>>& maze, vector<vector<int>>& visited,
//               vector<string>& ans, string path, int x, int y) {
//         if (x == visited.size() - 1 && y == visited.size() - 1) {
//             ans.push_back(path);
//             return;
//         }
        
//         visited[x][y] = 1;

//         // Down
//         int newx = x + 1;
//         int newy = y;
//         if (issafe(newx, newy, visited, maze)) {
//             path.push_back('D');
//             solve(maze, visited, ans, path, newx, newy);
//             path.pop_back();
//         }

//         // Up
//         newx = x - 1;
//         newy = y;
//         if (issafe(newx, newy, visited, maze)) {
//             path.push_back('U');
//             solve(maze, visited, ans, path, newx, newy);
//             path.pop_back();
//         }

//         // Left
//         newx = x;
//         newy = y - 1;
//         if (issafe(newx, newy, visited, maze)) {
//             path.push_back('L');
//             solve(maze, visited, ans, path, newx, newy);
//             path.pop_back();
//         }

//         // Right
//         newx = x;
//         newy = y + 1;
//         if (issafe(newx, newy, visited, maze)) {
//             path.push_back('R');
//             solve(maze, visited, ans, path, newx, newy);
//             path.pop_back();
//         }

//         visited[x][y] = 0;
//     }

// public:
//     vector<string> ratInMaze(vector<vector<int>>& maze) {
//         vector<string> ans;
//         if (maze[0][0] == 0) {
//             return ans;
//         }
        
//         int n = maze.size();
//         vector<vector<int>> visited(n, vector<int>(n, 0));
        
//         string path = "";
//         solve(maze, visited, ans, path, 0, 0);
//         sort(ans.begin(), ans.end());
//         return ans;
//     }
// };
