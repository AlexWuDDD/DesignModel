#include <iostream>
#include "FunctionTemplates.h"
#include "FunctionTemplate2.h"
#include "ClassTemplares.h"
#include "ClassTemplates2.h"
#include "VariableTemplate.h"
#include "NontypeTemplateParameters.h"
#include "TemplateSpecializations.h"
#include "PartialSpecialization.h"
#include "TemplateFunctionOverloading.h"
#include "VariadicTemplates.h"
#include "LambdaExpressions.h"
#include "WellDesignedMemoryOwnership.h"
#include "ExpressNonOwnship.h"
#include "ExpressingExclusiveOwnership.h"
#include "ExpressingTransferOfExclusiveOwnership.h"
#include "ExpressingSharedOwnership.h"
#include "SwapAndSTLContainers.h"
#include "SwapAndExceptionSafety.h"
#include "OtherCommonSwapIdioms.h"
#include "ImplementingSwap.h"
#include "UsingSwapCorrectly.h"

int main() {
    std::cout << "Hello, design pattern!" << std::endl;
    FunctionTemplateTest();
    FuncationTemplate2Test();
    ClassTemplatesTest();
    ClassTemplates2Test();
    VariableTemplateTest();
    TemplateSpecializationTest();
    PartialSpecializationTest();
    TemplateFunctionOverloadingTest();
    VariadicTemplatesTest();
    LambdaExpressionsTest();
    WellDesignedMemoryOwnershipTest();
    ExpressNonOwnshipTest();
    ExpressingExclusiveOwnershipTest();
    ExpressingTransferOfExclusiveOwnershipTest();
    ExpressingSharedOwnershipTest();
    SwapAndSTLContainersTest();
    SwapAndExceptionSafetyTest();
    OtherCommonSwapIdiomsTest();
    ImplementingSwapTest();
    UsingSwapCorrectlyTest();
    return 0;
}