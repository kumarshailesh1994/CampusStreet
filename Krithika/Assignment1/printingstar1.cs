//problem no1
 //Write the logic of given problems in English with dry run.
 //1. To draw this pattern.

// 1
 //1 2
 //1 2 3
 //1 2 3 4
 //1 2 3 4 5
 //solution:

 class Program
 {
 static void Main(string[] args)
 {
 int i =1;
 for(i=1; i<=4; i++){
 for(int j=1; j<=i; j++){
 Console.Write(j+"\t");
 }
 Console.WriteLine("\n");
 }
 }
 }