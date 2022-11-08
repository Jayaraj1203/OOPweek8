import java.util.Random;

public class WeatherStation extends WeatherList{

public class WeatherStation {
  
    // data
    public string location;
    public string reportingbody;
    public int numsensors;
    WeatherList weatherData;
    
    // operations
    public static void readWeatherStationData() {
        // read in data for each weather station
        System.out.println("Enter location : ");

        System.out.println("Enter reporting body : ");

        System.out.println("Enter number of sensors used : ");

        weatherData.readWeather();
    }
    
    public static void calcStats() {
        public float mintemp = weatherData.minTemperature();
        public float minhumi = weatherData.minHumidity();
        public float minpreci = weatherData.minPrecipitation();
        public float minwind = weatherData.minWind();
        
        public float maxtemp = weatherData.maxTemperature();
        public float maxhumi = weatherData.maxHumidity();
        public float maxpreci = weatherData.maxPrecipitation();
        public float maxwind = weatherData.maxWind();
           
        public float avgtemp = weatherData.avgTemperature();
        public float avghumi = weatherData.avgHumidity();
        public float avgpreci = weatherData.avgPrecipitation();
        public float avgwind = weatherData.avgWind();
           
        public float stdDevtemp = weatherData.stdDevTemperature(avgtemp);
        public float stdDevhumi = weatherData.stdDevHumidity(avghumi);
        public float stdDevpreci = weatherData.stdDevPrecipitation(avgpreci);
        public float stdDevwind = weatherData.stdDevWind(avgwind);
    }
}
} ;
