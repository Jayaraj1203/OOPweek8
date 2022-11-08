import java.util.Random;

WeatherStationList wsl;
void dispSensorStats();

public static void main(String[] args) {
wsl.input();
    wsl.dispWeatherStatistic();
    dispSensorStats();
    return 0;
}

void dispSensorStats(){
    System.out.println("Statistic of the sensor for all Locations);
    public int maxSensor = wsl.calcMaxNumSensors();
    public int minSensor = wsl.calcMinNumSensors();
    public float avgSensor = wsl.calcAvgNumSensors();
}
