public class Main {
    //int a=1;
    public static void main(String[] args){
      Main.staticMethod();
    }
      public static void staticMethod() {
          System.out.println("This is a static method");
          //System.out.println(a);

          // Create an instance of MyClass
          Main myObject = new Main();

          // Call the non-static method using the instance reference
          myObject.nonStaticMethod();
      }

      public void nonStaticMethod() {
          System.out.println("This is a non-static method");
      }
  }
