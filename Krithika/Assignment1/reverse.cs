//5. Write logic to find whether a number is palindrome or not.
 //problem no5

 class Program
 {
 static void Main(string[] args)
 {

 var name = "krithika";
 var arraychar = name.ToCharArray();
 string finalReverseString = string.Empty;
 for(int i=name.Length-1; i>=0; i--){
finalReverseString =finalReverseString + arraychar[i].ToString();
 } Console.WriteLine(finalReverseString);
 if(name == finalReverseString){
 Console.WriteLine("palindrome");
 }
 else{
 Console.WriteLine("not a palindrome");
 }
 }
 }