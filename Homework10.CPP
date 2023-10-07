 

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
7)
double Echo(int n1,int n2,int n3)
{
    double r;
    r=(double)(n1+n2+n3)/3;
    return r;
}
int main()
{
    int n1,n2,n3;
    cout<<"Enter 3 numbers to get the average of those numbers:\n";
    cin>>n1>>n2>>n3;
    cout<<"Average of "<<n1<<","<<n2<<","<<n3<<" is:"<<Echo(n1,n2,n3);
    
    return 0;
}
8)
int absoluteValue(int n)
{
    return abs(n);
}
int main()
{
    int n;
    cout<<"Enter a number to get the absolute value of that number:";
    cin>>n;
    cout<<"Absolute value of "<<n<<" is :"<<absoluteValue(n);
    
    return 0;
}
9)
int Foxtrot(double d){
    return (int)d;
}
10)
string Golf(int n){
    if(n%2==0) return "Even";
    
    return "Odd";
}
int main(){
    cout<<Foxtrot(2.15)<<endl;
    cout<<Golf(4);
}

