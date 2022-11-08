import java.util.Random;

public class WeatherStationList extends WeatherStation{

class WeatherStationList {

    // data
    WeatherStation stations[NUMSTATIONS];
    
    public static void dispWeatherStatistic() {
        for(int i = 0; i < NUMSTATIONS; i++) {
            cout<<"Weather Statistic for Location " << i+1 << "--" <<  endl;
            stations[i].calcStats();
        }
    }
    
    // operations
    public int calcMaxNumSensors() {
        int max = stations[0].numsensors;
        for (int i=1; i < NUMSTATIONS; i++) {
            if (max < stations[i].numsensors) {
                max = stations[i].numsensors;
            }
        }
        return 0;
    }
    
    public int calcMinNumSensors() {
        int min = stations[0].numsensors;
        for (int i=1; i < NUMSTATIONS; i++) {
            if (min > stations[i].numsensors) {
                min = stations[i].numsensors;
            }
        }
        return 0;
    }
    
    public int calcAvgNumSensors() {
        float sum = 0;
            for (int i=0; i < NUMSTATIONS; i++) {
                sum += stations[i].numsensors;
            }    
        float avg = sum / NUMSTATIONS;
        return 0;
    }
    
    public static void input() {
        for (int i=0; i < NUMSTATIONS; i++) {
            stations[i].readWeatherStationData();
            cout<<"Location" << i+1 << endl;
        }
    }
}
};
