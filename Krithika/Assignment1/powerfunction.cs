//6. Write logic of power function.
 //problem no6
 class Program
 {
 static void Main(string[] args)
 {
 int base = 2, pow = 3;
 long result = 1;
 while (pow != 0)
 {
 // result *= b;
 result = result * b;
 --pow;
 }
 Console.WriteLine("Answer = " + result);
 }
 }