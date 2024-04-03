public class User {
    public void displayBook(){
        Book book = new Book();
        System.out.println("===========================================================================================================================================");
        System.out.println("|| No. || Id Buku\t\t\t || Nama Buku\t\t\t || Author\t\t || Category\t\t || Stock\t || ");
        for (int i = 0; i < book.id.size(); i++){
            System.out.printf("|| %d   || %s\t\t || %s\t\t\t || %s\t\t || %s\t\t || %d\t\t || \n", i, book.id.get(i), book.nama.get(i), book.author.get(i), book.category.get(i), book.stock.get(i));
        }
        System.out.println("===========================================================================================================================================");
    }
}
