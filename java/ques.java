public class ques {

    static class Animal {
        String colour;

        Animal(String colour) {
            this.colour = colour;
        }

        void printcolour() {
            System.out.println("colour of animal is " + colour);
        }
    }

    static class Dog extends Animal {
        Dog(String colour) {
            super(colour);
        }
    }

    public static void main(String[] args) {
        Animal Lion = new Animal("Yellow");
        Animal dog = new Dog("Black");
        Lion.printcolour();
        dog.printcolour();
    }
}