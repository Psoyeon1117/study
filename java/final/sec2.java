package exam8.sec01;
import java.util.ArrayList;
import java.util.List;

public class sec2 {
    public static void main(String[] args) {
    	
        List<? super Integer> list = new ArrayList<Number>();
        list.add(1); // Integer 값을 추가할 수 있음
        
        Object obj = list.get(0); // 값을 가져올 수는 있지만, 반환 타입은 Object
       // Integer obj = list.get(0); // 값을 가져올 수 없다.
        System.out.println(obj);
        
        // Integer num = list.get(0); // 오류: Type mismatch
    }

}
