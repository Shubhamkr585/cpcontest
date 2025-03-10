class Test{
	public static void display()    {        
		System.out.println("In test display function ");    
	}    
	public void show()    {        
		System.out.println("In test show function");    
	}
}
class Test1 extends Test{    
	public static void display()    {        
		System.out.println("In test1 display function ");    
	}    
	public void show()    {        
		System.out.println("In test1 show function");    
	}
}
public class Main{	
	public static void main(String[] args) {	    
		Test t=new Test();	    
		Test t1=new Test1();	    
		t.display();	    
		t1.display();	   
		//  t.show();	    
		// t1.show();			
	}
}
