public class Main {
    
    static class CountUpRunnable implements Runnable {
        @Override
        public void run() {
            for (int i = 1; i <= 20; i++) {
                System.out.println("Thread One: " + i);
                try {
                    Thread.sleep(500);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
        }
    }

    static class CountDownRunnable implements Runnable {
        @Override
        public void run() {
            for (int i = 20; i >= 0; i--) {
                System.out.println("Thread Two: " + i);
                try {
                    Thread.sleep(500);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
        }
    }

    public static void main(String[] args) {
        Thread countUp = new Thread(new CountUpRunnable());
        countUp.start();
    
        try {
            countUp.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    
        Thread countDown = new Thread(new CountDownRunnable());
        countDown.start();

        try {
            countDown.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
}
