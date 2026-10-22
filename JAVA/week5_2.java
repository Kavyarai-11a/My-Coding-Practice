import java.util.Scanner;

enum VehicleType {
    CAR, BIKE
}

class Vehicle {
    String number;
    int days;

    Vehicle(String number, int days) {
        this.number = number;
        this.days = days;
    }

    double calculateCost() {
        return 0.0;
    }

    void display(String type) {
        System.out.println("Vehicle Type: " + type);
        System.out.println("Vehicle Number: " + number);
        System.out.println("Rental Days: " + days);
        System.out.printf("Total Rental Cost: %.2f%n",
                          calculateCost());
    }
}

class Car extends Vehicle {
    Car(String number, int days) {
        super(number, days);
    }

    @Override
    double calculateCost() {
        return days * 1500.0;
    }
}

class Bike extends Vehicle {
    Bike(String number, int days) {
        super(number, days);
    }

    @Override
    double calculateCost() {
        return days * 500.0;
    }
}

public class week5_2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String type = sc.nextLine().trim();
        String number = sc.nextLine().trim();
        int days = sc.nextInt();

        VehicleType vehicleType;

        try {
            vehicleType = VehicleType.valueOf(type);
        } catch (IllegalArgumentException e) {
            System.out.println("Invalid Vehicle Type");
            sc.close();
            return;
        }

        if (days <= 0) {
            System.out.println("Invalid Rental Days");
            sc.close();
            return;
        }

        Vehicle vehicle;

        switch (vehicleType) {
            case CAR:
                vehicle = new Car(number, days);
                break;
            case BIKE:
                vehicle = new Bike(number, days);
                break;
            default:
                System.out.println("Invalid Vehicle Type");
                sc.close();
                return;
        }

        vehicle.display(vehicleType.name());
        sc.close();
    }
}

