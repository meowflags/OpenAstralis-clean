package cc.astralis;


import java.lang.invoke.MethodHandles;


import java.util.concurrent.ThreadFactory;
import java.util.concurrent.atomic.AtomicInteger;


import lombok.NonNull;

class MultithreadingThread implements ThreadFactory {
   private final AtomicInteger dwa = new AtomicInteger(0);
   private static final long a = 34229699619242L;


   @Override
   public Thread newThread(@NonNull Runnable r) {
      if (a == null) {
         throw new NullPointerException("r is marked non-null but is null");
      } else {
         int var10003 = a.dwa.incrementAndGet();
         return new Thread(a, "Multithreading Thread " + var10003);
      }
   }

}
