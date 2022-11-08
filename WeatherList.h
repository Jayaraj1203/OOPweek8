import java.util.Random;

public class WeatherList extends Weather {

public class WeatherList {
    public:
        // data part
        // collection of data for a single location
      Weather weather[NUMDATA];  
    
        //operations
      public static void readWeather() {
            // read in weather data for a single weather station    
            float Max = 40;
            float Min = 20;
            
            for (int i=0; i<NUMDATA; i++) {
                weather[i].generate(Min, Max);
                }    
        }
    
        public float minTemperature() {
            float min = weather[0].temperature;
            for (int i=1; i<NUMDATA; i++) {
                if (min > weather[i].temperature) {
                    min = weather[i].temperature;
                }
            }    
        return min;
        }
        
        public float minHumidity() {
            float min = weather[0].humidity;
            for (int i=1; i<NUMDATA; i++) {
                if (min > weather[i].humidity) {
                    min = weather[i].humidity;
            }
        }    
        return min;
        }
        
        public float minPrecipitation() {
            float min = weather[0].precipitation;
            for (int i = 1; i < NUMDATA; i++) {
                if (min > weather[i].precipitation) {
                    min = weather[i].precipitation;
                }
            }    
            return min;
        }

        public float minWind() {
            float min = weather[0].wind;
            for (int i = 1; i < NUMDATA; i++) {
                if (min > weather[i].wind) {
                    min = weather[i].wind;
                }
            }    
            return min;
        }
        
        public float maxTemperature() {
            float max = weather[0].temperature;
            for (int i=1; i<NUMDATA; i++) {
                if (max < weather[i].temperature) {
                    max = weather[i].temperature;
            }
        }
        return max;
        }
        
        public float maxHumidity() {
            float max = weather[0].humidity;
            for (int i = 1; i < NUMDATA; i++) {
                if (max < weather[i].humidity) {
                    max = weather[i].humidity;
                }
            }
            return max;
        }

        public float maxPrecipitation() {
            float max = weather[0].precipitation;
            for (int i = 1; i < NUMDATA; i++) {
                if (max < weather[i].precipitation) {
                    max = weather[i].precipitation;
                }
            }
            return max;
        }
        
        public float maxWind() {
            float max = weather[0].wind;
            for (int i = 1; i < NUMDATA; i++) {
                if (max < weather[i].wind) {
                    max = weather[i].wind;
                }
            }
            return max;
        }
        
        public float avgTemperature() {
        float sum = 0;
        for (int i=0; i<NUMDATA; i++) {
            sum += weather[i].temperature;
        }    
        float avg = sum / NUMDATA;    
        return avg;
        }
        
        public float avgHumidity() {
            float sum = 0;
            for (int i = 0; i < NUMDATA; i++) {
                sum += weather[i].humidity;
            }    
            float avg = sum / NUMDATA;    
            return avg;
        }
        
        public float avgPrecipitation() {
            float sum = 0;
            for (int i = 0; i < NUMDATA; i++) {
                sum += weather[i].precipitation;
            }    
            float avg = sum / NUMDATA;    
            return avg;
        }
        
        public float avgWind() {
            float sum = 0;
            for (int i = 0; i < NUMDATA; i++) {
                sum += weather[i].wind;
            }    
            float avg = sum / NUMDATA;    
            return avg;
        }
        
        public float stdDevTemperature(float avg) {
            float sum = 0;
            for(int i = 0; i < NUMDATA; i++){
                sum += pow((weather[i].temperature - avg),2);
            }
            float stdDev = sqrt(sum / NUMDATA);
            return stdDev;
        }
        
        public float stdDevHumidity(float avg) {
            float sum = 0;
            for(int i = 0; i < NUMDATA; i++){
               sum += pow((weather[i].humidity - avg),2);
            }
            float stdDev = sqrt(sum / NUMDATA);
            return stdDev;
        }
        
        public float stdDevWind(float avg) {
            float sum = 0;
            for(int i = 0; i < NUMDATA; i++){
               sum += pow((weather[i].wind - avg),2);
            }
            float stdDev = sqrt(sum / NUMDATA);
            return stdDev;
        }
        
        public float stdDevPrecipitation(float avg) {
            float sum = 0;
            for(int i = 0; i < NUMDATA; i++){
               sum += pow((weather[i].precipitation - avg),2);
            }
            float stdDev = sqrt(sum / NUMDATA);
            return stdDev;
        }
} 
    };
