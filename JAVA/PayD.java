import java.util.Scanner;

interface Payment {
	void pay(double amount);
	void refund(double amount);
}

class UPI implements Payment
{
	private String upiId;

	UPI(String upiId)
	{
		this.upiId = upiId;
	}

	public void pay(double amount)
	{
		System.out.println("Amount $" +amount+ " payed successfully");
		System.out.println("UPI ID : " +upiId);
	}
	
	public void refund(double amount)
	{
		System.out.println("Amount $" +amount+ " refunded successfully");
	}
}

class NetBanking implements Payment
{
	private String bankName;

	NetBanking(String bankName)
	{
		this.bankName = bankName;
	}

	public void pay(double amount)
	{
		System.out.println("Amount $" +amount+ " payed successfully");
		System.out.println("Bank Name : " +bankName);
	}
	
	public void refund(double amount)
	{
		System.out.println("Amount $" +amount+ " refunded successfully");
	}
}

public class PayD
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Enter amount : ");
		double amount = sc.nextDouble();

		System.out.println("Choices");
		System.out.println("1. UPI");
		System.out.println("2. Net Banking");

		System.out.println("Enter your choice : ");
		int choice = sc.nextInt();

		Payment payment;

		switch(choice)
		{
		case 1:
		payment = new UPI("@kavya123");
		break;

		case 2:
		payment = new NetBanking("State Bank Of India");
		break;

		default:
		System.out.println("Invalid Input");
		sc.close();
		return;
		}

		payment.pay(amount);
		payment.refund(amount);

		sc.close();
	}
}