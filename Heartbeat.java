
public class Heartbeat {
	public static void main(String[] args) {
		double time = 0;
		while(time<10)
		{
			try {
				Thread.sleep(1000);
				time += 1;
				System.out.println(time+" elapsed");
			}
			catch(InterruptedException e) {
				e.printStackTrace();
			}
		}
	}

}
