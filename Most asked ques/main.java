// Online Java Compiler
// Use this editor to write, compile and run your Java code online

abstract class Figure
{
  double dia1;
  double dia2;
  
  Figure(double a, double b)
  {
      dia1  = a;
      dia2 = b;
  }
    abstract double area ();
}


class Rectangle extends Figure
{
    Rectangle (double a, double b)
    {
        super(a,b);
    }
    double area ()
    {
        return dia1 * dia2;
    }
}

class Triangle extends Figure
{
    Triangle(double a, double b)
    {
        super(a,b);
    }
    double area()
    {
        return dia1 * dia2 / 2;
    }
}


public class AbstractEx
{
    public static void main(String args[])
    {
        Rectangle r = new Rectangle(9,5);
        Triangle t = new Triangle(10,8);
        
        Figure figuref;
        figuref = r;
        
        System.out.print(figuref.area() + "  ");
        
        figuref = t;
        System.out.print(figuref.area() + "  ");
        
        
    }

}


class editor{
    static String m (float f) {return "f";}
    static String m (float f) {return "F";}
    public static void main(String args[])
    {
        System.out.print(m(Float.parseFloat("l")));
        System.out.print(m(Float.floatValue()));
        System.out.print(m(Float.valueOf("l")));
    }
}