import java.util.ArrayList;
import java.util.Arrays;

public class Book {
    public static ArrayList<String> id = new ArrayList<String>(Arrays.asList("388c-e681-9152", "ed90-be30-5cdb", "d95e-0c4a-9523"));
    public static ArrayList<String> nama = new ArrayList<String>(Arrays.asList("title", "title", "title"));
    public static ArrayList<String> author = new ArrayList<String>(Arrays.asList("author", "author", "author"));
    public static ArrayList<String> category = new ArrayList<String>(Arrays.asList("Sejarah", "Cerita", "Novel"));
    public static ArrayList<Integer> stock = new ArrayList<Integer>(Arrays.asList(4, 0, 2));
}

class HistoryBook extends Book{
    String category = "History";
    public HistoryBook(){
        System.out.println("constructor?");
    }
}

class StoryBook extends Book{
    String category = "Story";
    public StoryBook(){
        System.out.println("constructor?");
    }
}

class TextBook extends Book{
    String category = "Text";
    public TextBook(){
        System.out.println("constructor?");
    }
}