import java.util.Scanner;

enum Evaluation{
    O,A_PLUS,A,B_PLUS,B
}

interface Evaluation{
    int calTotal();
    double calPer();
    Grade calgrade();
}


