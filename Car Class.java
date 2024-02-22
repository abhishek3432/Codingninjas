import java.io.*;

 

import java.util.* ;

 

 

import java.util.*;

 

class Car {

    int noOfGear;

    String color;

    // Write your constructor and printCarInfo method here.

 

}

 

class RaceCar extends Car {

    int maxSpeed;

    // Write your constructor and printRaceCarInfo method here.

    RaceCar(int noOfGear,String color,int maxSpeed){

        this.noOfGear=noOfGear;

        this.color=color;

        this.maxSpeed=maxSpeed;

    }

    void printInfo(){

        System.out.println("noOfGear:"+" "+this.noOfGear);

        System.out.println("color:"+" "+this.color);

        System.out.println("maxSpeed:"+" "+this.maxSpeed);

    }

}

 

class Solution {

    public static void main(String args[]) {

 

        Scanner sc = new Scanner(System.in);

 

        int noOfGear = sc.nextInt();

 

        // [IGNORE]: Extra "end line" in previous line.

        sc.nextLine();

 

        String color = sc.nextLine();

        int maxSpeed = sc.nextInt();

        RaceCar raceCar = new RaceCar(noOfGear, color, maxSpeed);

        raceCar.printInfo();

    }

}

