import java.util.Scanner;

class AccountD 
{
	private String AccountNo;
	private String HolderName;
	private double balance;

	AccountD(String AccountNo,String HolderName,double balance)
	{
		this.AccountNo = AccountNo;
		this.HolderName = HolderName;
		this.balance = balance;	
	}

	class Tranjection
	{
		
		void pay(double amount)	
		{
			if(amount > 0)
			{
				balance += amount;
			}

			else
			System.out.println("Invalid amount");
		}
		
		void withdraw(double amount)
		{
			if(amount < balance)
			{
				balance -= amount;
			}

			else
			System.out.println("Invalid amount");
		}
	}

	void display()
	{
		System.out.println("Account No = "+AccountNo);
		System.out.println("Holder Name = "+HolderName);
		System.out.println("Balance = "+balance);
	}
}

public class PayDemo
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		AccountD account = new AccountD("ACC101", "Rahul", 10000);
		
		AccountD.Tranjection tranjection = account.new Tranjection();
		
		System.out.println("Enter amount to pay");
		double a1 = sc.nextDouble();
		System.out.println("Enter amount to withdraw");
		double a2 = sc.nextDouble();

		tranjection.pay(a1);
		tranjection.withdraw(a2);
		
		account.display();
		sc.close();
	}
}

	