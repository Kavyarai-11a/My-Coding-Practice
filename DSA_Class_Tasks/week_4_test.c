typedef struct {
    int id;
    char title[30];
    float price;
} Book;

void readB(Book *B,int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",B[i]->id);
        scanf("%s",B[i]->title);
        scanf("%f",B[i]->price);
    }
}
int main()
{
    Book *B;
    
}