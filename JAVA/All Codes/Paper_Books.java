

 class Books {
	int totel_pages;
	double price;
	String book_name,author_name;
	
	public Books()
	{
		totel_pages=100;
		price=150.10;
		book_name="Dream House";
		author_name="Sai Maradala";
	
	}
	public void display()
	{
		System.out.println("Name of the Book:"+book_name);
System.out.println("....................................");
		System.out.println("Author Name:"+author_name);
System.out.println("....................................");
		System.out.println("Totel Pages in a book :"+totel_pages);
System.out.println("....................................");
		System.out.println("Book Price:"+price);
System.out.println("....................................");
	}
}
    class Paper_Books extends Books
    {
    	int shipping_charges=50;
    	public void print()
    	{
    		display();
    		System.out.println("Delivery charges :"+shipping_charges);
    	}

	public static void main(String[] args)
	{
		Paper_Books pb=new Paper_Books();
		pb.print();

	}

}
