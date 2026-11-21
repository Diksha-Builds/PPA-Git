class SingleGC
{
    public static void main(String A[])
    {
        System.out.println("Inside main");

        Derived dobj = new Derived();
        
        System.out.println(dobj.i);
        System.out.println(dobj.j);
        System.out.println(dobj.x);

        dobj.fun();
        dobj.gun();

        dobj = null;

        System.gc();
        
        System.out.println("End of main");
    }
}

class Base
{
    public int i;
    public int j;

    public Base()
    {
        System.out.println("Inside Base constrcutor");
        this.i = 0;
        this.j = 0;
    }

    protected void finalize()
    {
        System.out.println("Inside Finalize method of Base");
    }

    public void fun()
    {
        System.out.println("Inside Base fun");
    }
}

class Derived extends Base
{
    public int x;

    public Derived()
    {
        System.out.println("Inside Derived Constructor");
        this.x = 0;
    }

    protected void finalize()
    {
        System.out.println("Inside Finalize method of Derived");
    }

    public void gun()
    {
        System.out.println("Inside gun of Derived");
    }
}

