#include <stdio.h>


typedef struct neuron neuron;


struct neuron{

    double in;

    double out;

    double* weight;

    

};

double idenitiy_function(double x){

    return x;

    

}

void feed_Forward(neuron* previous, neuron* current ,int np , int nc,double(*f)(double x)){

        

    for (int i = 0; i < nc; i++) {

        current[i].in =0;

        for(int j = 0; j <np ;j++ ){

            current[i].in += previous[j].out * previous[j].weight[i];

        }

        current[i].out = f(current[i].in);

    }

}



int main()

{

    

    int np=3;

    int nc = 2;

    double weight[2]= {0.2 ,0.2};

    neuron previous_layer[np];

    for(int i=0 ;i<np ;i++){

        previous_layer[i].in=0;

        previous_layer[i].out=1;

        previous_layer[i].weight = weight;

        

            

   }

    

   neuron current_layer[nc];
feed_Forward(previous_layer,current_layer,np,nc,idenitiy_function);

    printf("out for current_layer%f\n", current_layer[0].out);

    

    return 0;

}

