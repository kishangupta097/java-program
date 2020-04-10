import java.lang.*;import java.util.*;
public class anagram1
{
	public static void main(String args[])

	{
	Scanner sc = new Scanner(System.in);
	System.out.println("ENter String:");
	System.out.println();
	String str= sc.nextLine();
	String str2 = sc.nextLine();
	str=str.toLowerCase();
	str2=str2.toLowerCase();
	
	if(str.length() != str2.length())
	{
	System.out.println(" both String are not anagram");
	
	}
	else
	{
char[] cstr=str.toCharArray();
char[] cstr2=str.toCharArray();
Arrays.sort(cstr);
Arrays.sort(cstr2);
  if(Arrays.equals(cstr,cstr2) == true) {  
                System.out.println("Both the strings are anagram");  
            }  
            else {  
                System.out.println("Both the strings are not anagram");  
            }  

	}
	}
	
	
	
	
	}
