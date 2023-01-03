import logMessage from "./logger"

class CalorieTracker{
    constructor(maxCalories){
        this.maxCalories=maxCalories
        this.currentCalories=0
    }


    trackCalories(caloriesCount)
    {

        this.currentCalories+=caloriesCount

        if(this.currentCalories > this.maxCalories)

            logMessage('Max calories exceeded')
        
    }


            // This function violets the SRP , so we will move it to a module 
    /*logCaloriesPlus(){
        console.log('Max calories exceeded')
    }*/
}

 // After we change the calorie tracker has only reason to change is how we tracking our calories 

 // Also done with logger 