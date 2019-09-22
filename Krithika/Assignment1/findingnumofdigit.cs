//problem no3
 //3. Write logic to find number of digits in a given number.

 class Program
 {
 static void Main(string[] args)
 {
 int num = 123456;
 int count = 0;
 while(num > 0){
 num = num/10;
 count++;
 }
 Console.WriteLine("The count of numbers is :" + count);
 }
 }
 }