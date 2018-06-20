import java.util.Scanner;

public class Main {

	static int N;
	static int[] mo=new int[8];
	static char[] op= { ' ', '+', '-'};
	
	static void dfs(int n){
		if(n == N-1)
		{
			int sum = 0, val = 1, sign = 1;
			for(int i=0;i<N-1;i++){
				if(mo[i]==0) val = val *10 + i + 2;
				else
				{
					sum += val * sign;
					val = i + 2;
					sign = (mo[i] == 1 ? 1 : -1);
				}
			}
			sum += val * sign;
			if(sum == 0)
			{
				for(int i=0; ; i++)
				{
					System.out.print(i+1);
					if(i == N -1)
					{
						System.out.println();
						break;
					}
					System.out.print(op[mo[i]]);
				}
			}
			return;
		}
		for (int i = 0; i<3; i++) {
			mo[n] = i;
			dfs(n + 1);
		}

	}
	
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for(int i=0;i<T;i++){
        	N = sc.nextInt();
        	dfs(0);
        	System.out.println();
        }
    }
}