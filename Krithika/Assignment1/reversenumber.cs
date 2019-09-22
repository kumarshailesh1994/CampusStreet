//4. Write logic to reverse a given number.
 //problem no4
 class Program
 {
 static void Main(string[] args)
 {
 var name = "anjali";
 var arraychar = name.ToCharArray();
 string finalReverseString = string.Empty;
 for(int i=name.Length-1; i>=0; i--){
 finalReverseString =finalReverseString + arraychar[i].ToString();

 }
 Console.WriteLine(finalReverseString);
 }
 }