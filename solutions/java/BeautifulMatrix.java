import java.util.Scanner;

public class BeautifulMatrix {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int arr[][] = new int[6][6];
        int p=0,q=0,i,j;
        for(i=1; i<=5; i++){
            for(j=1; j<=5; j++){
                arr[i][j] = sc.nextInt();
                    if(arr[i][j] == 1){
                        p=i;
                        q=j;

                    }
            }
        }
        int temp = 0;
       if(p>3 || q>3){
            if(p>3) temp += p-3;
            if(q>3) temp += q-3;
        }
        if(p<3 || q<3){
             if(p<3) temp += 3 - p;
             if(q<3) temp += 3 - q;
        }
        System.out.println(temp);

        sc.close();
    }
}
