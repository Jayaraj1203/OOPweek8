import java.util.Random;

 public class Weather { // a class consists of data + operation
   
    // data
    public float temperature;
    public float wind;
    public float humidity;
    public float precipitation;
    
    // operation : must be tightly coupled to the data
    void generate(int Min, int Max) {
        temperature = rand() / (float) RAND_MAX * (Max - Min) + Min;
        wind = rand() / (float) RAND_MAX * Min;
        humidity = rand() / (float) RAND_MAX * 100;
        precipitation = rand() / (float) RAND_MAX * Min;
    }
} ;
