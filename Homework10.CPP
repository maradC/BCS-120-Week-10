 

1)
void Alpha() {     
int i = 10;    
 while(i >= -10) 
{         i--;     } }  
2) 
void Beta() 
{     for(int i = 5; i <= 20; i++) {   
cout<<"The cube root of "<<i<<" is: "<<(i*i*i)<<endl;     } }
3)
void Gamma() {     for(int i = 1; i <= 20; i++) {         double n = ((double) rand() / (RAND_MAX));  
       cout <<n <<endl;     } }
4)
int Delta() {     int age;     cout << "Enter your age\n";     cin >> age;          while(age < 0 || age > 100) {         cout <<"Enter a valid age\n";         cin >> age;     } }
5)
int Bravo(int n) {     return 10 * n; }
6)
string Charlie(string name)
{
    return "Hello "+name;
}
int main()
{
     string name;
    cout<<"Enter your name:";
    cin>>name;
    cout<<Charlie(name)<<"!";
    return 0;
}
