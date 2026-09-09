class Animals {
	
	void sound() {
		System.out.println("It makes sound");
	}
}

class Dog extends Animals {

	@Override
	void sound() {
		System.out.println("Barks");
	}
}

class Cat extends Animals {

	@Override
	void sound() {
		System.out.println("Mewo");
	}
}

public class OverR {
	public static void main(String[] args) {
		Dog d = new Dog();
		d.sound();

		Cat c = new Cat();
		c.sound();
	}
}
