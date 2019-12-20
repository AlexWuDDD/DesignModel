//
// Created by Wu Alex on 2019/11/16.
//

#ifndef DESIGNPATTERN_VARIABLETEMPLATE_H
#define DESIGNPATTERN_VARIABLETEMPLATE_H

template <typename T>
constexpr T pi =
T(3.14159263589793238462643383);

void VariableTemplateTest(){
    printf("****** Variable Template ******\n");
    printf("pi<float> = %f\n", pi<float >);
    printf("pi<double》 = %.15f\n", pi<double>);
}





#endif //DESIGNPATTERN_VARIABLETEMPLATE_H
