/*
 * GDevelop JS Platform
 * Copyright 2008-2015 Florian Rival (Florian.Rival@gmail.com). All rights reserved.
 * This project is released under the MIT License.
 */
#include "MathematicalToolsExtension.h"
#include "GDCore/BuiltinExtensions/AllBuiltinExtensions.h"
#include "GDCore/Events/EventsCodeGenerator.h"
#include "GDCore/Events/EventsCodeGenerationContext.h"
#include "GDCore/Events/ExpressionsCodeGeneration.h"
#include "GDCore/Events/EventsCodeNameMangler.h"
#include "GDCore/Events/InstructionMetadata.h"
#include "GDCore/Tools/Localization.h"

namespace gdjs
{

MathematicalToolsExtension::MathematicalToolsExtension()
{
    gd::BuiltinExtensionsImplementer::ImplementsMathematicalToolsExtension(*this);

    SetExtensionInformation("BuiltinMathematicalTools",
                          GD_T("Mathematical tools"),
                          GD_T("Built-in extension providing mathematical tools"),
                          "Florian Rival",
                          "Open source (MIT License)");

    GetAllExpressions()["cos"]
        .SetFunctionName("Math.cos");
    GetAllExpressions()["sin"]
        .SetFunctionName("Math.sin");
    GetAllExpressions()["tan"]
        .SetFunctionName("Math.tan");
    GetAllExpressions()["abs"]
        .SetFunctionName("Math.abs");
    GetAllExpressions()["min"]
        .SetFunctionName("Math.min");
    GetAllExpressions()["max"]
        .SetFunctionName("Math.max");
    GetAllExpressions()["sqrt"]
        .SetFunctionName("Math.sqrt");
    GetAllExpressions()["acos"]
        .SetFunctionName("Math.acos");
    GetAllExpressions()["acosh"]
        .SetFunctionName("gdjs.evtTools.common.acosh");
    GetAllExpressions()["asin"]
        .SetFunctionName("Math.asin");
    GetAllExpressions()["asinh"]
        .SetFunctionName("gdjs.evtTools.common.asinh");
    GetAllExpressions()["atan"]
        .SetFunctionName("Math.atan");
    GetAllExpressions()["atan2"]
        .SetFunctionName("Math.atan2");
    GetAllExpressions()["atanh"]
        .SetFunctionName("gdjs.evtTools.common.atanh");
    GetAllExpressions()["cbrt"]
        .SetFunctionName("gdjs.evtTools.common.cbrt");
    GetAllExpressions()["ceil"]
        .SetFunctionName("Math.ceil");
    GetAllExpressions()["floor"]
        .SetFunctionName("Math.floor");
    GetAllExpressions()["cosh"]
        .SetFunctionName("gdjs.evtTools.common.cosh");
    GetAllExpressions()["sinh"]
        .SetFunctionName("gdjs.evtTools.common.sinh");
    GetAllExpressions()["tanh"]
        .SetFunctionName("gdjs.evtTools.common.tanh");
    GetAllExpressions()["cot"]
        .SetFunctionName("gdjs.evtTools.common.cot");
    GetAllExpressions()["csc"]
        .SetFunctionName("gdjs.evtTools.common.csc");
    GetAllExpressions()["sec"]
        .SetFunctionName("gdjs.evtTools.common.sec");
    GetAllExpressions()["exp"]
        .SetFunctionName("Math.exp");
    GetAllExpressions()["log10"]
        .SetFunctionName("gdjs.evtTools.common.log10");
    GetAllExpressions()["log2"]
        .SetFunctionName("gdjs.evtTools.common.log2");
    GetAllExpressions()["log"]
        .SetFunctionName("Math.log");
    GetAllExpressions()["ln"]
        .SetFunctionName("Math.ln");
    GetAllExpressions()["pow"]
        .SetFunctionName("Math.pow");
    GetAllExpressions()["nthroot"]
        .SetFunctionName("gdjs.evtTools.common.nthroot");
    GetAllExpressions()["sign"]
        .SetFunctionName("gdjs.evtTools.common.sign");
    GetAllExpressions()["mod"]
        .SetFunctionName("gdjs.evtTools.common.mod");
    GetAllExpressions()["AngleDifference"]
        .SetFunctionName("gdjs.evtTools.common.angleDifference");
    GetAllExpressions()["int"]
        .SetFunctionName("Math.round");
    GetAllExpressions()["rint"]
        .SetFunctionName("Math.round");
    GetAllExpressions()["round"]
        .SetFunctionName("Math.round");
    GetAllExpressions()["trunc"]
        .SetFunctionName("gdjs.evtTools.common.trunc");
    GetAllExpressions()["lerp"]
        .SetFunctionName("gdjs.evtTools.common.lerp");

    StripUnimplementedInstructionsAndExpressions();
}

}
