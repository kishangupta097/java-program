import java.util.*;

public	class ArrayList1
	{
	public static void main(String args[])
		{
		ArrayList <String> list = new ArrayList<String>();
		list.add("pune");
		list.add("nagpur");
		list.add("nasik");
		list.add("akola");
		list.add("yeola");
		System.out.println("Before sorting:"+list);
		Collections.sort(list);
		System.out.println("after Sorting"+list);
		}
	}
